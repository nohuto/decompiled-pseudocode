/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180166B60
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WJA@EAAXXZ @ 0x1800EC9D0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WJA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x180166B98 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
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
