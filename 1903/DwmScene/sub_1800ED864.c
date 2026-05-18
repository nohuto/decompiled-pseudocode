/*
 * XREFs of sub_1800ED864 @ 0x1800ED864
 * Callers:
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1800ED864(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_sub_ps(*a2, *a3);
  return result;
}
