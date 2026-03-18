/*
 * XREFs of MmIsSessionAddress @ 0x1400C6CC0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x1400C6A44 (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400C6B90 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ViAvlNodeInitializeSessionId @ 0x140154F0C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1401AA888 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x1402B0538 (KeAbCrossThreadDelete.c)
 *     CmpIsBufferGloballyVisible @ 0x140651798 (CmpIsBufferGloballyVisible.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x14071A748 (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x140722BE8 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x1407483A8 (KseDriverUnloadImage.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x140954D04 (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409648D8 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409672C0 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_140467140[((a1 >> 39) & 0x1FF) - 256] == 1;
}
