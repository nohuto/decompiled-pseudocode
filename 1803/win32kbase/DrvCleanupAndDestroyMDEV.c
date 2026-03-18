/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1C00D3734
 * Callers:
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     DrvDestroyMDEV @ 0x1C006D1EC (DrvDestroyMDEV.c)
 *     MultiUserCleanupDCs @ 0x1C00C418C (MultiUserCleanupDCs.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx

  MultiUserCleanupDCs();
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  DrvDestroyMDEV(a1, v2, v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v4);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v5);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v7);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v8);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v10);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v12);
  }
  return result;
}
