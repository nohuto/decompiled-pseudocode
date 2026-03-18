/*
 * XREFs of PopForceCompleteCsSleepStudySessionWorker @ 0x1408B12A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408ACAB4 (PopDiagStopCsSleepStudySession.c)
 */

__int64 PopForceCompleteCsSleepStudySessionWorker()
{
  char v0; // si
  int v1; // edi
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
  v0 = PopSleepStudySessionInfo;
  v1 = dword_140441F04;
  v2 = dword_140441F08;
  PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
  PopDiagStopCsSleepStudySession(v0, v1, v2);
  return (unsigned int)_InterlockedExchange(&PopForceSleepStudyWorkItemQueued, 0);
}
