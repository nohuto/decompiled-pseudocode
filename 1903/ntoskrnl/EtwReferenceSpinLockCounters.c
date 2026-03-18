/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1408FA94C
 * Callers:
 *     KiSynchCounterSetCallback @ 0x14087EF50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14087F070 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E7148 (EtwpUpdateGlobalGroupMasks.c)
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
