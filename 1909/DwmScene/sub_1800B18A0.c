/*
 * XREFs of sub_1800B18A0 @ 0x1800B18A0
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800EBDF0 @ 0x1800EBDF0 (sub_1800EBDF0.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 *     sub_180111660 @ 0x180111660 (sub_180111660.c)
 * Callees:
 *     sub_18001102C @ 0x18001102C (sub_18001102C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall sub_1800B18A0(__m128 *a1, _OWORD *a2)
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
  return sub_18001102C(
           a2,
           *(double *)_mm_shuffle_ps(_mm_shuffle_ps(*a1, v2, 68), _mm_shuffle_ps(a1[2], v3, 68), 221).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 136).m128_u64,
           *(double *)_mm_shuffle_ps(v4, v5, 221).m128_u64);
}
