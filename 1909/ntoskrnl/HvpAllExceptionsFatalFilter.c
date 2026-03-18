/*
 * XREFs of HvpAllExceptionsFatalFilter @ 0x14082F96C
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x14082FAD4 (HvpViewMapMigrateCOWData.c)
 * Callees:
 *     CmSiBugCheck @ 0x140280FE4 (CmSiBugCheck.c)
 */

void __fastcall __noreturn HvpAllExceptionsFatalFilter(ULONG_PTR *a1)
{
  CmSiBugCheck((__int64)a1, *(int *)*a1, *a1, a1[1]);
}
