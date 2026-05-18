/*
 * XREFs of sub_1800A63AC @ 0x1800A63AC
 * Callers:
 *     sub_1800A65A4 @ 0x1800A65A4 (sub_1800A65A4.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_18007DD44 @ 0x18007DD44 (sub_18007DD44.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall sub_1800A63AC(_DWORD *a1, _DWORD **a2)
{
  _QWORD *v3; // rbx

  *a1 = **a2;
  v3 = a1 + 2;
  memset(a1 + 2, 0, 0x20uLL);
  *v3 = 0LL;
  v3[1] = 0LL;
  *v3 = sub_18007DD44((__int64)v3, 0LL, 0LL);
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[2] = sub_180041C80();
  return a1;
}
