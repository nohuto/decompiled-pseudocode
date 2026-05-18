/*
 * XREFs of sub_180125470 @ 0x180125470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801252A8 @ 0x1801252A8 (sub_1801252A8.c)
 */

__m128 __fastcall sub_180125470(__int64 a1, double a2)
{
  __int128 v2; // xmm3
  __m128 result; // xmm0

  v2 = 0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 <= 0.0 )
      return result;
    *(double *)&v2 = 1.0 - sub_1801252A8(1.0 - a2);
  }
  return (__m128)v2;
}
