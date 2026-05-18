/*
 * XREFs of sub_1801166D0 @ 0x1801166D0
 * Callers:
 *     sub_18011578C @ 0x18011578C (sub_18011578C.c)
 *     sub_180115914 @ 0x180115914 (sub_180115914.c)
 *     sub_180115E04 @ 0x180115E04 (sub_180115E04.c)
 *     sub_180115FEC @ 0x180115FEC (sub_180115FEC.c)
 *     sub_18011638C @ 0x18011638C (sub_18011638C.c)
 *     sub_18011658C @ 0x18011658C (sub_18011658C.c)
 * Callees:
 *     sub_18008210C @ 0x18008210C (sub_18008210C.c)
 *     sub_180083430 @ 0x180083430 (sub_180083430.c)
 *     sub_1800B833C @ 0x1800B833C (sub_1800B833C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1801166D0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __m128 v12; // xmm2
  unsigned __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int32 v15; // [rsp+28h] [rbp-38h]
  unsigned __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int32 v17; // [rsp+38h] [rbp-28h]
  unsigned __int64 v18[2]; // [rsp+40h] [rbp-20h] BYREF

  v7 = a3;
  v8 = 3LL * a2;
  v9 = (unsigned __int64 *)(a1 + 12LL * a2);
  v10 = 3LL * a4;
  sub_18008210C(&v14, (unsigned __int64 *)(a1 + 12LL * a4), v9);
  v11 = 3 * v7;
  sub_18008210C(v18, (unsigned __int64 *)(a1 + 4 * v11), v9);
  sub_180083430(v18, &v16, &v14);
  if ( a5 )
  {
    v12 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v16, (__m128)v17));
    LODWORD(v14) = v12.m128_i32[0];
    HIDWORD(v14) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    v16 = __PAIR64__(HIDWORD(v14), v12.m128_u32[0]);
    v15 = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
    v17 = v15;
  }
  sub_1800B833C((_DWORD *)(a6 + 4 * v8), &v16);
  sub_1800B833C((_DWORD *)(a6 + 4 * v11), &v16);
  return sub_1800B833C((_DWORD *)(a6 + 4 * v10), &v16);
}
