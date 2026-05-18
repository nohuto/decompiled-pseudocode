/*
 * XREFs of sub_180122D40 @ 0x180122D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180122D40(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v9[7]; // [rsp+20h] [rbp-68h] BYREF

  v9[4] = -2LL;
  v9[6] = (__int64)a3;
  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001115C(v9, (__int64)a3);
  LODWORD(a1) = sub_18011F568(a1, a2, v9, a4);
  unknown_libname_116(a3);
  return (unsigned int)a1;
}
