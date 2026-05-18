/*
 * XREFs of sub_1800A64BC @ 0x1800A64BC
 * Callers:
 *     sub_1800A66B4 @ 0x1800A66B4 (sub_1800A66B4.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_18007DE54 @ 0x18007DE54 (sub_18007DE54.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall sub_1800A64BC(_DWORD *a1, _DWORD **a2)
{
  _QWORD *v3; // rbx

  *a1 = **a2;
  v3 = a1 + 2;
  memset(a1 + 2, 0, 0x20uLL);
  *v3 = 0LL;
  v3[1] = 0LL;
  *v3 = sub_18007DE54((__int64)v3, 0LL, 0LL);
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[2] = sub_180041D90();
  return a1;
}
