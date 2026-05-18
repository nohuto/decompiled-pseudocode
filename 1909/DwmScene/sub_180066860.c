/*
 * XREFs of sub_180066860 @ 0x180066860
 * Callers:
 *     sub_180065F3C @ 0x180065F3C (sub_180065F3C.c)
 * Callees:
 *     sub_180025FB8 @ 0x180025FB8 (sub_180025FB8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180066860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 56) = 0LL;
    sub_180025FB8(a3, i);
    a3 += 64LL;
  }
  return a3;
}
