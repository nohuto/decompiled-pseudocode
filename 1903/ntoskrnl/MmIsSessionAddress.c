/*
 * XREFs of MmIsSessionAddress @ 0x14009EE80
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x14009EC04 (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14009ED50 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ViAvlNodeInitializeSessionId @ 0x14015486C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1401AA168 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x1402B07D8 (KeAbCrossThreadDelete.c)
 *     CmpIsBufferGloballyVisible @ 0x14066CA08 (CmpIsBufferGloballyVisible.c)
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x140718958 (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x140720D48 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x1407464A8 (KseDriverUnloadImage.c)
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

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = byte_140467440[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}
