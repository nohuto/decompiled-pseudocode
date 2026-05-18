/*
 * XREFs of sub_1800B1790 @ 0x1800B1790
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800EBCE0 @ 0x1800EBCE0 (sub_1800EBCE0.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 *     sub_180111550 @ 0x180111550 (sub_180111550.c)
 * Callees:
 *     sub_180010FDC @ 0x180010FDC (sub_180010FDC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall sub_1800B1790(__m128 *a1, _OWORD *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm5

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  v2 = a1[1];
  v3 = a1[3];
  v4 = _mm_shuffle_ps(*a1, v2, 238);
  v5 = _mm_shuffle_ps(a1[2], v3, 238);
  return sub_180010FDC(
           a2,
           *(double *)_mm_shuffle_ps(_mm_shuffle_ps(*a1, v2, 68), _mm_shuffle_ps(a1[2], v3, 68), 221).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 136).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 221).m128_u64);
}
