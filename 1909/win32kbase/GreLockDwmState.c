/*
 * XREFs of GreLockDwmState @ 0x1C002CA20
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C003EB68 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C003F774 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C003FE60 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C006747C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006767C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A0760 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01A0870 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
