/*
 * XREFs of PoUserShutdownInitiated @ 0x140725AC0
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     PpmBeginHighPerfRequest @ 0x140181EC8 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopTransitionCheckpoint @ 0x140725C1C (PopTransitionCheckpoint.c)
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
    if ( qword_14046BD78 )
    {
      PopAcquirePolicyLock();
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock();
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140443D04 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140443D04 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock();
        v1 = ((__int64 (*)(void))qword_14046BD78)();
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
