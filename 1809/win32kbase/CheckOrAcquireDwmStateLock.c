/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C0048854
 * Callers:
 *     OpenDwmHandle @ 0x1C004870C (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00AD8C0 (NtDCompositionSendDwmLpcMessage.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016E470 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017D1B0 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C002A9E0 (GreLockDwmState.c)
 *     UserIsUserCritSecIn @ 0x1C0048890 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0048970 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}
