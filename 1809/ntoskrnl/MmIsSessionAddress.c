/*
 * XREFs of MmIsSessionAddress @ 0x1400245B0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x140024358 (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400244A0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F5958 (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x14019F9A8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     CmpIsBufferGloballyVisible @ 0x1405E0288 (CmpIsBufferGloballyVisible.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x1406BFBD8 (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x140704864 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409173CC (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x140929C40 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x140937A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140937B30 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = (unsigned __int8)byte_14043CA10[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}
