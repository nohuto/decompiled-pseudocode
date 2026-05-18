/*
 * XREFs of sub_180081F80 @ 0x180081F80
 * Callers:
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 *     sub_1800FEDE0 @ 0x1800FEDE0 (sub_1800FEDE0.c)
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 *     sub_180117E44 @ 0x180117E44 (sub_180117E44.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_180081F80(_DWORD *a1, unsigned __int64 *a2, double a3)
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
