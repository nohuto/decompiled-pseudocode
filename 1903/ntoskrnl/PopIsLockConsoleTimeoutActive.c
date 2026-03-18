/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1408B60DC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1406A3C58 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406EEAE4 (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl

  PopAcquireAdaptiveLock(0);
  v0 = byte_140438816;
  PopReleaseAdaptiveLock();
  return v0;
}
