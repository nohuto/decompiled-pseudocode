/*
 * XREFs of sub_180017F3C @ 0x180017F3C
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180017F3C(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  result = a1;
  v4 = _mm_add_ps((__m128)*a3, (__m128)*a2);
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
