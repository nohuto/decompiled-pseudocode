/*
 * XREFs of sub_1800822A8 @ 0x1800822A8
 * Callers:
 *     sub_180084A14 @ 0x180084A14 (sub_180084A14.c)
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800822A8(_DWORD *a1, float a2)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm6
  _DWORD *result; // rax

  if ( a2 == 0.0 )
    wassert(
      L"S != 0.0f",
      L"d:\\os\\src\\onecoreuap\\windows\\dwm\\spectre\\coreutils\\shared\\coreutils\\cpp\\inc\\coreutils\\math\\SimpleMath.inl",
      0x29Du);
  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = (__m128)0x3F800000u;
  v3.m128_f32[0] = 1.0 / a2;
  v4 = _mm_mul_ps(
         _mm_movelh_ps((__m128)*(unsigned __int64 *)a1, (__m128)(unsigned int)a1[2]),
         _mm_shuffle_ps(v3, v3, 0));
  *a1 = v4.m128_i32[0];
  result = a1;
  a1[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  a1[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  return result;
}
