/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01BDD80
 * Callers:
 *     ConvertPointCoordinates @ 0x1C01BECC8 (ConvertPointCoordinates.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  v8 = 2 * v7;
  if ( v7 <= 0 )
    v9 = v8 - v6;
  else
    v9 = v6 + v8;
  v10 = a3 + v9 / (2LL * v6);
  if ( (unsigned __int64)(v10 + 0x80000000LL) > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    LODWORD(v10) = -1;
  }
  else
  {
    v11 = 0;
  }
  *a6 = v10;
  if ( !v11 && (int)v10 >= a4 )
    *a6 = a4 - 1;
  return v11 == 0;
}
