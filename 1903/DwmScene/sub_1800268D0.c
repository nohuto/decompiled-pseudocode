/*
 * XREFs of sub_1800268D0 @ 0x1800268D0
 * Callers:
 *     sub_1800275C4 @ 0x1800275C4 (sub_1800275C4.c)
 * Callees:
 *     sub_18002B74C @ 0x18002B74C (sub_18002B74C.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

__int64 __fastcall sub_1800268D0(__int64 a1, __int64 a2, _DWORD **a3)
{
  __int64 v5; // [rsp+58h] [rbp+20h]

  v5 = sub_18002B74C(a1);
  *(_WORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = **a3;
  memset((void *)(v5 + 40), 0, 0x20uLL);
  return v5;
}
