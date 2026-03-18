/*
 * XREFs of ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180012220 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180015AA0 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x180090804 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800A2F10 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AA748 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800E9C1C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E9E18 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180168DF8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180178BB8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1801803BC (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x1802004C0 (-CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180206DC0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 *     ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180208088 (-ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRe.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x18020DE10 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180227B7C (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18022B860 (-EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::BeginIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v3; // eax
  char *v4; // rdx
  FastRegion::Internal::CRgnData *v5; // rcx
  __int64 v6; // rdx

  *(_QWORD *)a2 = this;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v4 = (char *)this + 12;
    *((_QWORD *)a2 + 2) = (char *)this + 12;
    *((_QWORD *)a2 + 1) = (char *)this + 8 * v3 + 4;
    v5 = (FastRegion::Internal::CRgnData *)((char *)this + *((int *)this + 4) + 12);
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 3) = v5;
    v6 = (__int64)&v4[*((int *)v4 + 3) - (_QWORD)v5 + 8] >> 3;
    *((_DWORD *)a2 + 9) = v6;
    if ( (int)v6 <= 0 )
      FastRegion::Internal::CRgnData::StepIterator(v5, a2);
  }
  else
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
