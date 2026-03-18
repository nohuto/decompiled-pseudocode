/*
 * XREFs of CmpFatalFilter @ 0x14082B290
 * Callers:
 *     CmpQueryKeyName @ 0x140656C80 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
