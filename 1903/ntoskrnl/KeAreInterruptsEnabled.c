/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400C31C0
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     MiRetryNonPagedAllocation @ 0x14007BFF8 (MiRetryNonPagedAllocation.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1400C2FA0 (KeQueryCurrentStackInformationEx.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402C8FF0 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14096E734 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14096E920 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140977A54 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140978560 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140978620 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409788D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140978960 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x140978EE0 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140979310 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409797E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x14097C15C (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
