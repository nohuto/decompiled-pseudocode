/*
 * XREFs of PpmPerfApplyCapsAndFloors @ 0x140113090
 * Callers:
 *     PpmPerfApplyDomainState @ 0x140112990 (PpmPerfApplyDomainState.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfApplyCapsAndFloors(unsigned int *a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r10
  char v5; // bl
  char v7; // si
  unsigned int v8; // r11d
  unsigned int *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // eax

  v4 = *(unsigned int *)(a4 + 200);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v7 = *(_BYTE *)(a4 + 346);
    v8 = *a3;
    v9 = (unsigned int *)(*(_QWORD *)(a4 + 208) + 24LL);
    v10 = *a2;
    do
    {
      v11 = v9[1];
      v12 = v10;
      if ( v11 >= v9[6] )
        v11 = v9[6];
      if ( v7 && v11 >= *v9 )
        v11 = *v9;
      if ( v11 < 0x64 && *a1 > v11 )
      {
        v5 = 1;
        *a1 = v11;
      }
      v13 = *v9;
      if ( v11 < *v9 )
        v13 = v11;
      if ( v8 > v13 )
        v8 = v13;
      v10 = v9[7];
      if ( v12 >= v10 )
        v10 = v12;
      v9 += 34;
      --v4;
    }
    while ( v4 );
    *a3 = v8;
    *a2 = v10;
  }
  return v5;
}
