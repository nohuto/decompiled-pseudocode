/*
 * XREFs of sub_180111E98 @ 0x180111E98
 * Callers:
 *     sub_180009B30 @ 0x180009B30 (sub_180009B30.c)
 * Callees:
 *     sub_18008D3C8 @ 0x18008D3C8 (sub_18008D3C8.c)
 *     sub_180111ADC @ 0x180111ADC (sub_180111ADC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180111E98(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_180111ADC((__int64)(a1 + 1), 0LL, 0LL);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D3C8(a1, 8LL);
  return a1;
}
