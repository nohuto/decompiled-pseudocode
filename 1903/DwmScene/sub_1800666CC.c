/*
 * XREFs of sub_1800666CC @ 0x1800666CC
 * Callers:
 *     sub_180065CB0 @ 0x180065CB0 (sub_180065CB0.c)
 *     sub_180065F80 @ 0x180065F80 (sub_180065F80.c)
 * Callees:
 *     sub_180066DA4 @ 0x180066DA4 (sub_180066DA4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800666CC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_180066DA4(a3, i);
    a3 += 152LL;
  }
  return a3;
}
