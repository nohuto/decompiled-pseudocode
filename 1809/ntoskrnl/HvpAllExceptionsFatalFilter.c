/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x1407F6E40
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407F6FB0 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x14026D6B0 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
}
