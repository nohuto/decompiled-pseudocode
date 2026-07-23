/*
 * XREFs of KeAddSystemServiceTable @ 0x14074E360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall KeAddSystemServiceTable(int *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v7; // r9d
  int v8; // r10d
  int *v9; // rdi
  int v10; // edx
  __int64 v11; // rax
  __int64 v13; // rcx
  int v14; // r10d
  int *v15; // rbx
  int v16; // edx
  __int64 v17; // rax

  if ( (unsigned int)(a5 - 1) <= 1 )
  {
    v7 = 0;
    if ( a5 == 2 )
    {
      if ( !(_QWORD)xmmword_1405429E0 )
        goto LABEL_12;
    }
    else if ( !(_QWORD)xmmword_14055A8A0 && !(_QWORD)xmmword_1405429A0 )
    {
      if ( a5 == 1 )
      {
        *((_QWORD *)&xmmword_1405429B0 + 1) = a4;
        *(_QWORD *)&xmmword_1405429A0 = a1;
        v8 = (unsigned int)&xmmword_1405429A0 + (_DWORD)a1 + KiTableInformation;
        LODWORD(xmmword_1405429B0) = a3;
        if ( a3 )
        {
          v9 = a1;
          do
          {
            v10 = *v9;
            v11 = *v9++;
            v8 = ++v7 * ((v10 + *(int *)((char *)a1 + (v11 >> 4))) ^ v8);
          }
          while ( v7 < a3 );
        }
        KiTableInformation += 2 * v8;
        return 1;
      }
LABEL_12:
      v13 = 2LL * (unsigned int)(a5 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v13] = a1;
      LODWORD(KeServiceDescriptorTableFilter[v13 + 1]) = a3;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v13 + 1] + 1) = a4;
      if ( a5 == 2 )
      {
        v14 = (unsigned int)&xmmword_1405429E0 + xmmword_1405429E0 + KiTableInformation;
        if ( (_DWORD)xmmword_1405429F0 )
        {
          v15 = (int *)xmmword_1405429E0;
          do
          {
            v16 = *v15;
            v17 = *v15++;
            v14 = ++v7 * ((v16 + *(_DWORD *)((v17 >> 4) + xmmword_1405429E0)) ^ v14);
          }
          while ( v7 < (unsigned int)xmmword_1405429F0 );
        }
        KiTableInformation += 2 * v14;
      }
      return 1;
    }
  }
  return 0;
}
