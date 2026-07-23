/*
 * XREFs of CmpComputeComponentHashes @ 0x140642910
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpExpandPathInfo @ 0x1406A5E48 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm6
  char v4; // cl
  __int16 v5; // bx
  int v6; // r12d
  __int16 v7; // r14
  _WORD *v8; // rdi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // r14
  __int64 v12; // r15
  __int16 v13; // ax
  int v14; // ebx
  WCHAR *v15; // rdi
  __int64 v16; // rsi
  WCHAR v17; // ax
  __int64 result; // rax
  __int16 v19; // r15
  unsigned int v20; // edx
  __int64 v21; // r13
  WCHAR *v22; // r15
  WCHAR v23; // ax
  __m128i v24; // [rsp+20h] [rbp-60h]
  __m128i v25; // [rsp+30h] [rbp-50h]
  char v26; // [rsp+A0h] [rbp+20h]
  __int64 v28; // [rsp+B0h] [rbp+30h]
  unsigned int v29; // [rsp+B8h] [rbp+38h]

  v28 = a3;
  v3 = *a1;
  v4 = 0;
  v26 = 0;
  v24.m128i_i32[1] = v3.m128i_i32[1];
  v5 = _mm_cvtsi128_si32(v3);
  v25 = v3;
  v24.m128i_i16[0] = v5;
  if ( !v5 )
  {
    result = 0LL;
    *a2 = 0;
    return result;
  }
  v6 = 0;
  v7 = 0;
  v8 = (_WORD *)v3.m128i_i64[1];
  v9 = v3.m128i_i16[1];
  do
  {
    if ( v7 >= 32 )
      break;
    if ( *v8 == 92 )
    {
      ++v7;
      v19 = v25.m128i_i16[0] - v5;
      v25.m128i_i16[0] = v19;
      v25.m128i_i16[1] = v19;
      if ( v7 > 8 && !v4 )
      {
        result = CmpExpandPathInfo(a3);
        if ( (int)result < 0 )
          return result;
        a3 = v28;
        v26 = 1;
      }
      v20 = v7 - 1;
      v29 = v20;
      if ( v20 >= 8 )
        *(__m128i *)(16 * ((unsigned int)(v7 - 9) + 6LL) + *(_QWORD *)(a3 + 160)) = v25;
      else
        *(__m128i *)(16 * (v20 + 2LL) + a3) = v25;
      if ( v19 )
      {
        v21 = (unsigned __int16)(((unsigned __int16)(v19 - 1) >> 1) + 1);
        v22 = (WCHAR *)v25.m128i_i64[1];
        do
        {
          v23 = *v22;
          if ( *v22 >= 0x61u )
          {
            if ( v23 > 0x7Au )
              v23 = RtlUpcaseUnicodeChar(v23);
            else
              v23 -= 32;
          }
          ++v22;
          v6 = v23 + 37 * v6;
          --v21;
        }
        while ( v21 );
        v20 = v29;
        a3 = v28;
      }
      if ( v20 >= 8 )
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (v20 - 8)) = v6;
      else
        *(_DWORD *)(a3 + 4LL * v20) = v6;
      do
      {
        if ( *v8 != 92 )
          break;
        v5 -= 2;
        ++v8;
        v9 -= 2;
        v24.m128i_i16[0] = v5;
      }
      while ( v5 );
      v24.m128i_i64[1] = (__int64)v8;
      v24.m128i_i16[1] = v9;
      v3 = v24;
      v6 = 0;
      v4 = v26;
      v25 = v24;
    }
    else
    {
      ++v8;
      v5 -= 2;
      v9 -= 2;
      v24.m128i_i16[0] = v5;
    }
  }
  while ( v5 );
  v10 = v7;
  if ( v5 )
    return 3221225485LL;
  v11 = v7 + 1;
  if ( v11 > 8 && !v4 )
  {
    result = CmpExpandPathInfo(a3);
    if ( (int)result < 0 )
      return result;
    a3 = v28;
  }
  v12 = (unsigned int)v10;
  if ( (unsigned int)v12 >= 8 )
    *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v12 - 8) + 6LL)) = v3;
  else
    *(__m128i *)(a3 + 16 * ((unsigned int)v12 + 2LL)) = v3;
  v13 = _mm_cvtsi128_si32(v3);
  v14 = 0;
  if ( v13 )
  {
    v15 = (WCHAR *)v3.m128i_i64[1];
    v16 = (unsigned __int16)(((unsigned __int16)(v13 - 1) >> 1) + 1);
    do
    {
      v17 = *v15;
      if ( *v15 >= 0x61u )
      {
        if ( v17 > 0x7Au )
          v17 = RtlUpcaseUnicodeChar(v17);
        else
          v17 -= 32;
      }
      ++v15;
      v14 = v17 + 37 * v14;
      --v16;
    }
    while ( v16 );
    a3 = v28;
  }
  if ( (unsigned int)v12 >= 8 )
    *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v12 - 8)) = v14;
  else
    *(_DWORD *)(a3 + 4 * v12) = v14;
  *a2 = v11;
  return 0LL;
}
