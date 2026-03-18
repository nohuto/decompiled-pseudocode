/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x1401424F0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopPreCriticalBatteryNotify @ 0x140875060 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(int a1)
{
  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    PopSleepstudyStopReason = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
    PopSleepStudySessionInfo = 0;
    dword_1404166B4 = 29;
    dword_1404166B8 = 46;
    PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
    if ( !_InterlockedCompareExchange(&PopForceSleepStudyWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopForceCompleteCsSleepStudySessionWorkItem, DelayedWorkQueue);
  }
}
