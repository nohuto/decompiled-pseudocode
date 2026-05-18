/*
 * XREFs of sub_1800761D4 @ 0x1800761D4
 * Callers:
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 * Callees:
 *     sub_18006F95C @ 0x18006F95C (sub_18006F95C.c)
 *     sub_18007315C @ 0x18007315C (sub_18007315C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800761D4(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = a3;
  v7 = a4;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18007315C(a2, a1, &v8, &v7);
  sub_18006F95C(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
