/*
 * XREFs of sub_1800ABEA4 @ 0x1800ABEA4
 * Callers:
 *     sub_18012FECF @ 0x18012FECF (sub_18012FECF.c)
 * Callees:
 *     sub_1800B2D84 @ 0x1800B2D84 (sub_1800B2D84.c)
 */

__int64 __fastcall sub_1800ABEA4(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800B2D84(a1, v3, **a1);
  return j_j__o_free(*a1);
}
