/*
 * XREFs of sub_180125800 @ 0x180125800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180125800(__int64 a1, double a2)
{
  __m128 result; // xmm0

  result = (__m128)0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
      return *(__m128 *)&a2;
  }
  return result;
}
