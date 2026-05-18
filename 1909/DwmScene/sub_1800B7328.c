/*
 * XREFs of sub_1800B7328 @ 0x1800B7328
 * Callers:
 *     sub_1800B8BA4 @ 0x1800B8BA4 (sub_1800B8BA4.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1800B7328(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm0
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = *a2;
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = *a3;
  result = a1;
  a1->m128_i32[3] = 1065353216;
  *a1 = _mm_add_ps(v4, v3);
  return result;
}
