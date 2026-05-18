/*
 * XREFs of sub_18008A970 @ 0x18008A970
 * Callers:
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18008AA04 @ 0x18008AA04 (sub_18008AA04.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008A970(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-68h] BYREF

  v9[4] = -2LL;
  v9[5] = a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001110C(v9, (__int64)a3);
  v6 = sub_18008AD88(a1, v8, v9);
  sub_18008AA04(a1, a2, v6);
  unknown_libname_116(a3);
  return a2;
}
