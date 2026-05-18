/*
 * XREFs of sub_1800E20C0 @ 0x1800E20C0
 * Callers:
 *     sub_1800E1F8C @ 0x1800E1F8C (sub_1800E1F8C.c)
 * Callees:
 *     sub_18010B6D8 @ 0x18010B6D8 (sub_18010B6D8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E20C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 128LL )
  {
    sub_18010B6D8(a3, i);
    a3 += 128LL;
  }
  return a3;
}
