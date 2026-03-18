/*
 * XREFs of SepAuditingForSubCategory @ 0x1400E4520
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400E42B0 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAuditingForSubCategory(int a1, char a2)
{
  __int64 v2; // rcx

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return SeAuditingState[2 * v2];
  else
    return SeAuditingState[2 * v2 + 1];
}
