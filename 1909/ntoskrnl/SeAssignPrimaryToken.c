/*
 * XREFs of SeAssignPrimaryToken @ 0x14074AEAC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x140652A00 (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x14068556C (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A9FC (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, (__int64)a2);
  if ( *(_QWORD *)(a1 + 864) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 864), (ULONG_PTR)a2);
}
