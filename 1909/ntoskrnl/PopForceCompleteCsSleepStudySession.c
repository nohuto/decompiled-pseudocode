/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x14015E298
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopPreCriticalBatteryNotify @ 0x1408B1630 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(int a1)
{
  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    PopSleepstudyStopReason = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
    PopSleepStudySessionInfo = 0;
    dword_140441F04 = 29;
    dword_140441F08 = 46;
    PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
    if ( !_InterlockedCompareExchange(&PopForceSleepStudyWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopForceCompleteCsSleepStudySessionWorkItem, DelayedWorkQueue);
  }
}
