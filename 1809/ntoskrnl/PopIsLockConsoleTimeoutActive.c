/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x140878F18
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = byte_14040FDB6;
  PopReleaseAdaptiveLock();
  return v0;
}
