/*
 * XREFs of PopSleepStudyTaskClientTimerWorker @ 0x1408B1DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
 */

LONG PopSleepStudyTaskClientTimerWorker()
{
  KeWaitForSingleObject(&PopSleepStudySessionLock, Executive, 0, 0, 0LL);
  if ( PopSleepStudyTaskClientReferenceTaken )
  {
    PdcTaskClientRequest(PopSleepStudyTaskClientActivator, 0LL);
    PopSleepStudyTaskClientReferenceTaken = 0;
  }
  return KeReleaseMutex(&PopSleepStudySessionLock, 0);
}
