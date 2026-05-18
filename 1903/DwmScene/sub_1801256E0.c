/*
 * XREFs of sub_1801256E0 @ 0x1801256E0
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180125A60 (_o_pow.c)
 */

__m128 __fastcall sub_1801256E0(__int64 a1, double a2)
{
  __m128 result; // xmm0
  __int128 v3; // xmm6

  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      if ( a2 + a2 >= 1.0 )
      {
        v3 = 0x4000000000000000uLL;
        *(double *)&v3 = (2.0 - o_pow()) * 0.5;
        return (__m128)v3;
      }
      else
      {
        result = (__m128)0x4000000000000000uLL;
        *(double *)result.m128_u64 = o_pow() * 0.5;
      }
    }
  }
  else
  {
    return (__m128)0x3FF0000000000000uLL;
  }
  return result;
}
