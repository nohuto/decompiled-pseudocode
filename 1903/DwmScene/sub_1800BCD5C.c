/*
 * XREFs of sub_1800BCD5C @ 0x1800BCD5C
 * Callers:
 *     sub_1800BCF40 @ 0x1800BCF40 (sub_1800BCF40.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 * Callees:
 *     sub_18008D3C8 @ 0x18008D3C8 (sub_18008D3C8.c)
 *     sub_1800CAD58 @ 0x1800CAD58 (sub_1800CAD58.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800BCD5C(_QWORD *a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = sub_1800CAD58(a1 + 1);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18008D3C8(a1, 8LL);
  return a1;
}
