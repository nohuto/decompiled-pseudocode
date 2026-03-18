/*
 * XREFs of PopWdiTimerWorkerThread @ 0x1402FFB30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408B0B5C (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408B0C98 (PopDiagTraceSleepStudyStop.c)
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
