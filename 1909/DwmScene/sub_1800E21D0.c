/*
 * XREFs of sub_1800E21D0 @ 0x1800E21D0
 * Callers:
 *     sub_1800E209C @ 0x1800E209C (sub_1800E209C.c)
 * Callees:
 *     sub_18010B7E8 @ 0x18010B7E8 (sub_18010B7E8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E21D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 128LL )
  {
    sub_18010B7E8(a3, i);
    a3 += 128LL;
  }
  return a3;
}
