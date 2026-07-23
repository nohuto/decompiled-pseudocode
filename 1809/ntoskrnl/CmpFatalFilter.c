/*
 * XREFs of CmpFatalFilter @ 0x1407F21B0
 * Callers:
 *     CmpQueryKeyName @ 0x1405D2AC0 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
