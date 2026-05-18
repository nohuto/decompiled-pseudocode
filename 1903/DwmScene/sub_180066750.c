/*
 * XREFs of sub_180066750 @ 0x180066750
 * Callers:
 *     sub_180065E2C @ 0x180065E2C (sub_180065E2C.c)
 * Callees:
 *     sub_180025EA8 @ 0x180025EA8 (sub_180025EA8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180066750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 56) = 0LL;
    sub_180025EA8(a3, i);
    a3 += 64LL;
  }
  return a3;
}
