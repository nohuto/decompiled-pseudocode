/*
 * XREFs of sub_18008810C @ 0x18008810C
 * Callers:
 *     sub_180087EB0 @ 0x180087EB0 (sub_180087EB0.c)
 * Callees:
 *     sub_18008818C @ 0x18008818C (sub_18008818C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18008810C(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-58h] BYREF
  __m128 v3; // [rsp+30h] [rbp-48h] BYREF

  sub_18008818C(&v3, &v2);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180143DE0, v3), _mm_and_ps((__m128)xmmword_180143E00, v2)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180143DE0, *(__m128 *)&a1), (__m128)xmmword_180143DB0));
}
