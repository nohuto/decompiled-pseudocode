/*
 * XREFs of sub_1800675A0 @ 0x1800675A0
 * Callers:
 *     sub_180068C00 @ 0x180068C00 (sub_180068C00.c)
 *     sub_180113A30 @ 0x180113A30 (sub_180113A30.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800675A0(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  result = a1;
  v4 = _mm_mul_ps((__m128)*a3, (__m128)*a2);
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  return result;
}
