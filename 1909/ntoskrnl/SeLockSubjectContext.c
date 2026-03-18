/*
 * XREFs of SeLockSubjectContext @ 0x1405F6E00
 * Callers:
 *     SepTrustLevelCheck @ 0x14000C4A8 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x140117380 (IopCreateSecurityCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     ObCheckCreateObjectAccess @ 0x1405C6000 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C7008 (ObpCheckObjectReference.c)
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
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
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
