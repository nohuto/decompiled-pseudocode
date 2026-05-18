/*
 * XREFs of sub_180124548 @ 0x180124548
 * Callers:
 *     sub_18011ECFC @ 0x18011ECFC (sub_18011ECFC.c)
 *     sub_18011F05C @ 0x18011F05C (sub_18011F05C.c)
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_18011F918 @ 0x18011F918 (sub_18011F918.c)
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     sub_180122800 @ 0x180122800 (sub_180122800.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_1801243CC @ 0x1801243CC (sub_1801243CC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180124548(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+28h] [rbp-30h] BYREF

  v5[2] = a2;
  sub_1801243CC(a1 + 64, (__int64)v5, a2);
  v3 = v5[0];
  unknown_libname_116((__int64 *)a2);
  return v3 + 48;
}
