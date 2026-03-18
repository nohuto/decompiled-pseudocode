/*
 * XREFs of PopWdiTimerWorkerThread @ 0x1402FF5E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408B03BC (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408B04F8 (PopDiagTraceSleepStudyStop.c)
 */

void PopWdiTimerWorkerThread()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopWdiTimerLock);
  PopDiagTraceSleepStudyStop();
  if ( PopWdiNewScenarioWaiting )
  {
    PopDiagTraceSleepStudyStart();
    PopWdiNewScenarioWaiting = 0;
  }
  PopWdiTimerQueued = 0;
  PopReleaseRwLock((ULONG_PTR)&PopWdiTimerLock);
}
