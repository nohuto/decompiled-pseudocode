/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01D1A08
 * Callers:
 *     ConvertPointCoordinates @ 0x1C01D2998 (ConvertPointCoordinates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax

  v6 = a2 - a1;
  v7 = a3;
  v8 = a4 - a3;
  v9 = 0;
  v10 = v8 * (a5 - a1);
  v11 = 2 * v10;
  if ( v10 <= 0 )
    v12 = v11 - v6;
  else
    v12 = v6 + v11;
  v13 = v7 + v12 / (2LL * v6);
  if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    LODWORD(v13) = -1;
  }
  else
  {
    v14 = 0;
  }
  *a6 = v13;
  if ( !v14 )
  {
    v9 = 1;
    if ( (int)v13 >= a4 )
      *a6 = a4 - 1;
  }
  return v9;
}
