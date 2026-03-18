/*
 * XREFs of ?GetBounds@CVisualTree@@QEAAXPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE398
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D080 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EF4B0 (-GetBoundsInternal@CHwndBitmap@@AEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015FF60 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBounds@CRedirectedVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9CB0 (-GetBounds@CRedirectedVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@M.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CVisualTree::GetBounds(struct CVisualTree *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // xmm1_8
  __int64 v7; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 88LL) & 0x7F) != 0 && (v4 = CVisualTree::PreCompute(a1, 0LL), v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x6Bu);
    *(_OWORD *)a2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v6 = qword_1803075E0;
  }
  else
  {
    v7 = *((_QWORD *)a1 + 3);
    *(_OWORD *)a2 = *(_OWORD *)(v7 + 140);
    v6 = *(_QWORD *)(v7 + 156);
  }
  *(_QWORD *)(a2 + 16) = v6;
}
