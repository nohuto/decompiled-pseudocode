/*
 * XREFs of sub_180064430 @ 0x180064430
 * Callers:
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_18007636C @ 0x18007636C (sub_18007636C.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 *     sub_18009D920 @ 0x18009D920 (sub_18009D920.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 *     sub_1800D24D0 @ 0x1800D24D0 (sub_1800D24D0.c)
 *     sub_1800D28C0 @ 0x1800D28C0 (sub_1800D28C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180064430(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 40)) != 0;
}
