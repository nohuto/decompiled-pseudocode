/*
 * XREFs of SeAssignPrimaryToken @ 0x140780318
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     SeDeassignPrimaryToken @ 0x140671BD0 (SeDeassignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitializeFastReference @ 0x140691FFC (ObInitializeFastReference.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 */

ULONG_PTR __fastcall SeAssignPrimaryToken(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  if ( *(_QWORD *)(a1 + 864) )
    SeDeassignPrimaryToken(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return ObInitializeFastReference((ULONG_PTR *)(a1 + 864), (ULONG_PTR)a2);
}
