/*
 * XREFs of CmpComputeComponentHashes @ 0x1406539E0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 *     CmpExpandPathInfo @ 0x1406C93E8 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  char v3; // r13
  __m128i v4; // xmm6
  __int16 v5; // bx
  __int16 v6; // bp
  _WORD *v7; // rdi
  __int16 v8; // si
  __int16 v9; // di
  __int16 v10; // bp
  __int64 v11; // rbx
  __int16 v12; // ax
  int v13; // r9d
  unsigned __int16 *v14; // r10
  __int64 v15; // r11
  unsigned __int16 v16; // ax
  __int64 result; // rax
  __int16 v18; // r14
  __int64 v19; // r15
  int v20; // r9d
  unsigned __int16 *v21; // r10
  __int64 v22; // r11
  unsigned __int16 v23; // ax
  __m128i v24; // [rsp+20h] [rbp-68h]
  __m128i v25; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v3 = 0;
  v4 = *a1;
  v24 = *a1;
  v5 = _mm_cvtsi128_si32(*a1);
  v25 = *a1;
  v24.m128i_i16[0] = v5;
  if ( !v5 )
  {
    result = 0LL;
    *a2 = 0;
    return result;
  }
  v6 = 0;
  v7 = (_WORD *)v24.m128i_i64[1];
  v8 = v24.m128i_i16[1];
  do
  {
    if ( v6 >= 32 )
      break;
    if ( *v7 == 92 )
    {
      ++v6;
      v18 = v25.m128i_i16[0] - v5;
      v25.m128i_i16[0] = v18;
      v25.m128i_i16[1] = v18;
      if ( v6 > 8 && !v3 )
      {
        result = CmpExpandPathInfo(a3);
        if ( (int)result < 0 )
          return result;
        a3 = v27;
        v3 = 1;
      }
      v19 = (unsigned int)(v6 - 1);
      if ( (unsigned int)v19 >= 8 )
        *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v6 - 9) + 6LL)) = v25;
      else
        *(__m128i *)(16 * ((unsigned int)v19 + 2LL) + a3) = v25;
      v20 = 0;
      if ( v18 )
      {
        v21 = (unsigned __int16 *)v25.m128i_i64[1];
        v22 = (unsigned __int16)(((unsigned __int16)(v18 - 1) >> 1) + 1);
        do
        {
          v23 = *v21;
          if ( *v21 >= 0x61u )
          {
            if ( v23 > 0x7Au )
              v23 = NLS_UPCASE(v23);
            else
              v23 -= 32;
          }
          ++v21;
          v20 = v23 + 37 * v20;
          --v22;
        }
        while ( v22 );
        a3 = v27;
      }
      if ( (unsigned int)v19 >= 8 )
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v6 - 9)) = v20;
      else
        *(_DWORD *)(a3 + 4 * v19) = v20;
      do
      {
        if ( *v7 != 92 )
          break;
        v5 -= 2;
        ++v7;
        v8 -= 2;
        v24.m128i_i16[0] = v5;
      }
      while ( v5 );
      v24.m128i_i64[1] = (__int64)v7;
      v24.m128i_i16[1] = v8;
      v4 = v24;
      v25 = v24;
    }
    else
    {
      ++v7;
      v5 -= 2;
      v8 -= 2;
      v24.m128i_i16[0] = v5;
    }
  }
  while ( v5 );
  v9 = v6;
  if ( v5 )
    return 3221225485LL;
  v10 = v6 + 1;
  if ( v10 > 8 && !v3 )
  {
    result = CmpExpandPathInfo(a3);
    if ( (int)result < 0 )
      return result;
    a3 = v27;
  }
  v11 = (unsigned int)v9;
  if ( (unsigned int)v11 >= 8 )
    *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v11 - 8) + 6LL)) = v4;
  else
    *(__m128i *)(a3 + 16 * ((unsigned int)v11 + 2LL)) = v4;
  v12 = _mm_cvtsi128_si32(v4);
  v13 = 0;
  if ( v12 )
  {
    v14 = (unsigned __int16 *)v4.m128i_i64[1];
    v15 = (unsigned __int16)(((unsigned __int16)(v12 - 1) >> 1) + 1);
    do
    {
      v16 = *v14;
      if ( *v14 >= 0x61u )
      {
        if ( v16 > 0x7Au )
          v16 = NLS_UPCASE(v16);
        else
          v16 -= 32;
      }
      ++v14;
      v13 = v16 + 37 * v13;
      --v15;
    }
    while ( v15 );
    a3 = v27;
  }
  if ( (unsigned int)v11 >= 8 )
    *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v11 - 8)) = v13;
  else
    *(_DWORD *)(a3 + 4 * v11) = v13;
  *a2 = v10;
  return 0LL;
}
