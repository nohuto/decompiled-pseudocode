/*
 * XREFs of sub_180087FFC @ 0x180087FFC
 * Callers:
 *     sub_180087DA0 @ 0x180087DA0 (sub_180087DA0.c)
 * Callees:
 *     sub_18008807C @ 0x18008807C (sub_18008807C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180087FFC(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-58h] BYREF
  __m128 v3; // [rsp+30h] [rbp-48h] BYREF

  sub_18008807C(&v3, &v2);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180142DE0, v3), _mm_and_ps((__m128)xmmword_180142E00, v2)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180142DE0, *(__m128 *)&a1), (__m128)xmmword_180142DB0));
}
