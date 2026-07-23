/*
 * XREFs of SeUnlockSubjectContext @ 0x1405E72C0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA818 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckObjectAccess @ 0x1405968F0 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1405BA6B4 (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C93B0 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406558C4 (ObpVerifyCreatorAccessCheck.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E3954 (EtwpCoverageUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140862B84 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
}
