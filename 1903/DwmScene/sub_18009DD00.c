/*
 * XREFs of sub_18009DD00 @ 0x18009DD00
 * Callers:
 *     sub_1800B8654 @ 0x1800B8654 (sub_1800B8654.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18009DD00(__m128 *a1, _DWORD *a2)
{
  _DWORD *result; // rax
  __m128 v3; // xmm6
  __m128i v4; // xmm0
  __m128i v5; // xmm0

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXPackedVector.inl", 0x850u);
  result = a2;
  v3 = _mm_mul_ps(
         _mm_min_ps(_mm_max_ps(*a1, (__m128)xmmword_180142E20), (__m128)xmmword_180142E10),
         (__m128)xmmword_180142F50);
  v4 = _mm_cvtps_epi32(_mm_shuffle_ps(v3, v3, 198));
  v5 = _mm_packs_epi32(v4, v4);
  *a2 = _mm_packus_epi16(v5, v5).m128i_u32[0];
  return result;
}
