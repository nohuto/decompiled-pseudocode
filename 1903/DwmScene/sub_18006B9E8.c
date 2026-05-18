/*
 * XREFs of sub_18006B9E8 @ 0x18006B9E8
 * Callers:
 *     sub_1800AA59C @ 0x1800AA59C (sub_1800AA59C.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006B9E8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    a3[2] = 0LL;
    a3[3] = 0LL;
    sub_18001110C(a3, i);
    a3 += 4;
  }
  return a3;
}
