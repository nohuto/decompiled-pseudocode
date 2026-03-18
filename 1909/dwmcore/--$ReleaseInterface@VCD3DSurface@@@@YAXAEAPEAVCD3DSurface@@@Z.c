/*
 * XREFs of ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70
 * Callers:
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x1800138A4 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18002BEA0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x18002BF20 (-ReleaseResourcesForDisplayChange@CHwSurfaceRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x180049D60 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004A588 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180078EA4 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800AE51C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800D93D0 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3960 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180158F34 (-CheckInUse@CDisplayManager@@AEAAXXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x180161E70 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x180161F8C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180165470 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x1801834F8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180199050 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801A5144 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 *     ?DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ @ 0x1801A54B4 (-DetachDesktopVisualTree@CVirtualMonitorCaptureRenderTarget@@QEAAXXZ.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BC5D4 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801C1B44 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180205584 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021CE7C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x18023F1A8 (--1CHolographicManager@@EEAA@XZ.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x180245B1C (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180247180 (--1CHolographicClient@@MEAA@XZ.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18025307C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802533B8 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x180259D1C (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180259F28 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CD3DSurface>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
