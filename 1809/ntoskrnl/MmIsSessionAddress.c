/*
 * XREFs of MmIsSessionAddress @ 0x1400245B0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x140024358 (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400244A0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F58B8 (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x14019F848 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     CmpIsBufferGloballyVisible @ 0x1405DF288 (CmpIsBufferGloballyVisible.c)
 *     KseDriverLoadImage @ 0x14067DF60 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x1406BE958 (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x1407035E4 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140703774 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x14070F05C (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140726B8C (MmEnumerateSystemImages.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409163CC (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140926400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x140928C40 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x140936A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140936B30 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = (unsigned __int8)byte_14043B950[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}
