/*
 * XREFs of sub_180122C30 @ 0x180122C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180122C30(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v9[7]; // [rsp+20h] [rbp-68h] BYREF

  v9[4] = -2LL;
  v9[6] = (__int64)a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001110C(v9, (__int64)a3);
  LODWORD(a1) = sub_18011F458(a1, a2, v9, a4);
  unknown_libname_116(a3);
  return (unsigned int)a1;
}
