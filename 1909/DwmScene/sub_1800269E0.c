/*
 * XREFs of sub_1800269E0 @ 0x1800269E0
 * Callers:
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 * Callees:
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

__int64 __fastcall sub_1800269E0(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 v5; // [rsp+58h] [rbp+20h]

  v5 = sub_18002B85C(a1);
  *(_WORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = **a3;
  memset((void *)(v5 + 40), 0, 0x20uLL);
  return v5;
}
