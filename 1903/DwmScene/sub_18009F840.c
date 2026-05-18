/*
 * XREFs of sub_18009F840 @ 0x18009F840
 * Callers:
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800D0930 @ 0x1800D0930 (sub_1800D0930.c)
 *     sub_1800F82A8 @ 0x1800F82A8 (sub_1800F82A8.c)
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18009F840(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_1800656A8((__int64 *)(a1 + 128), (unsigned int *)&v5);
  return sub_1800641F0(a1, a2);
}
