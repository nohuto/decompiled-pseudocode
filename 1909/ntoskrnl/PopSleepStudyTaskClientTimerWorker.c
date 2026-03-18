/*
 * XREFs of PopSleepStudyTaskClientTimerWorker @ 0x1408B1650
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     PdcTaskClientRequest @ 0x1408D8B74 (PdcTaskClientRequest.c)
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
