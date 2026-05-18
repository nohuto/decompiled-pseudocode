/*
 * XREFs of sub_1800B15C0 @ 0x1800B15C0
 * Callers:
 *     sub_1800AEB74 @ 0x1800AEB74 (sub_1800AEB74.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__m128 *__fastcall sub_1800B15C0(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  result = a1;
  v3 = *a2;
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 255), a3[3]), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 170), a3[2])),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 85), a3[1]), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), *a3)));
  return result;
}
