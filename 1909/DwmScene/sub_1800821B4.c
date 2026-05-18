/*
 * XREFs of sub_1800821B4 @ 0x1800821B4
 * Callers:
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800FEEF0 @ 0x1800FEEF0 (sub_1800FEEF0.c)
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800821B4(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
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
