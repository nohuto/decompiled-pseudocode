/*
 * XREFs of SeAssignPrimaryToken @ 0x140749D14
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x14060995C (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x14064FBA4 (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A004 (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 856) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 856), (ULONG_PTR)a2);
}
