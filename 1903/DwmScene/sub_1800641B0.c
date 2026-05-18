/*
 * XREFs of sub_1800641B0 @ 0x1800641B0
 * Callers:
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_180090190 @ 0x180090190 (sub_180090190.c)
 *     sub_1800955C0 @ 0x1800955C0 (sub_1800955C0.c)
 *     sub_18009D810 @ 0x18009D810 (sub_18009D810.c)
 *     sub_18009F494 @ 0x18009F494 (sub_18009F494.c)
 *     sub_1800CBF00 @ 0x1800CBF00 (sub_1800CBF00.c)
 *     sub_1800CDF70 @ 0x1800CDF70 (sub_1800CDF70.c)
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800D2564 @ 0x1800D2564 (sub_1800D2564.c)
 * Callees:
 *     sub_180063CE0 @ 0x180063CE0 (sub_180063CE0.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 */

__int64 __fastcall sub_1800641B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = sub_18006CDB8(*a2);
  sub_180063CE0((__int64 **)(a1 + 80), (__int64)&v4, v5);
  result = v4;
  *(_BYTE *)(v4 + 32) = 0;
  return result;
}
