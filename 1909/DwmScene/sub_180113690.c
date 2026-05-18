/*
 * XREFs of sub_180113690 @ 0x180113690
 * Callers:
 *     <none>
 * Callees:
 *     expf @ 0x1801272F6 (expf.c)
 *     sqrtf @ 0x18012730E (sqrtf.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180113690(double a1)
{
  __m128 v1; // xmm0
  __m128 v2; // xmm6

  *(float *)&a1 = (float)(*(float *)&a1 * *(float *)&a1) / 0.22222224;
  v1 = _mm_xor_ps(*(__m128 *)&a1, (__m128)xmmword_180145920);
  v1.m128_f32[0] = expf(v1.m128_f32[0]);
  v2 = v1;
  v2.m128_f32[0] = v1.m128_f32[0] * (float)(1.0 / (float)(sqrtf(6.2831855) * 0.33333334));
  return v2;
}
