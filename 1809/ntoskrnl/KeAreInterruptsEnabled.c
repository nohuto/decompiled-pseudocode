/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400CACE4
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     KeAreAllApcsDisabled @ 0x1400CAA70 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400CAAB0 (KeGetEffectiveIrql.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAB30 (KeQueryCurrentStackInformation.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB3EC (MiRetryNonPagedAllocation.c)
 *     ObpDeferObjectDeletion @ 0x140125DB0 (ObpDeferObjectDeletion.c)
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3A90 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x140928F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092904C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14092FEB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409300A4 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140939424 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140939F30 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x140939FF0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093A2A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x14093A330 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x14093A8B0 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x14093ACE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093B048 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x14093B19C (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x14093CD18 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
