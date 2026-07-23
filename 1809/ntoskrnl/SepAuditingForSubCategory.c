/*
 * XREFs of SepAuditingForSubCategory @ 0x140091FF0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140091D90 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
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
