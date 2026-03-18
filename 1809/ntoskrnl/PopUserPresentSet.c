/*
 * XREFs of PopUserPresentSet @ 0x1401777D8
 * Callers:
 *     PopSetSystemState @ 0x140177794 (PopSetSystemState.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     PopResetIdleTime @ 0x140138B80 (PopResetIdleTime.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rdi
  __int32 v2; // esi

  v1 = (void *)a1;
  if ( (PopSimulate & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
  if ( byte_140417701 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_140418114, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&PopUserPresentSetStatus, 0);
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      }
    }
    else
    {
      if ( (PopFullWake & 3) == 0 )
      {
        _InterlockedOr(&PopFullWake, 2u);
        PopSetNotificationWork(1u);
      }
      PopResetIdleTime(2u);
      if ( !v2 )
      {
        PopUserPresentWorkItem.Parameter = v1;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        PopUserPresentWorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      }
    }
  }
}
