/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C007FCC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnPublish(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnPublish", (__int64)ghsemVisRgnPublish, a3);
  if ( ghsemVisRgnPublish )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemVisRgnPublish);
    return PsLeavePriorityRegion(v4);
  }
  return result;
}
