/*
 * XREFs of SeUnlockSubjectContext @ 0x1405F6E60
 * Callers:
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x140117380 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C6000 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C7008 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x14061BFC4 (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14069EFA8 (ObpVerifyCreatorAccessCheck.c)
 *     ObCheckObjectAccess @ 0x1406BE820 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x14089DC00 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1408F31B4 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
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
