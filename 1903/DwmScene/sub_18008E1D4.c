/*
 * XREFs of sub_18008E1D4 @ 0x18008E1D4
 * Callers:
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_18008E1D4(_DWORD *a1, double a2, unsigned __int64 *a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a3 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)),
         _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  return result;
}
