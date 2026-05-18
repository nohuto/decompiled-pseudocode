/*
 * XREFs of sub_180082320 @ 0x180082320
 * Callers:
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_180082320(_DWORD *a1, double a2)
{
  __m128 v2; // xmm6
  _DWORD *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]),
         _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0));
  *a1 = v2.m128_i32[0];
  result = a1;
  a1[1] = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  return result;
}
