/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C0040360
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003FF58 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0040444 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00404F0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48));
  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion();
  }
  return result;
}
