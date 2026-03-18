/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1408FA32C
 * Callers:
 *     KiSynchCounterSetCallback @ 0x14087E650 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087E770 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4520) |= 0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
