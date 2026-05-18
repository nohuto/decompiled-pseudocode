/*
 * XREFs of sub_1800F63C0 @ 0x1800F63C0
 * Callers:
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

int __fastcall sub_1800F63C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F4300(a1, v5, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
}
