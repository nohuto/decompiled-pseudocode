/*
 * XREFs of sub_18009F950 @ 0x18009F950
 * Callers:
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 *     sub_1800F83B8 @ 0x1800F83B8 (sub_1800F83B8.c)
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18009F950(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_1800657B8((__int64 *)(a1 + 128), (unsigned int *)&v5);
  return sub_180064300(a1, a2);
}
