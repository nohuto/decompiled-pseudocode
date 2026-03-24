/*
 * XREFs of SeUnlockSubjectContext @ 0x1405E62C0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA8D8 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14013001C (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckObjectAccess @ 0x1405958F0 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1405B96B4 (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C83B0 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C9050 (ObpCheckObjectReference.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654704 (ObpVerifyCreatorAccessCheck.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E26B4 (EtwpCoverageUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48C0 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140861924 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
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
