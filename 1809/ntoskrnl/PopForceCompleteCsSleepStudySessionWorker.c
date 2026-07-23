/*
 * XREFs of PopForceCompleteCsSleepStudySessionWorker @ 0x140875F10
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopDiagStopCsSleepStudySession @ 0x1408717DC (PopDiagStopCsSleepStudySession.c)
 */

__int64 PopForceCompleteCsSleepStudySessionWorker()
{
  char v0; // si
  int v1; // edi
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
  v0 = PopSleepStudySessionInfo;
  v1 = dword_1404176C4;
  v2 = dword_1404176C8;
  PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
  PopDiagStopCsSleepStudySession(v0, v1, v2);
  return (unsigned int)_InterlockedExchange(&PopForceSleepStudyWorkItemQueued, 0);
}
