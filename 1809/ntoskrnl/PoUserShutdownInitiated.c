/*
 * XREFs of PoUserShutdownInitiated @ 0x1406DE500
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56D0 (KeInitializeDpc.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 *     PpmBeginHighPerfRequest @ 0x1401785A0 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopTransitionCheckpoint @ 0x1406DE600 (PopTransitionCheckpoint.c)
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
    if ( qword_14043FF68 )
    {
      PopAcquirePolicyLock();
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock();
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140418344 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140418344 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock();
        v1 = ((__int64 (*)(void))qword_14043FF68)();
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
