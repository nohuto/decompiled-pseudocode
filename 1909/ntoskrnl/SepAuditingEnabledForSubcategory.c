/*
 * XREFs of SepAuditingEnabledForSubcategory @ 0x140088340
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406234D0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DDCA0 (SepAdtClassifyObjectIntoSubCategory.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAuditingEnabledForSubcategory(int a1, char a2, char a3)
{
  __int64 v3; // rcx

  v3 = (unsigned int)(a1 - 100);
  return SeAuditingState[2 * v3] && a2 || SeAuditingState[2 * v3 + 1] && a3;
}
