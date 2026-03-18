/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1C00B7324
 * Callers:
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     DrvDestroyMDEV @ 0x1C0048854 (DrvDestroyMDEV.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     MultiUserCleanupDCs @ 0x1C00B74B8 (MultiUserCleanupDCs.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx

  MultiUserCleanupDCs();
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  DrvDestroyMDEV(a1, v2, v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, v4);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v5);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v7);
  }
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v8);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v10);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v12);
  }
  return result;
}
