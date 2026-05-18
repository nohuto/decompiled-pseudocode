/*
 * XREFs of sub_180107D94 @ 0x180107D94
 * Callers:
 *     sub_180108078 @ 0x180108078 (sub_180108078.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_180107D94(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6
  __m128 v3; // xmm3
  __m128 v4; // xmm3
  __m128 v5; // xmm2

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_sub_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2);
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 153);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  return v4;
}
