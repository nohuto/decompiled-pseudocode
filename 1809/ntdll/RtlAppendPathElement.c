/*
 * XREFs of RtlAppendPathElement @ 0x1800CE350
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075930 (RtlMultiAppendUnicodeStringBuffer.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAppendPathElement(int a1, unsigned __int16 *a2, __m128i *a3)
{
  __int128 v3; // xmm2
  __int16 v5; // bx
  char v6; // r9
  __int16 v7; // r11
  __int16 v8; // r14
  __int16 v9; // di
  int v10; // r10d
  __int16 v11; // cx
  __m128i v12; // xmm1
  unsigned int v13; // esi
  _WORD *v14; // rdx
  _WORD *v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rax
  __int16 v18; // dx
  __int16 *v19; // xmm0_8
  unsigned __int16 v20; // r8
  __int16 v21; // r9
  __int16 *v22; // rax
  const WCHAR *v23; // rax
  __int64 result; // rax
  __m128i v25; // [rsp+28h] [rbp-39h]
  __int128 v26; // [rsp+38h] [rbp-29h]
  __int128 v27; // [rsp+48h] [rbp-19h]
  _OWORD v28[3]; // [rsp+58h] [rbp-9h] BYREF
  int v29; // [rsp+88h] [rbp+27h] BYREF
  __int16 v30; // [rsp+8Ch] [rbp+2Bh]
  __int16 v31; // [rsp+8Eh] [rbp+2Dh] BYREF

  v3 = RtlpEmptyString;
  v29 = 0;
  v5 = 0;
  v31 = 0;
  v6 = a1;
  v30 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v26 = RtlpEmptyString;
  *(_QWORD *)&v27 = RtlpEmptyString;
  if ( (a1 & 0xFFFFFFFC) == 0 && a2 && a3 )
  {
    v10 = a1 & 1;
    v11 = v10 != 0 ? 92 : 47;
    if ( !a3->m128i_i16[0] )
      return 0LL;
    v12 = *a3;
    v25 = *a3;
    if ( *a2 )
    {
      v13 = *a2;
      v14 = (_WORD *)*((_QWORD *)a2 + 1);
      v15 = v14;
      v16 = v13 >> 1;
      v17 = 0LL;
      while ( (unsigned int)v17 < v16 )
      {
        if ( *v15 == v11 || *v15 == 92 )
        {
          if ( (v6 & 2) != 0 )
            v7 = v14[v17];
          else
            v7 = *v14;
          LOWORD(v29) = v7;
          break;
        }
        v17 = (unsigned int)(v17 + 1);
        ++v15;
        if ( (unsigned int)v17 >= 3 )
          break;
      }
      v18 = v14[((unsigned __int64)*a2 >> 1) - 1];
      if ( v18 == v11 || v18 == 92 )
      {
        v8 = v18;
        HIWORD(v29) = v18;
      }
    }
    v19 = (__int16 *)_mm_srli_si128(v12, 8).m128i_u64[0];
    if ( *v19 == v11 || *v19 == 92 )
    {
      v9 = *v19;
      v30 = *v19;
    }
    v20 = _mm_cvtsi128_si32(v12);
    v21 = v19[((unsigned __int64)v20 >> 1) - 1];
    if ( v21 == v11 || v21 == 92 )
    {
      v5 = v19[((unsigned __int64)v20 >> 1) - 1];
      v31 = v5;
    }
    if ( v8 )
    {
      if ( !v5 )
      {
        LOWORD(v27) = 2;
        v23 = (const WCHAR *)&v29 + 1;
        if ( v10 )
          v23 = L"\\";
        *((_QWORD *)&v27 + 1) = v23;
        v3 = v27;
      }
      if ( v9 )
      {
        v25.m128i_i64[1] = (__int64)(v19 + 1);
        v25.m128i_i16[1] -= 2;
        v25.m128i_i16[0] = v20 - 2;
        v12 = v25;
      }
    }
    else if ( !v9 )
    {
      LOWORD(v26) = 2;
      *((_QWORD *)&v26 + 1) = L"\\";
      if ( !v10 )
      {
        if ( v5 )
        {
          v22 = &v31;
        }
        else
        {
          if ( !v7 )
            goto LABEL_39;
          v22 = (__int16 *)&v29;
        }
        *((_QWORD *)&v26 + 1) = v22;
      }
    }
LABEL_39:
    v28[0] = v26;
    v28[1] = v12;
    v28[2] = v3;
    result = RtlMultiAppendUnicodeStringBuffer(a2, 3, (__int64)v28);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  return 3221225485LL;
}
