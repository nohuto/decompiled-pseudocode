/*
 * XREFs of GreLockDisplayDevice @ 0x1C00420B0
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0041CE8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0043C20 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0043E44 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00442A0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
}
