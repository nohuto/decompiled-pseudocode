/*
 * XREFs of sub_1800D4F4C @ 0x1800D4F4C
 * Callers:
 *     sub_180133091 @ 0x180133091 (sub_180133091.c)
 * Callees:
 *     sub_1800D61B8 @ 0x1800D61B8 (sub_1800D61B8.c)
 */

__int64 __fastcall sub_1800D4F4C(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800D61B8(a1, v3, **a1);
  return j_j__o_free(*a1);
}
