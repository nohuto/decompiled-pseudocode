/*
 * XREFs of sub_180084740 @ 0x180084740
 * Callers:
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180084740(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm3
  __m128 v3; // xmm0
  __m128 v4; // xmm3
  __m128 v5; // xmm3
  __m128 v6; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v2 = _mm_mul_ps(*a1, *a1);
  v3 = _mm_add_ps(_mm_shuffle_ps(*a1, v2, 64), v2);
  v4 = _mm_add_ps(_mm_shuffle_ps(v2, v3, 48), v3);
  v5 = _mm_shuffle_ps(v4, v4, 170);
  v6 = _mm_andnot_ps(
         _mm_cmple_ps(v5, (__m128)xmmword_180142E80),
         _mm_div_ps(_mm_mul_ps((__m128)xmmword_1801E3650, *a1), v5));
  if ( !a2 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
  *a2 = v6;
}
