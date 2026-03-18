/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408B59AC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = byte_140438796;
  PopReleaseAdaptiveLock();
  return v0;
}
