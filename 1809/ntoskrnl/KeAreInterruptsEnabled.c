/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400CADE4
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB4EC (MiRetryNonPagedAllocation.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3D80 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x14093A424 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x14093AF30 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x14093AFF0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093B2A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x14093B330 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x14093B8B0 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x14093BCE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14093C048 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x14093C19C (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x14093DD18 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
