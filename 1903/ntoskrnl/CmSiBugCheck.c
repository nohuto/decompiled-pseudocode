/*
 * XREFs of CmSiBugCheck @ 0x140281284
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x14082FAFC (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x14082FB18 (HvpInpageErrorFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, 0x21uLL, a2, a3, BugCheckParameter4);
}
