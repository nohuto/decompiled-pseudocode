/*
 * XREFs of CmSiBugCheck @ 0x14026D9A0
 * Callers:
 *     CmpInitializeValueNameString @ 0x1405B046C (CmpInitializeValueNameString.c)
 *     HvpAllExceptionsFatalFilter @ 0x1407F8020 (HvpAllExceptionsFatalFilter.c)
 *     HvpInpageErrorFilter @ 0x1407F8040 (HvpInpageErrorFilter.c)
 *     CmpInitializeKeyNameString @ 0x1407FE9EC (CmpInitializeKeyNameString.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmSiBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x51u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
