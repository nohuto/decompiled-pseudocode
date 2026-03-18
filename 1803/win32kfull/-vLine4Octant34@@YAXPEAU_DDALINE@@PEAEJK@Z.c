/*
 * XREFs of ?vLine4Octant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02A5BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine4Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // edi
  int v5; // r11d
  int v6; // r15d
  int v7; // r14d
  int v8; // esi
  __int64 v9; // rbp
  unsigned __int8 *v10; // rbx
  char v11; // r8
  bool v12; // sf
  int v13; // r11d
  int v14; // r9d
  int v15; // eax

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_DWORD *)a1 + 5);
  v8 = *((_DWORD *)a1 + 3);
  v9 = a3;
  v10 = a2;
  v11 = a4 & 0xF | (16 * (a4 & 0xF));
  a2[(unsigned __int64)v4 >> 1] = a2[(unsigned __int64)v4 >> 1] & PixelLineMask4[v4 & 1] | v11 & ~PixelLineMask4[v4 & 1];
  while ( --v8 )
  {
    --v4;
    v12 = v7 + v5 < 0;
    v13 = v7 + v5;
    v14 = v13;
    if ( !v12 )
      v10 += v9;
    v15 = v13;
    v5 = v13 - v6;
    v10[(unsigned __int64)v4 >> 1] = v10[(unsigned __int64)v4 >> 1] & PixelLineMask4[v4 & 1] | v11 & ~PixelLineMask4[v4 & 1];
    if ( v15 < 0 )
      v5 = v14;
  }
}
