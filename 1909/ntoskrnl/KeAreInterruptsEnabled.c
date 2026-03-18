/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400A3040
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     MiRetryNonPagedAllocation @ 0x14007C3F8 (MiRetryNonPagedAllocation.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     KeAreAllApcsDisabled @ 0x1400A1670 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1400A2E20 (KeQueryCurrentStackInformationEx.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402C8D50 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
