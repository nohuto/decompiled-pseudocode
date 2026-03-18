/*
 * XREFs of PopSleepStudyTaskClientTimerWorker @ 0x140875080
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PdcTaskClientRequest @ 0x14089A708 (PdcTaskClientRequest.c)
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
