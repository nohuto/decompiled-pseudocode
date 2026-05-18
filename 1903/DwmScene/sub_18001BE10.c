/*
 * XREFs of sub_18001BE10 @ 0x18001BE10
 * Callers:
 *     sub_18001BEAC @ 0x18001BEAC (sub_18001BEAC.c)
 *     sub_18001C004 @ 0x18001C004 (sub_18001C004.c)
 *     sub_1800CB648 @ 0x1800CB648 (sub_1800CB648.c)
 *     sub_180104360 @ 0x180104360 (sub_180104360.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_18001BE10(__m128 *a1, __m128 *a2)
{
  __m128 *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_add_ps(*a2, *a1);
  return result;
}
