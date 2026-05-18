/*
 * XREFs of sub_1800AC360 @ 0x1800AC360
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800AC360(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm6

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  result = a1;
  v4 = _mm_sub_ps((__m128)*a2, (__m128)*a3);
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
