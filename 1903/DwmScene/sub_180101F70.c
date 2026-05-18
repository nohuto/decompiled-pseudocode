/*
 * XREFs of sub_180101F70 @ 0x180101F70
 * Callers:
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall sub_180101F70(__m128 *a1, __m128 *a2, __m128 *a3, double a4)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm1
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = *a2;
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v5 = *a3;
  result = a1;
  a1->m128_i32[3] = 1065353216;
  *a1 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v5, v4), _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0)), v4);
  return result;
}
