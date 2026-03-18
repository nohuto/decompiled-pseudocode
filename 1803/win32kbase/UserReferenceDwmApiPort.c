/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C004D130
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0013770 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0013CA0 (NtDCompositionSetChildRootVisual.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01436D0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004D190 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  PVOID v1; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v1 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState();
  return v1;
}
