/*
 * XREFs of sub_1800670B0 @ 0x1800670B0
 * Callers:
 *     sub_1800671B8 @ 0x1800671B8 (sub_1800671B8.c)
 * Callees:
 *     sub_180069F28 @ 0x180069F28 (sub_180069F28.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800670B0(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 216);
  sub_180069F28(a1 + 216, v4, **(_QWORD **)(a1 + 216));
  j_j__o_free(*v1);
  sub_180069F28(a1 + 16, v4, **(_QWORD **)(a1 + 16));
  return j_j__o_free(*(_QWORD *)(a1 + 16));
}
