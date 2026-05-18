/*
 * XREFs of sub_1801256C0 @ 0x1801256C0
 * Callers:
 *     <none>
 * Callees:
 *     _o_pow @ 0x180125B70 (_o_pow.c)
 *     _o_sin @ 0x180125B7C (_o_sin.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1801256C0(__int64 a1, double a2)
{
  __m128 result; // xmm0
  double v3; // xmm0_8
  __int128 v4; // xmm6

  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      v3 = o_sin();
      *((double *)&v4 + 1) = *(&a2 + 1);
      *(double *)&v4 = v3 * o_pow() + 1.0;
      return (__m128)v4;
    }
  }
  else
  {
    return (__m128)0x3FF0000000000000uLL;
  }
  return result;
}
