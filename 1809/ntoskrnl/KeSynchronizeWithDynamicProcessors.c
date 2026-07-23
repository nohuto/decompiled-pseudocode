/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1406B6060
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x14081A4E0 (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1408D74D0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
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
