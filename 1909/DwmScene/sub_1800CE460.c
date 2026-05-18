/*
 * XREFs of sub_1800CE460 @ 0x1800CE460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800CE460(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_1800657B8((__int64 *)(a1 + 136), (unsigned int *)&v5);
  return sub_180064300(a1, a2);
}
