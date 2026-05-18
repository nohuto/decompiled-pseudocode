/*
 * XREFs of sub_180066F90 @ 0x180066F90
 * Callers:
 *     sub_180130D8D @ 0x180130D8D (sub_180130D8D.c)
 * Callees:
 *     sub_180069F28 @ 0x180069F28 (sub_180069F28.c)
 */

__int64 __fastcall sub_180066F90(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  sub_180069F28(a1 + 16, v3, **(_QWORD **)(a1 + 16));
  return j_j__o_free(*v1);
}
