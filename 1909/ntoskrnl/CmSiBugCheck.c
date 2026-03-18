/*
 * XREFs of CmSiBugCheck @ 0x140280FE4
 * Callers:
 *     HvpAllExceptionsFatalFilter @ 0x14082F96C (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x14082F988 (HvpInpageErrorFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, 0x21uLL, a2, a3, BugCheckParameter4);
}
