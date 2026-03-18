/*
 * XREFs of SeLockSubjectContext @ 0x1405F5DB0
 * Callers:
 *     SepTrustLevelCheck @ 0x14000C418 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C5B00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C6B08 (ObpCheckObjectReference.c)
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
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
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
