/*
 * XREFs of sub_1800C20F0 @ 0x1800C20F0
 * Callers:
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_180117E44 @ 0x180117E44 (sub_180117E44.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800C20F0(__m128 *a1)
{
  __m128 v1; // xmm3
  __m128 v2; // xmm0
  __m128 v3; // xmm3
  __m128 v4; // xmm3
  __m128 v5; // xmm3
  __m128 v6; // xmm3
  __m128 v7; // xmm1
  __m128 v8; // xmm2

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  v1 = _mm_mul_ps(*a1, *a1);
  v2 = _mm_shuffle_ps(v1, v1, 238);
  v3 = _mm_add_ps(v1, v2);
  v4 = _mm_shuffle_ps(v3, v3, 64);
  v5 = _mm_add_ps(v4, _mm_shuffle_ps(v2, v4, 240));
  v6 = _mm_shuffle_ps(v5, v5, 170);
  v7 = _mm_sqrt_ps(v6);
  v8 = _mm_cmpneq_ps((__m128)xmmword_180142E90, v6);
  *a1 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*a1, v7), _mm_cmpneq_ps(v7, (__m128)0LL)), v8),
          _mm_andnot_ps(v8, (__m128)xmmword_180142EA0));
}
