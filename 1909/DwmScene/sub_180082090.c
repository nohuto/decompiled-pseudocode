/*
 * XREFs of sub_180082090 @ 0x180082090
 * Callers:
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18008E700 @ 0x18008E700 (sub_18008E700.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 *     sub_1800FEEF0 @ 0x1800FEEF0 (sub_1800FEEF0.c)
 *     sub_180102120 @ 0x180102120 (sub_180102120.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 *     sub_180117F54 @ 0x180117F54 (sub_180117F54.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_180082090(_DWORD *a1, unsigned __int64 *a2, double a3)
{
  _DWORD *result; // rax
  __m128 v4; // xmm2

  if ( !a2 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  result = a1;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)),
         _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0));
  *a1 = v4.m128_i32[0];
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  return result;
}
