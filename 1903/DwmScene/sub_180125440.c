/*
 * XREFs of sub_180125440 @ 0x180125440
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180125A60 (_o_pow.c)
 *     _o_sin @ 0x180125A6C (_o_sin.c)
 */

__m128 __fastcall sub_180125440(__int64 a1, double a2)
{
  __m128 result; // xmm0
  double v3; // xmm0_8

  result = (__m128)0x3FF0000000000000uLL;
  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      v3 = o_pow();
      return _mm_xor_ps((__m128)COERCE_UNSIGNED_INT64(v3 * o_sin()), (__m128)xmmword_1802140D0);
    }
  }
  return result;
}
