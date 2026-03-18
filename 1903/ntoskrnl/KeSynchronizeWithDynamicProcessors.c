/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1406D8F8C
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x140853548 (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913B00 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
    }
  }
}
