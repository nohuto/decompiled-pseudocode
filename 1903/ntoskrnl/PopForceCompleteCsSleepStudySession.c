/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x14015DBF8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopPreCriticalBatteryNotify @ 0x1408B1DD0 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(int a1)
{
  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    PopSleepstudyStopReason = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
    PopSleepStudySessionInfo = 0;
    dword_140441F84 = 29;
    dword_140441F88 = 46;
    PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
    if ( !_InterlockedCompareExchange(&PopForceSleepStudyWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopForceCompleteCsSleepStudySessionWorkItem, DelayedWorkQueue);
  }
}
