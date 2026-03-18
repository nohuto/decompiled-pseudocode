/*
 * XREFs of PopWdiTimerWorkerThread @ 0x1402E2D10
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1400BF9F0 (KeReleaseMutant.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408741A0 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408742D8 (PopDiagTraceSleepStudyStop.c)
 */

LONG PopWdiTimerWorkerThread()
{
  KeWaitForSingleObject(&PopWdiTimerMutex, Executive, 0, 0, 0LL);
  PopDiagTraceSleepStudyStop();
  if ( PopWdiNewScenarioWaiting )
  {
    PopDiagTraceSleepStudyStart();
    PopWdiNewScenarioWaiting = 0;
  }
  PopWdiTimerQueued = 0;
  return KeReleaseMutant(&PopWdiTimerMutex, 1, 0, 0);
}
