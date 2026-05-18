/*
 * XREFs of sub_1800BCE6C @ 0x1800BCE6C
 * Callers:
 *     sub_1800BD050 @ 0x1800BD050 (sub_1800BD050.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_1800CAE68 @ 0x1800CAE68 (sub_1800CAE68.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800BCE6C(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_1800CAE68(a1 + 1);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D4D8(a1, 8LL);
  return a1;
}
