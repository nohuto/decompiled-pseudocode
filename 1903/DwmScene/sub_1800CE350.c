/*
 * XREFs of sub_1800CE350 @ 0x1800CE350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800CE350(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_1800656A8((__int64 *)(a1 + 136), (unsigned int *)&v5);
  return sub_1800641F0(a1, a2);
}
