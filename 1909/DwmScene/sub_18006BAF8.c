/*
 * XREFs of sub_18006BAF8 @ 0x18006BAF8
 * Callers:
 *     sub_1800AA6AC @ 0x1800AA6AC (sub_1800AA6AC.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006BAF8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    a3[2] = 0LL;
    a3[3] = 0LL;
    sub_18001115C(a3, i);
    a3 += 4;
  }
  return a3;
}
