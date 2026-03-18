/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180207480
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WNA@EAAXXZ @ 0x1800F1220 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@WNA@EAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1802074B8 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  __int64 v2; // rcx

  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(this);
  *(_QWORD *)(v2 + 600) = 0LL;
  ReleaseInterface<CD3DSurface>((__int64 *)(v2 + 608));
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
