/*
 * XREFs of GreLockDwmState @ 0x1C004D1D0
 * Callers:
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0011B2C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00120C4 (CheckOrAcquireDwmStateLock.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0013770 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0013CA0 (NtDCompositionSetChildRootVisual.c)
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00DC084 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01436D0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
