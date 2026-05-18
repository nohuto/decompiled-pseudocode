/*
 * XREFs of sub_1800B72A0 @ 0x1800B72A0
 * Callers:
 *     sub_1800B7340 @ 0x1800B7340 (sub_1800B7340.c)
 *     sub_1800B8A94 @ 0x1800B8A94 (sub_1800B8A94.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800C1C60 @ 0x1800C1C60 (sub_1800C1C60.c)
 *     sub_180104360 @ 0x180104360 (sub_180104360.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall sub_1800B72A0(__m128 *a1, double a2)
{
  __m128 *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_mul_ps(*a1, _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  return result;
}
