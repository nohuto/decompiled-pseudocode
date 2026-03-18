/*
 * XREFs of PopUserPresentSet @ 0x1401819F8
 * Callers:
 *     PopSetSystemState @ 0x1401819B4 (PopSetSystemState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x1400F0C44 (PopSetNotificationWork.c)
 *     PopResetIdleTime @ 0x14013B3A0 (PopResetIdleTime.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rdi
  __int32 v2; // esi

  v1 = (void *)a1;
  if ( (PopSimulate & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
  if ( byte_140442FC1 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_140443A34, 0, 0) )
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
      PopResetIdleTime();
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
