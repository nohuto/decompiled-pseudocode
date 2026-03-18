/*
 * XREFs of DxgkEngReleaseStableVisRgn @ 0x1C0274990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DxgkEngReleaseStableVisRgn()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return UserLeaveUserCritSec();
}
