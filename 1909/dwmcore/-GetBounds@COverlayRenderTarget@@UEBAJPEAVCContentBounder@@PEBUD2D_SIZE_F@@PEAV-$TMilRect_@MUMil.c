/*
 * XREFs of ?GetBounds@COverlayRenderTarget@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A3190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A31B0 (-GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 */

__int64 __fastcall COverlayRenderTarget::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  COverlayRenderTargetEngine::GetBounds(*(_QWORD *)(a1 + 64), a3, a4);
  return 0LL;
}
