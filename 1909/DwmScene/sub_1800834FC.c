/*
 * XREFs of sub_1800834FC @ 0x1800834FC
 * Callers:
 *     sub_180084B24 @ 0x180084B24 (sub_180084B24.c)
 * Callees:
 *     sub_1800875F8 @ 0x1800875F8 (sub_1800875F8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_1800834FC(__int64 a1, _DWORD *a2, _OWORD *a3, _DWORD *a4)
{
  char result; // al
  __m128 v8; // xmm1
  __m128 v9; // xmm1
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  __m128 v11; // [rsp+30h] [rbp-48h] BYREF
  __m128 v12; // [rsp+40h] [rbp-38h] BYREF

  if ( !a1 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x495u);
  result = sub_1800875F8(&v12, &v10, &v11);
  if ( result )
  {
    if ( !a2 )
      wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
    v8 = v12;
    *a2 = v12.m128_i32[0];
    a2[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    a2[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
    if ( !a3 )
      wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x6A2u);
    *a3 = v10;
    if ( !a4 )
      wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x5F3u);
    v9 = v11;
    result = 1;
    *a4 = v11.m128_i32[0];
    a4[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
    a4[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  }
  return result;
}
