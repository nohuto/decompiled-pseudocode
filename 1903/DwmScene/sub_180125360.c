/*
 * XREFs of sub_180125360 @ 0x180125360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180125198 @ 0x180125198 (sub_180125198.c)
 */

__m128 __fastcall sub_180125360(__int64 a1, double a2)
{
  __int128 v2; // xmm3
  __m128 result; // xmm0

  v2 = 0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 <= 0.0 )
      return result;
    *(double *)&v2 = 1.0 - sub_180125198(1.0 - a2);
  }
  return (__m128)v2;
}
