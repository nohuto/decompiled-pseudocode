/*
 * XREFs of sub_180028258 @ 0x180028258
 * Callers:
 *     sub_180128A76 @ 0x180128A76 (sub_180128A76.c)
 * Callees:
 *     sub_18002BEC0 @ 0x18002BEC0 (sub_18002BEC0.c)
 */

__int64 __fastcall sub_180028258(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002BEC0(a1, v3, **a1);
  return j_j__o_free(*a1);
}
