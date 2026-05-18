/*
 * XREFs of sub_180020854 @ 0x180020854
 * Callers:
 *     sub_18012CB07 @ 0x18012CB07 (sub_18012CB07.c)
 *     sub_18012EA32 @ 0x18012EA32 (sub_18012EA32.c)
 *     sub_18012F41A @ 0x18012F41A (sub_18012F41A.c)
 *     sub_18013086C @ 0x18013086C (sub_18013086C.c)
 * Callees:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180020854(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 80);
  sub_180026554(a1 + 80, v4, **(_QWORD **)(a1 + 80), *(_QWORD *)(a1 + 80));
  j_j__o_free(*v1);
  return sub_180063F2C(a1);
}
