/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C0033700
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnPublish()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnPublish", ghsemVisRgnPublish);
  if ( ghsemVisRgnPublish )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemVisRgnPublish);
    return PsLeavePriorityRegion();
  }
  return result;
}
