/*
 * XREFs of sub_1800667DC @ 0x1800667DC
 * Callers:
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 * Callees:
 *     sub_180066EB4 @ 0x180066EB4 (sub_180066EB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800667DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_180066EB4(a3, i);
    a3 += 152LL;
  }
  return a3;
}
