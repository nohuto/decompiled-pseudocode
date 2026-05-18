/*
 * XREFs of sub_18007B288 @ 0x18007B288
 * Callers:
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_18009F9C0 @ 0x18009F9C0 (sub_18009F9C0.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800CE5F8 @ 0x1800CE5F8 (sub_1800CE5F8.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 *     sub_1800D28C0 @ 0x1800D28C0 (sub_1800D28C0.c)
 *     sub_1800F0AD8 @ 0x1800F0AD8 (sub_1800F0AD8.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_1800739B4 @ 0x1800739B4 (sub_1800739B4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007B288(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  sub_180063468(a1 + 112, &v5);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_1800739B4(a2, (_QWORD *)(a1 + 88));
  if ( (_BYTE)v6 )
    sub_180063780(v5);
  return a2;
}
