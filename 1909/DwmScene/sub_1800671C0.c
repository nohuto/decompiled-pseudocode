/*
 * XREFs of sub_1800671C0 @ 0x1800671C0
 * Callers:
 *     sub_1800672C8 @ 0x1800672C8 (sub_1800672C8.c)
 * Callees:
 *     sub_18006A038 @ 0x18006A038 (sub_18006A038.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800671C0(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 216);
  sub_18006A038(a1 + 216, v4, **(_QWORD **)(a1 + 216));
  j_j__o_free(*v1);
  sub_18006A038(a1 + 16, v4, **(_QWORD **)(a1 + 16));
  return j_j__o_free(*(_QWORD *)(a1 + 16));
}
