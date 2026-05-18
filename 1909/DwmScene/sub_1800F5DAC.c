/*
 * XREFs of sub_1800F5DAC @ 0x1800F5DAC
 * Callers:
 *     sub_1800A5220 @ 0x1800A5220 (sub_1800A5220.c)
 *     sub_1800EBDF0 @ 0x1800EBDF0 (sub_1800EBDF0.c)
 *     sub_180111660 @ 0x180111660 (sub_180111660.c)
 * Callees:
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 */

int __fastcall sub_1800F5DAC(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2DBC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F41DC(a1, v5, a3);
}
