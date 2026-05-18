/*
 * XREFs of sub_180020964 @ 0x180020964
 * Callers:
 *     sub_18012CC17 @ 0x18012CC17 (sub_18012CC17.c)
 *     sub_18012EB42 @ 0x18012EB42 (sub_18012EB42.c)
 *     sub_18012F52A @ 0x18012F52A (sub_18012F52A.c)
 *     sub_18013097C @ 0x18013097C (sub_18013097C.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180020964(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 80);
  sub_180026664(a1 + 80, v4, **(_QWORD **)(a1 + 80), *(_QWORD *)(a1 + 80));
  j_j__o_free(*v1);
  return sub_18006403C(a1);
}
