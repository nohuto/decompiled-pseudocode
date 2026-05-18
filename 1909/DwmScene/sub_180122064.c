/*
 * XREFs of sub_180122064 @ 0x180122064
 * Callers:
 *     sub_180134952 @ 0x180134952 (sub_180134952.c)
 * Callees:
 *     sub_1801236DC @ 0x1801236DC (sub_1801236DC.c)
 */

__int64 __fastcall sub_180122064(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1801236DC(a1, v3, **a1);
  return j_j__o_free(*a1);
}
