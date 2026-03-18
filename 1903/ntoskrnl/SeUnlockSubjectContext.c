/*
 * XREFs of SeUnlockSubjectContext @ 0x1405F5E10
 * Callers:
 *     SepTrustLevelCheck @ 0x14000C418 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C5B00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C6B08 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x14061A4B4 (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140680A48 (ObpVerifyCreatorAccessCheck.c)
 *     ObCheckObjectAccess @ 0x1406BED70 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x14089E3C0 (ObpCheckTraverseAccess.c)
 *     EtwpCoverageUserIsAdmin @ 0x1408F3844 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
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
