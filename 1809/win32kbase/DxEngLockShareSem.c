/*
 * XREFs of DxEngLockShareSem @ 0x1C00FD640
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00FD510 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DxEngLockShareSem(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, a3);
  return 1LL;
}
