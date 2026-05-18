/*
 * XREFs of sub_180104894 @ 0x180104894
 * Callers:
 *     sub_1800C21A0 @ 0x1800C21A0 (sub_1800C21A0.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_1800B7B48 @ 0x1800B7B48 (sub_1800B7B48.c)
 *     sub_1800B7E10 @ 0x1800B7E10 (sub_1800B7E10.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 *     sub_180104BBC @ 0x180104BBC (sub_180104BBC.c)
 *     sub_180104E74 @ 0x180104E74 (sub_180104E74.c)
 *     sub_18010511C @ 0x18010511C (sub_18010511C.c)
 *     sub_1801056E0 @ 0x1801056E0 (sub_1801056E0.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180105EF4 @ 0x180105EF4 (sub_180105EF4.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180104894(__int64 a1, char *a2, size_t a3, size_t *a4)
{
  char v7; // r15
  void **v8; // rdx
  const void *v9; // rcx
  unsigned __int64 v10; // r14
  size_t v11; // rdi
  void **v13; // rdx
  const void *v14; // rcx
  void **v16; // rdx
  const void *v17; // rcx
  void **v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  unsigned int v27; // [rsp+48h] [rbp-B8h]
  __int64 v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  _BYTE v30[240]; // [rsp+70h] [rbp-90h] BYREF

  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v28[0]) = 0;
  if ( a2 != &a2[a3] )
  {
    if ( a3 > 0xF )
    {
      sub_18000E118(v28, a3, 0LL, a2);
    }
    else
    {
      si128.m128i_i64[0] = a3;
      memmove(v28, a2, a3);
      *((_BYTE *)v28 + a3) = 0;
    }
  }
  memset(v30, 0, sizeof(v30));
  v7 = 1;
  sub_1800B7B48((__int64)v30, (__int64)v28, 1, 1);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v8 = &qword_18025D888;
  if ( *((_QWORD *)&xmmword_18025D898 + 1) >= 0x10uLL )
    v8 = (void **)qword_18025D888;
  v9 = a4;
  v10 = a4[3];
  if ( v10 >= 0x10 )
    v9 = (const void *)*a4;
  v11 = a4[2];
  if ( v11 == (_QWORD)xmmword_18025D898 && !memcmp(v9, v8, a4[2]) )
  {
    sub_180104E74(a1, v28, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v13 = &qword_18025D828;
  if ( *((_QWORD *)&xmmword_18025D838 + 1) >= 0x10uLL )
    v13 = (void **)qword_18025D828;
  v14 = a4;
  if ( v10 >= 0x10 )
    v14 = (const void *)*a4;
  if ( v11 == (_QWORD)xmmword_18025D838 && !memcmp(v14, v13, v11) )
  {
    sub_180104BBC(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v16 = &qword_18025D848;
  if ( *((_QWORD *)&xmmword_18025D858 + 1) >= 0x10uLL )
    v16 = (void **)qword_18025D848;
  v17 = a4;
  if ( v10 >= 0x10 )
    v17 = (const void *)*a4;
  if ( v11 != (_QWORD)xmmword_18025D858 || memcmp(v17, v16, v11) )
    v7 = 0;
  if ( v7 )
  {
    sub_18010511C(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v18 = &qword_18025D868;
  if ( *((_QWORD *)&xmmword_18025D878 + 1) >= 0x10uLL )
    v18 = (void **)qword_18025D868;
  if ( v10 >= 0x10 )
    a4 = (size_t *)*a4;
  if ( v11 == (_QWORD)xmmword_18025D878 && !memcmp(a4, v18, v11) )
    sub_1801056E0(a1, v30, &v24);
  sub_180105EF4(a1, v24, &v25, v27);
  sub_180105E24(a1, 8LL);
  sub_1801040CC(a1);
  v19 = v25;
  if ( (_QWORD)v25 )
  {
    v20 = (v26 - v25) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v20 >= 0x1000 )
    {
      v21 = v20 + 39;
      v19 = *(_QWORD *)(v25 - 8);
      if ( (unsigned __int64)(v25 - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v21);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
    v25 = 0LL;
    v26 = 0LL;
  }
  sub_1800B7E10((__int64)&v30[144]);
  result = std::ios::~ios<char,std::char_traits<char>>(&v30[144]);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v23 = v28[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v23 = *(_QWORD *)(v28[0] - 8);
      if ( (unsigned __int64)(v28[0] - v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v23);
  }
  return result;
}
