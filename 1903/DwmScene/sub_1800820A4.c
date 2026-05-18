/*
 * XREFs of sub_1800820A4 @ 0x1800820A4
 * Callers:
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800FEDE0 @ 0x1800FEDE0 (sub_1800FEDE0.c)
 *     sub_1801029B0 @ 0x1801029B0 (sub_1801029B0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800820A4(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm6
  _DWORD *result; // rax
  __m128 v5; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v5 = _mm_add_ps(_mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)), v3);
  *a1 = v5.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  return result;
}
