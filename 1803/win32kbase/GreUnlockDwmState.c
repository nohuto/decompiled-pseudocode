/*
 * XREFs of GreUnlockDwmState @ 0x1C004D210
 * Callers:
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0011B2C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0013770 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0013CA0 (NtDCompositionSetChildRootVisual.c)
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00DC084 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0143430 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01436D0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion();
  }
  return result;
}
