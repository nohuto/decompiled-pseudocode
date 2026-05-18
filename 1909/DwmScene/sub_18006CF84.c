/*
 * XREFs of sub_18006CF84 @ 0x18006CF84
 * Callers:
 *     sub_180024DD0 @ 0x180024DD0 (sub_180024DD0.c)
 *     sub_18006A5B4 @ 0x18006A5B4 (sub_18006A5B4.c)
 *     sub_18006DD70 @ 0x18006DD70 (sub_18006DD70.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 * Callees:
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 */

__int64 __fastcall sub_18006CF84(__int64 a1)
{
  sub_180063538(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
