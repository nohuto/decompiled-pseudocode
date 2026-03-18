/*
 * XREFs of McTemplateU0qq @ 0x18015E0B4
 * Callers:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18002082C (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18002AA44 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18003F3E4 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18003F780 (-DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRec.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180058E20 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180059E04 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180065430 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18006A9F8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18006ADC0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180071034 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180074698 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18009B920 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18009BB10 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@@Z @ 0x1800D1560 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015D86C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015DE50 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18015F000 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?DrawShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18015FAA0 (-DrawShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180160090 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801605C0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180164E10 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180199DD0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802382EC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180239740 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 * Callees:
 *     McGenEventWrite @ 0x1800B6720 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qq(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  int *v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  int *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v7 = 4;
  v8 = 0;
  v9 = &v13;
  v10 = 4;
  v11 = 0;
  return McGenEventWrite(a1, a2, 4LL, 3u, &v5);
}
