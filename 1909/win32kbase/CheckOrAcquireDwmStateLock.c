/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C003F774
 * Callers:
 *     OpenDwmHandle @ 0x1C003F610 (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01A04E0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A93C8 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BDB48 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C002CA20 (GreLockDwmState.c)
 *     UserIsUserCritSecIn @ 0x1C003FDC0 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003FED0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
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
