/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C003EC20
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A2A10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01A2B20 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0014270 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00142B0 (GreUnlockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003EC90 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
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
