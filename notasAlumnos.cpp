#include <iostream>
#include <vector>

using namespace std;
int main() {

     int cantidadAlumnos;
     double notas, sumanotas;
     string apellido;
     vector <string> Apellidos;
     vector <double> Notas;

    cout << "ingrese la cantidad de alumnos que rindieron: ";
    cin >> cantidadAlumnos;

    for (int i = 0; i<cantidadAlumnos; i++){
            sumanotas = 0;

        cout << "ingresee el apellido del alumno " << i+1 << ": ";
        cin >> apellido;

        Apellidos.push_back(apellido);
    for (int j = 0; j< 4; j++){


        cout << "ingrese la nota " << j+1 << ": ";
        cin >> notas;

        sumanotas += notas;
    }

    Notas.push_back(sumanotas);
}

cout << endl;

for (int i = 0; i < cantidadAlumnos; i++){

    if (Notas[i] > 2.5){
        cout << "el alumno " << Apellidos[i] << " aprobo con: " << Notas[i] << endl;
    }

}
cout << endl;
cout << "todos los alumnos: " << endl;

for (int i = 0; i < cantidadAlumnos; i++){

    cout << Apellidos[i] << ": " << Notas[i] << endl;

}


  return 0;
}
