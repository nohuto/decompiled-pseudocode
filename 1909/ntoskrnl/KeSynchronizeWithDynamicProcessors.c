/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1406D8BFC
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x140852C48 (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913560 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
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
