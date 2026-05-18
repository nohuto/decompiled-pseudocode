/*
 * XREFs of sub_1800641F0 @ 0x1800641F0
 * Callers:
 *     sub_1800654D0 @ 0x1800654D0 (sub_1800654D0.c)
 *     sub_1800904B0 @ 0x1800904B0 (sub_1800904B0.c)
 *     sub_180096250 @ 0x180096250 (sub_180096250.c)
 *     sub_18009EA90 @ 0x18009EA90 (sub_18009EA90.c)
 *     sub_18009F840 @ 0x18009F840 (sub_18009F840.c)
 *     sub_1800CE350 @ 0x1800CE350 (sub_1800CE350.c)
 *     sub_1800D0930 @ 0x1800D0930 (sub_1800D0930.c)
 *     sub_1800D1E70 @ 0x1800D1E70 (sub_1800D1E70.c)
 *     sub_1800D26D0 @ 0x1800D26D0 (sub_1800D26D0.c)
 * Callees:
 *     sub_1800645D8 @ 0x1800645D8 (sub_1800645D8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800641F0(__int64 a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  return sub_1800645D8(a1 + 80, &v3);
}
