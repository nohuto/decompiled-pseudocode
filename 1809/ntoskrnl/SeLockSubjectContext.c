/*
 * XREFs of SeLockSubjectContext @ 0x1405E6300
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x1400AA8B8 (SepTrustLevelCheck.c)
 *     IopCreateSecurityCheck @ 0x14012FFFC (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckObjectAccess @ 0x1405958F0 (ObCheckObjectAccess.c)
 *     PspIsContextAdmin @ 0x1405B96B4 (PspIsContextAdmin.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C83B0 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C9050 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654724 (ObpVerifyCreatorAccessCheck.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E26D4 (EtwpCoverageUserIsAdmin.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48E0 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140861944 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1408D8404 (CMFCheckAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
