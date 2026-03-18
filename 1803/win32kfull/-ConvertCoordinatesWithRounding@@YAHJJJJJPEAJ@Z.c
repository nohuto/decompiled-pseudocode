/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C019CBD8
 * Callers:
 *     ConvertPointCoordinates @ 0x1C019DA58 (ConvertPointCoordinates.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  v8 = 2LL * v6;
  v9 = 2 * v7;
  if ( v7 <= 0 )
    v10 = v9 - v6;
  else
    v10 = v6 + v9;
  if ( (unsigned __int64)(a3 + 0x80000000LL + v10 / v8) > 0xFFFFFFFF )
  {
    *a6 = -1;
    v11 = -2147024362;
  }
  else
  {
    *a6 = v10 / v8 + a3;
    v11 = 0;
  }
  if ( !v11 && *a6 >= a4 )
    *a6 = a4 - 1;
  return v11 == 0;
}
