/*
 * XREFs of GreLockDisplayDevice @ 0x1C003F4E0
 * Callers:
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E690 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C003EA08 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003EBF8 (DrvNotifyModeChangeStartStop.c)
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48), 11LL);
}
