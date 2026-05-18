/*
 * XREFs of sub_1800FBCBC @ 0x1800FBCBC
 * Callers:
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 * Callees:
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_180096CE0 @ 0x180096CE0 (sub_180096CE0.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 *     sub_18009766C @ 0x18009766C (sub_18009766C.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097954 @ 0x180097954 (sub_180097954.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FBCBC(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // r9
  _OWORD v11[2]; // [rsp+40h] [rbp-51h] BYREF
  _OWORD v12[3]; // [rsp+60h] [rbp-31h] BYREF
  _OWORD v13[3]; // [rsp+90h] [rbp-1h] BYREF
  _DWORD v14[4]; // [rsp+C0h] [rbp+2Fh] BYREF

  v3 = 4LL;
  v4 = (_DWORD *)v12 + 2;
  do
  {
    *((_QWORD *)v4 - 1) = 0LL;
    *v4 = 0;
    v4 += 3;
    --v3;
  }
  while ( v3 );
  v5 = v11;
  v6 = 4LL;
  do
  {
    *v5++ = 0LL;
    --v6;
  }
  while ( v6 );
  v7 = 4LL;
  v8 = (_DWORD *)v13 + 2;
  do
  {
    *((_QWORD *)v8 - 1) = 0LL;
    *v8 = 0;
    v8 += 3;
    --v7;
  }
  while ( v7 );
  v12[0] = xmmword_18020B960;
  v12[1] = xmmword_18020B970;
  v12[2] = xmmword_1801F5E40;
  v13[0] = xmmword_1801F2AE0;
  v13[1] = *(_OWORD *)&ymmword_1801F2AC0.m256_f32[4];
  v13[2] = xmmword_1801F7B00;
  v11[0] = xmmword_18020B950;
  v11[1] = xmmword_1801F2AE0;
  v14[0] = 0x10000;
  v14[1] = 65538;
  v14[2] = 131075;
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180015C64(a2, a1, 1u);
  sub_180097954(*a1, 4);
  sub_180096CE0(*a1, 6);
  sub_18009766C(*a1, 0);
  sub_180097364(*a1, (__int64)v12);
  sub_180096CF0(*a1, (__int64)v14);
  sub_180097220(*a1, (__int64)v13, 0, v9);
  sub_1800976EC(*a1, (__int64)v11);
  sub_180095D8C(*a1, 0);
  return a1;
}
