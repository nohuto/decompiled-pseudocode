/*
 * XREFs of sub_180124658 @ 0x180124658
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 *     sub_18011F16C @ 0x18011F16C (sub_18011F16C.c)
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_18011FA28 @ 0x18011FA28 (sub_18011FA28.c)
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 *     sub_18011FF04 @ 0x18011FF04 (sub_18011FF04.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180120434 @ 0x180120434 (sub_180120434.c)
 *     sub_180122740 @ 0x180122740 (sub_180122740.c)
 *     sub_180122910 @ 0x180122910 (sub_180122910.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_1801244DC @ 0x1801244DC (sub_1801244DC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180124658(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+28h] [rbp-30h] BYREF

  v5[2] = a2;
  sub_1801244DC(a1 + 64, (__int64)v5, a2);
  v3 = v5[0];
  unknown_libname_116((__int64 *)a2);
  return v3 + 48;
}
