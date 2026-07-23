/*
 * XREFs of PoUserShutdownInitiated @ 0x1406DF780
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 *     PpmBeginHighPerfRequest @ 0x1401786C0 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  char v1; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopTransitionCheckpoint(7LL, 0LL);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_140441028 )
    {
      PopAcquirePolicyLock();
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock();
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_14041948C )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_14041948C = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock();
        v1 = ((__int64 (*)(void))qword_140441028)();
        result = KiSetTimerEx(
                   (__int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v1 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
