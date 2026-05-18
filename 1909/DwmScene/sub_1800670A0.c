/*
 * XREFs of sub_1800670A0 @ 0x1800670A0
 * Callers:
 *     sub_180130E9D @ 0x180130E9D (sub_180130E9D.c)
 * Callees:
 *     sub_18006A038 @ 0x18006A038 (sub_18006A038.c)
 */

__int64 __fastcall sub_1800670A0(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  sub_18006A038(a1 + 16, v3, **(_QWORD **)(a1 + 16));
  return j_j__o_free(*v1);
}
