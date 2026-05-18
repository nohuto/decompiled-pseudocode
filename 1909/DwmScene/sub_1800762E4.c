/*
 * XREFs of sub_1800762E4 @ 0x1800762E4
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     sub_18006FA6C @ 0x18006FA6C (sub_18006FA6C.c)
 *     sub_18007326C @ 0x18007326C (sub_18007326C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800762E4(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = a3;
  v7 = a4;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18007326C(a2, a1, &v8, &v7);
  sub_18006FA6C(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
