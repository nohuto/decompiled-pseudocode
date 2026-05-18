/*
 * XREFs of sub_1800642C0 @ 0x1800642C0
 * Callers:
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 *     sub_1800902A0 @ 0x1800902A0 (sub_1800902A0.c)
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 *     sub_18009D920 @ 0x18009D920 (sub_18009D920.c)
 *     sub_18009F5A4 @ 0x18009F5A4 (sub_18009F5A4.c)
 *     sub_1800CC010 @ 0x1800CC010 (sub_1800CC010.c)
 *     sub_1800CE080 @ 0x1800CE080 (sub_1800CE080.c)
 *     sub_1800D02A0 @ 0x1800D02A0 (sub_1800D02A0.c)
 *     sub_1800D1980 @ 0x1800D1980 (sub_1800D1980.c)
 *     sub_1800D2674 @ 0x1800D2674 (sub_1800D2674.c)
 * Callees:
 *     sub_180063DF0 @ 0x180063DF0 (sub_180063DF0.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 */

__int64 __fastcall sub_1800642C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = sub_18006CEC8(*a2);
  sub_180063DF0((__int64 **)(a1 + 80), (__int64)&v4, v5);
  result = v4;
  *(_BYTE *)(v4 + 32) = 0;
  return result;
}
