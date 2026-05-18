/*
 * XREFs of sub_18010511C @ 0x18010511C
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_1800B7914 @ 0x1800B7914 (sub_1800B7914.c)
 *     sub_1800B7B48 @ 0x1800B7B48 (sub_1800B7B48.c)
 *     sub_1800B7E10 @ 0x1800B7E10 (sub_1800B7E10.c)
 *     sub_180103010 @ 0x180103010 (sub_180103010.c)
 *     sub_180103640 @ 0x180103640 (sub_180103640.c)
 *     sub_180106090 @ 0x180106090 (sub_180106090.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180106208 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18010511C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r14
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // al
  _BYTE *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // xmm1_4
  int v26; // xmm2_4
  __int64 v27; // rax
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-D0h]
  __int64 v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  __int64 *v41; // [rsp+68h] [rbp-A0h]
  __int64 *v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  int v44; // [rsp+80h] [rbp-88h] BYREF
  int v45; // [rsp+84h] [rbp-84h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  _QWORD Src[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-50h] BYREF
  char v52; // [rsp+C2h] [rbp-46h]
  __m128i si128; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D8h] [rbp-30h] BYREF
  char v55; // [rsp+E2h] [rbp-26h]
  __m128i v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F8h] [rbp-10h] BYREF
  char v58; // [rsp+103h] [rbp-5h]
  __int64 v59; // [rsp+108h] [rbp+0h]
  unsigned __int64 v60; // [rsp+110h] [rbp+8h]
  _QWORD v61[3]; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v62; // [rsp+130h] [rbp+28h]
  _BYTE v63[240]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v64[240]; // [rsp+228h] [rbp+120h] BYREF

  v43 = -2LL;
  v50 = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  v60 = 15LL;
  LOBYTE(v57) = 0;
  v59 = 11LL;
  memmove(&v57, "LUT_3D_SIZE", 0xBuLL);
  v58 = 0;
  v56.m128i_i64[1] = 15LL;
  LOBYTE(v54) = 0;
  v56.m128i_i64[0] = 10LL;
  memmove(&v54, "DOMAIN_MIN", 0xAuLL);
  v55 = 0;
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v51) = 0;
  si128.m128i_i64[0] = 10LL;
  memmove(&v51, "DOMAIN_MAX", 0xAuLL);
  v52 = 0;
  v6 = 0LL;
  v7 = 0;
  v48 = 0LL;
  v49 = 15LL;
  LOBYTE(Src[0]) = 0;
  LOBYTE(v8) = 10;
  v9 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), v8);
  v10 = sub_1800B7914(a2, Src, v9);
  if ( !(unsigned __int8)std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL)) )
    goto LABEL_36;
  v12 = 0LL;
  while ( 1 )
  {
    if ( !v48 )
      goto LABEL_32;
    v13 = (unsigned __int8 *)Src;
    if ( v49 >= 0x10 )
      v13 = (unsigned __int8 *)Src[0];
    if ( v48 == 1 )
    {
      v14 = *v13;
      if ( !(v14 == 13 ? 0 : v14 < 0xDu ? -1 : 1) )
        goto LABEL_32;
    }
    v16 = Src;
    if ( v49 >= 0x10 )
      v16 = (_BYTE *)Src[0];
    if ( *v16 == 35 )
      goto LABEL_32;
    v17 = Src;
    if ( v49 >= 0x10 )
      v17 = (_QWORD *)Src[0];
    if ( *((_BYTE *)v17 + v48 - 1) == 13 )
    {
      v18 = --v48;
      v19 = Src;
      if ( v49 >= 0x10 )
        v19 = (_QWORD *)Src[0];
      *((_BYTE *)v19 + v18) = 0;
    }
    v41 = &v35;
    v36 = 0LL;
    v37 = 0LL;
    sub_18000F3F4(&v35, (__int64)&v57);
    v39 = 0LL;
    v40 = 0LL;
    sub_18000F3F4(&v38, (__int64)Src);
    if ( (unsigned __int8)sub_180106090(&v38, &v35) )
      break;
    v42 = &v38;
    v39 = 0LL;
    v40 = 0LL;
    sub_18000F3F4(&v38, (__int64)&v54);
    v36 = 0LL;
    v37 = 0LL;
    sub_18000F3F4(&v35, (__int64)Src);
    sub_180106090(&v35, &v38);
    v42 = &v38;
    v39 = 0LL;
    v40 = 0LL;
    sub_18000F3F4(&v38, (__int64)&v51);
    v36 = 0LL;
    v37 = 0LL;
    sub_18000F3F4(&v35, (__int64)Src);
    if ( !(unsigned __int8)sub_180106090(&v35, &v38) )
    {
      if ( !v7 || !v50 )
        goto LABEL_32;
      memset(v63, 0, sizeof(v63));
      sub_1800B7B48((__int64)v63, (__int64)Src, 1, 1);
      v23 = std::istream::operator>>(v63, &v46);
      v24 = std::istream::operator>>(v23, &v44);
      std::istream::operator>>(v24, &v45);
      v25 = v44;
      v26 = v45;
      v27 = *(_QWORD *)(a3 + 8);
      *(_DWORD *)(v12 + v27) = v46;
      *(_DWORD *)(v12 + v27 + 4) = v25;
      *(_DWORD *)(v12 + v27 + 8) = v26;
      *(_DWORD *)(v12 + v27 + 12) = 1065353216;
      ++v6;
      v12 += 16LL;
      sub_1800B7E10((__int64)&v63[144]);
      v22 = &v63[144];
      if ( v6 == v5 )
        goto LABEL_35;
      goto LABEL_31;
    }
    v7 = 1;
LABEL_32:
    LOBYTE(v11) = 10;
    v28 = std::ios::widen(a2 + *(int *)(*(_QWORD *)a2 + 4LL), v11);
    v29 = sub_1800B7914(a2, Src, v28);
    if ( !(unsigned __int8)std::ios_base::operator bool(v29 + *(int *)(*(_QWORD *)v29 + 4LL)) )
      goto LABEL_36;
  }
  memset(v64, 0, sizeof(v64));
  sub_1800B7B48((__int64)v64, (__int64)Src, 1, 1);
  v61[2] = 0LL;
  v62 = 15LL;
  LOBYTE(v61[0]) = 0;
  v20 = sub_180103010((__int64)v64, v61);
  std::istream::operator>>(v20, &v50);
  v5 = v50 * v50 * v50;
  sub_180103640((__int64 *)(a3 + 8), v5);
  if ( v62 < 0x10 )
  {
LABEL_25:
    sub_1800B7E10((__int64)&v64[144]);
    v22 = &v64[144];
LABEL_31:
    std::ios::~ios<char,std::char_traits<char>>(v22);
    goto LABEL_32;
  }
  v21 = v61[0];
  if ( v62 + 1 < 0x1000 || (v21 = *(_QWORD *)(v61[0] - 8LL), (unsigned __int64)(v61[0] - v21 - 8) <= 0x1F) )
  {
    j_j__o_free(v21);
    goto LABEL_25;
  }
  o__invalid_parameter_noinfo_noreturn(v21, v62 + 40);
LABEL_35:
  std::ios::~ios<char,std::char_traits<char>>(v22);
LABEL_36:
  result = v50;
  *(_QWORD *)a3 = v50;
  if ( v49 >= 0x10 )
  {
    v31 = Src[0];
    if ( v49 + 1 >= 0x1000 )
    {
      v31 = *(_QWORD *)(Src[0] - 8LL);
      if ( (unsigned __int64)(Src[0] - v31 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v31, v49 + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v31);
  }
  v48 = 0LL;
  v49 = 15LL;
  LOBYTE(Src[0]) = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v32 = v51;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v32 = *(_QWORD *)(v51 - 8);
      if ( (unsigned __int64)(v51 - v32 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v32, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v32);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v51) = 0;
  if ( v56.m128i_i64[1] >= 0x10uLL )
  {
    v33 = v54;
    if ( (unsigned __int64)(v56.m128i_i64[1] + 1) >= 0x1000 )
    {
      v33 = *(_QWORD *)(v54 - 8);
      if ( (unsigned __int64)(v54 - v33 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v33, v56.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    result = j_j__o_free(v33);
  }
  v56 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v54) = 0;
  if ( v60 >= 0x10 )
  {
    v34 = v57;
    if ( v60 + 1 >= 0x1000 )
    {
      v34 = *(_QWORD *)(v57 - 8);
      if ( (unsigned __int64)(v57 - v34 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v34, v60 + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v34);
  }
  return result;
}
