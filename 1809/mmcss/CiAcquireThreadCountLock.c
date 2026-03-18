/*
 * XREFs of CiAcquireThreadCountLock @ 0x1C000C76C
 * Callers:
 *     CiNdisCleanupThrottle @ 0x1C000C7D0 (CiNdisCleanupThrottle.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *CiAcquireThreadCountLock()
{
  struct _LIST_ENTRY *result; // rax

  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  result = (struct _LIST_ENTRY *)KeGetCurrentThread();
  WPP_MAIN_CB.Queue.ListEntry.Blink = result;
  return result;
}
