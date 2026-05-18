/*
 * XREFs of sub_1801056E0 @ 0x1801056E0
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800B7914 @ 0x1800B7914 (sub_1800B7914.c)
 *     sub_1800B8D08 @ 0x1800B8D08 (sub_1800B8D08.c)
 *     sub_180103268 @ 0x180103268 (sub_180103268.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     sub_180103830 @ 0x180103830 (sub_180103830.c)
 *     sub_180106090 @ 0x180106090 (sub_180106090.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180106208 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     sub_180106284 @ 0x180106284 (sub_180106284.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1801056E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  char v6; // r13
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // r15
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rdi
  void **v17; // rax
  void **v18; // r12
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdx
  void **v21; // rax
  void **v22; // rcx
  unsigned __int64 v23; // rax
  void **v24; // rcx
  void **v25; // rcx
  int v26; // eax
  int v27; // r12d
  __int64 v28; // rcx
  unsigned __int64 v29; // r12
  unsigned __int64 i; // rdi
  void **v31; // rax
  void **v32; // rax
  char v33; // al
  __int64 v34; // rdi
  unsigned __int8 v35; // al
  __int64 v36; // rax
  _QWORD *v37; // r14
  _DWORD **v38; // rdi
  int *v39; // rdx
  int v40; // xmm1_4
  int v41; // xmm0_4
  void *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // rax
  char v49; // [rsp+38h] [rbp-D0h]
  char v50; // [rsp+39h] [rbp-CFh] BYREF
  char v51; // [rsp+3Ah] [rbp-CEh]
  _BYTE v52[5]; // [rsp+3Bh] [rbp-CDh]
  __int64 v53; // [rsp+40h] [rbp-C8h]
  __int64 v54; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h]
  __int64 v59; // [rsp+80h] [rbp-88h]
  __int64 v60; // [rsp+88h] [rbp-80h]
  __int64 *v61; // [rsp+90h] [rbp-78h]
  __int64 *v62; // [rsp+98h] [rbp-70h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  __int64 v64; // [rsp+A8h] [rbp-60h]
  _BYTE v65[8]; // [rsp+B0h] [rbp-58h] BYREF
  void *Buf1[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v68; // [rsp+D0h] [rbp-38h]
  __int64 v69; // [rsp+D8h] [rbp-30h] BYREF
  char *v70; // [rsp+E0h] [rbp-28h]
  char *v71; // [rsp+E8h] [rbp-20h]
  _QWORD v72[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v73; // [rsp+100h] [rbp-8h]
  unsigned __int64 v74; // [rsp+108h] [rbp+0h]
  _QWORD v75[2]; // [rsp+110h] [rbp+8h] BYREF
  __m128i si128; // [rsp+120h] [rbp+18h]
  _QWORD v77[2]; // [rsp+130h] [rbp+28h] BYREF
  __m128i v78; // [rsp+140h] [rbp+38h]
  __int64 pExceptionObject[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v80; // [rsp+170h] [rbp+68h]

  v64 = -2LL;
  v60 = a3;
  v63 = a2;
  v4 = 0LL;
  v53 = 0LL;
  v5 = 0LL;
  v51 = 0;
  *(_WORD *)v52 = 0;
  v6 = 0;
  v49 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v7 = 0LL;
  v69 = 0LL;
  v8 = 0LL;
  v70 = 0LL;
  v9 = 0LL;
  v71 = 0LL;
  v74 = 15LL;
  LOBYTE(v72[0]) = 0;
  v73 = 6LL;
  memmove(v72, "<size>", 6uLL);
  BYTE6(v72[0]) = 0;
  v78.m128i_i64[1] = 15LL;
  LOBYTE(v77[0]) = 0;
  v78.m128i_i64[0] = 6LL;
  memmove(v77, "<data>", 6uLL);
  BYTE6(v77[0]) = 0;
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v75[0]) = 0;
  si128.m128i_i64[0] = 7LL;
  memmove(v75, "</data>", 7uLL);
  HIBYTE(v75[0]) = 0;
  v67 = 0LL;
  v68 = 15LL;
  LOBYTE(Buf1[0]) = 0;
  LOBYTE(v10) = 10;
  v11 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), v10);
  v12 = sub_1800B7914(a2, Buf1, v11);
  result = std::ios_base::operator bool(v12 + *(int *)(*(_QWORD *)v12 + 4LL));
  if ( !(_BYTE)result )
  {
LABEL_54:
    v37 = (_QWORD *)v60;
    goto LABEL_55;
  }
  do
  {
    v16 = v67;
    if ( !v67 )
      goto LABEL_45;
    if ( v6 )
      goto LABEL_47;
    v17 = Buf1;
    v18 = (void **)Buf1[0];
    v19 = v68;
    if ( v68 >= 0x10 )
      v17 = (void **)Buf1[0];
    if ( *((_BYTE *)v17 + v67 - 1) == 13 )
    {
      v20 = --v67;
      v21 = Buf1;
      if ( v68 >= 0x10 )
        v21 = (void **)Buf1[0];
      *((_BYTE *)v21 + v20) = 0;
      v18 = (void **)Buf1[0];
      v16 = v67;
      v19 = v68;
    }
    v22 = Buf1;
    if ( v19 >= 0x10 )
      v22 = v18;
    v23 = sub_180103830((__int64)v22, v16, 0LL, (unsigned __int64)" \t", 2LL);
    if ( v16 < v23 )
      v23 = v16;
    v24 = Buf1;
    if ( v19 >= 0x10 )
      v24 = v18;
    v67 = v16 - v23;
    memmove(v24, (char *)v24 + v23, v16 - v23 + 1);
    v25 = Buf1;
    if ( v68 >= 0x10 )
      v25 = (void **)Buf1[0];
    if ( v67 == 5 )
    {
      v26 = memcmp(v25, "<LUT>", 5uLL);
      v27 = v52[1];
      if ( !v26 )
        v27 = 1;
      *(_DWORD *)&v52[1] = v27;
    }
    else
    {
      LOBYTE(v27) = v52[1];
    }
    if ( (_BYTE)v27 )
    {
      v62 = &v54;
      v55 = 0LL;
      v56 = 0LL;
      sub_18000F3F4(&v54, (__int64)v72);
      v58 = 0LL;
      v59 = 0LL;
      sub_18000F3F4(&v57, (__int64)Buf1);
      if ( (unsigned __int8)sub_180106090(&v57, &v54) )
      {
        pExceptionObject[2] = 0LL;
        v80 = 15LL;
        LOBYTE(pExceptionObject[0]) = 0;
        sub_1800B8D08(pExceptionObject, Buf1, v73 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v53 = (int)sub_180106284(pExceptionObject, 0LL, 10LL);
        v5 = v53 * v53 * v53;
        v51 = 1;
        v14 = v80;
        if ( v80 >= 0x10 )
        {
          v28 = pExceptionObject[0];
          if ( v80 + 1 >= 0x1000 )
          {
            v28 = *(_QWORD *)(pExceptionObject[0] - 8);
            if ( (unsigned __int64)(pExceptionObject[0] - v28 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v28, v80 + 40);
              __debugbreak();
            }
          }
          j_j__o_free(v28);
        }
      }
    }
    if ( v51
      && (v61 = &v57,
          v58 = 0LL,
          v59 = 0LL,
          sub_18000F3F4(&v57, (__int64)v77),
          v55 = 0LL,
          v56 = 0LL,
          sub_18000F3F4(&v54, (__int64)Buf1),
          (unsigned __int8)sub_180106090(&v54, &v57)) )
    {
      v52[0] = 1;
    }
    else if ( v52[0] )
    {
      v61 = &v57;
      v58 = 0LL;
      v59 = 0LL;
      sub_18000F3F4(&v57, (__int64)v75);
      v55 = 0LL;
      v56 = 0LL;
      sub_18000F3F4(&v54, (__int64)Buf1);
      if ( (unsigned __int8)sub_180106090(&v54, &v57) )
      {
        v6 = 1;
        v49 = 1;
        goto LABEL_45;
      }
      v29 = v67 >> 1;
      for ( i = 0LL; i < v29; ++i )
      {
        v31 = Buf1;
        if ( v68 >= 0x10 )
          v31 = (void **)Buf1[0];
        v65[0] = *((_BYTE *)v31 + 2 * i);
        v32 = Buf1;
        if ( v68 >= 0x10 )
          v32 = (void **)Buf1[0];
        v65[1] = *((_BYTE *)v32 + 2 * i + 1);
        v65[2] = 0;
        v33 = o_strtoul(v65, 0LL, 16LL);
        v50 = v33;
        if ( v9 == v8 )
        {
          sub_180103268(&v69, v8, &v50);
          v9 = v71;
          v8 = v70;
        }
        else
        {
          *v8++ = v33;
          v70 = v8;
        }
      }
    }
    v6 = v49;
LABEL_45:
    v34 = v63;
    LOBYTE(v14) = 10;
    v35 = std::ios::widen(v63 + *(int *)(*(_QWORD *)v63 + 4LL), v14);
    v36 = sub_1800B7914(v34, Buf1, v35);
    result = std::ios_base::operator bool(v36 + *(int *)(*(_QWORD *)v36 + 4LL));
  }
  while ( (_BYTE)result );
  if ( !v6 )
  {
    v7 = v69;
    v4 = v53;
    goto LABEL_54;
  }
LABEL_47:
  v7 = v69;
  if ( &v8[-v69] != (char *)(12 * v5) )
  {
    sub_18000E498(&v54);
    v48 = sub_18000E498(&v57);
    sub_180027770(pExceptionObject, v48, 395, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v37 = (_QWORD *)v60;
  v38 = (_DWORD **)(v60 + 8);
  result = sub_180103640((__int64 *)(v60 + 8), v5);
  if ( v5 )
  {
    v15 = *v38;
    v39 = (int *)(v7 + 4);
    do
    {
      v40 = v39[1];
      v41 = *v39;
      result = (unsigned int)*(v39 - 1);
      *v15 = result;
      v15[1] = v41;
      v15[2] = v40;
      v15[3] = 1065353216;
      v39 += 3;
      v15 += 4;
      --v5;
    }
    while ( v5 );
  }
  v4 = v53;
LABEL_55:
  *v37 = v4;
  if ( v68 >= 0x10 )
  {
    v42 = Buf1[0];
    if ( v68 + 1 >= 0x1000 )
    {
      v42 = (void *)*((_QWORD *)Buf1[0] - 1);
      if ( (unsigned __int64)((char *)Buf1[0] - (char *)v42 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v42, v68 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v42);
  }
  v67 = 0LL;
  v68 = 15LL;
  LOBYTE(Buf1[0]) = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v43 = v75[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v43 = *(_QWORD *)(v75[0] - 8LL);
      if ( (unsigned __int64)(v75[0] - v43 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v43, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v43);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v75[0]) = 0;
  if ( v78.m128i_i64[1] >= 0x10uLL )
  {
    v44 = v77[0];
    if ( (unsigned __int64)(v78.m128i_i64[1] + 1) >= 0x1000 )
    {
      v44 = *(_QWORD *)(v77[0] - 8LL);
      if ( (unsigned __int64)(v77[0] - v44 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v44, v78.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v44);
  }
  v78 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v77[0]) = 0;
  v45 = v74;
  if ( v74 >= 0x10 )
  {
    v46 = v72[0];
    if ( v74 + 1 >= 0x1000 )
    {
      v46 = *(_QWORD *)(v72[0] - 8LL);
      if ( (unsigned __int64)(v72[0] - v46 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v46, v74 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v46);
  }
  v73 = 0LL;
  v74 = 15LL;
  LOBYTE(v72[0]) = 0;
  if ( v7 )
  {
    v47 = v7;
    if ( (unsigned __int64)&v9[-v7] >= 0x1000 )
    {
      v7 = *(_QWORD *)(v7 - 8);
      if ( (unsigned __int64)(v47 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v45);
        __debugbreak();
      }
    }
    return j_j__o_free(v7);
  }
  return result;
}
