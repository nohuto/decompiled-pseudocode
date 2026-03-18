/*
 * XREFs of ?vLine32Octant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02A5900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine32Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // edi
  int v6; // ebx
  int v7; // r11d
  unsigned __int8 *v8; // rcx
  bool v9; // sf
  int v10; // r10d
  int v11; // edx
  int v12; // eax

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 3);
  v8 = &a2[4 * *((int *)a1 + 1)];
  while ( 1 )
  {
    *(_DWORD *)v8 = a4;
    if ( !--v7 )
      break;
    v8 -= 4;
    v9 = v6 + v4 < 0;
    v10 = v6 + v4;
    v11 = v10;
    if ( !v9 )
      v8 += a3;
    v12 = v10;
    v4 = v10 - v5;
    if ( v12 < 0 )
      v4 = v11;
  }
}
