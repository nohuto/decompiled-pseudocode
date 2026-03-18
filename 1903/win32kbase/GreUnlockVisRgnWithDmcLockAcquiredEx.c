/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C0131190
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, a3);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v4);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v3);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
