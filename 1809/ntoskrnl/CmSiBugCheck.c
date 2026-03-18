/*
 * XREFs of CmSiBugCheck @ 0x14026D6B0
 * Callers:
 *     CmpInitializeValueNameString @ 0x1405AF46C (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x1407F6E40 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1407F6E60 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x1407FD80C (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
