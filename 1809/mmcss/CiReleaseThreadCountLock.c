/*
 * XREFs of CiReleaseThreadCountLock @ 0x1C000C7A0
 * Callers:
 *     CiNdisCleanupThrottle @ 0x1C000C7D0 (CiNdisCleanupThrottle.c)
 * Callees:
 *     <none>
 */

__int64 CiReleaseThreadCountLock()
{
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
}
