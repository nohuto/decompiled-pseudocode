/*
 * XREFs of sub_1800B73B0 @ 0x1800B73B0
 * Callers:
 *     sub_1800B7450 @ 0x1800B7450 (sub_1800B7450.c)
 *     sub_1800B8BA4 @ 0x1800B8BA4 (sub_1800B8BA4.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800C1D70 @ 0x1800C1D70 (sub_1800C1D70.c)
 *     sub_180104470 @ 0x180104470 (sub_180104470.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall sub_1800B73B0(__m128 *a1, double a2)
{
  __m128 *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_mul_ps(*a1, _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  return result;
}
