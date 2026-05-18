/*
 * XREFs of sub_1801049A4 @ 0x1801049A4
 * Callers:
 *     sub_1800C22B0 @ 0x1800C22B0 (sub_1800C22B0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_1800B7C58 @ 0x1800B7C58 (sub_1800B7C58.c)
 *     sub_1800B7F20 @ 0x1800B7F20 (sub_1800B7F20.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 *     sub_180104CCC @ 0x180104CCC (sub_180104CCC.c)
 *     sub_180104F84 @ 0x180104F84 (sub_180104F84.c)
 *     sub_18010522C @ 0x18010522C (sub_18010522C.c)
 *     sub_1801057F0 @ 0x1801057F0 (sub_1801057F0.c)
 *     sub_180105F34 @ 0x180105F34 (sub_180105F34.c)
 *     sub_180106004 @ 0x180106004 (sub_180106004.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801049A4(__int64 a1, char *a2, size_t a3, size_t *a4)
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

  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v28[0]) = 0;
  if ( a2 != &a2[a3] )
  {
    if ( a3 > 0xF )
    {
      sub_18000E168(v28, a3, 0LL, a2);
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
  sub_1800B7C58((__int64)v30, (__int64)v28, 1, 1);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v8 = &qword_18025E888;
  if ( *((_QWORD *)&xmmword_18025E898 + 1) >= 0x10uLL )
    v8 = (void **)qword_18025E888;
  v9 = a4;
  v10 = a4[3];
  if ( v10 >= 0x10 )
    v9 = (const void *)*a4;
  v11 = a4[2];
  if ( v11 == (_QWORD)xmmword_18025E898 && !memcmp(v9, v8, a4[2]) )
  {
    sub_180104F84(a1, v28, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v13 = &qword_18025E828;
  if ( *((_QWORD *)&xmmword_18025E838 + 1) >= 0x10uLL )
    v13 = (void **)qword_18025E828;
  v14 = a4;
  if ( v10 >= 0x10 )
    v14 = (const void *)*a4;
  if ( v11 == (_QWORD)xmmword_18025E838 && !memcmp(v14, v13, v11) )
  {
    sub_180104CCC(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v16 = &qword_18025E848;
  if ( *((_QWORD *)&xmmword_18025E858 + 1) >= 0x10uLL )
    v16 = (void **)qword_18025E848;
  v17 = a4;
  if ( v10 >= 0x10 )
    v17 = (const void *)*a4;
  if ( v11 != (_QWORD)xmmword_18025E858 || memcmp(v17, v16, v11) )
    v7 = 0;
  if ( v7 )
  {
    sub_18010522C(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v18 = &qword_18025E868;
  if ( *((_QWORD *)&xmmword_18025E878 + 1) >= 0x10uLL )
    v18 = (void **)qword_18025E868;
  if ( v10 >= 0x10 )
    a4 = (size_t *)*a4;
  if ( v11 == (_QWORD)xmmword_18025E878 && !memcmp(a4, v18, v11) )
    sub_1801057F0(a1, v30, &v24);
  sub_180106004(a1, v24, &v25, v27);
  sub_180105F34(a1, 8LL);
  sub_1801041DC(a1);
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
  sub_1800B7F20((__int64)&v30[144]);
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
