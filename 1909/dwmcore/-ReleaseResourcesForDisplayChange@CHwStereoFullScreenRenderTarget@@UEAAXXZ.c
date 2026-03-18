/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180165470
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WJA@EAAXXZ @ 0x1800F0690 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801654A8 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  __int64 v2; // rcx

  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(this);
  *(_QWORD *)(v2 + 536) = 0LL;
  ReleaseInterface<CD3DSurface>((__int64 *)(v2 + 544));
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
