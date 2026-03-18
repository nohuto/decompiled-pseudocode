/*
 * XREFs of ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C025B9D8
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C025CA48 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     <none>
 */

void __fastcall _TTLimitDeepTargetingPoint(int a1, int a2, int *a3)
{
  int v3; // r11d
  __int64 v5; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // ecx

  v3 = *a3;
  v5 = a2;
  v7 = (__int64)((unsigned __int128)(a2 * (__int64)(int)abs32(a1 - *a3) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
  v8 = (v7 >> 63) + v7;
  if ( v8 + 0x80000000 > 0xFFFFFFFF || (int)v8 > 200 )
  {
    v9 = 0x7FFFFFFF;
    if ( (unsigned __int64)(200000 / v5 + 0x80000000LL) <= 0xFFFFFFFF )
      v9 = 200000 / v5;
    v10 = a1 - v9;
    if ( a1 <= v3 )
      v10 = v9 + a1;
    *a3 = v10;
  }
}
