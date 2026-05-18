/*
 * XREFs of sub_1800644BC @ 0x1800644BC
 * Callers:
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 *     sub_1800902A0 @ 0x1800902A0 (sub_1800902A0.c)
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 *     sub_18009D920 @ 0x18009D920 (sub_18009D920.c)
 *     sub_18009F5A4 @ 0x18009F5A4 (sub_18009F5A4.c)
 *     sub_1800CC010 @ 0x1800CC010 (sub_1800CC010.c)
 *     sub_1800D02A0 @ 0x1800D02A0 (sub_1800D02A0.c)
 *     sub_1800D2674 @ 0x1800D2674 (sub_1800D2674.c)
 *     sub_1800D2E34 @ 0x1800D2E34 (sub_1800D2E34.c)
 * Callees:
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 */

__int64 __fastcall sub_1800644BC(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = a2;
  sub_180063DF0((__int64 **)(a1 + 80), (__int64)&v3, v4);
  result = v3;
  *(_BYTE *)(v3 + 32) = 1;
  return result;
}
