/*
 * XREFs of GreUnlockDwmState @ 0x1C002AA20
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002E10 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0048604 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C004870C (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C00488E0 (UserReferenceDwmApiPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0097AB0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00AD8C0 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C0166870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0166980 (NtDCompositionSetChildRootVisual.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016E470 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017D1B0 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
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
