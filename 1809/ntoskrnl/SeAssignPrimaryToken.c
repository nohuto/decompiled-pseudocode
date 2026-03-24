/*
 * XREFs of SeAssignPrimaryToken @ 0x140748B24
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14064E814 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x14060895C (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060A3C0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x14064E9E4 (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E14 (SepAuditAssignPrimaryToken.c)
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
