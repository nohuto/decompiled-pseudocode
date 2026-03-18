/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18005AFF0 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18005F7F0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180063F80 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x18006FB20 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800802F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180091000 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009327C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093504 (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800988B0 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DDC4 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800A07F0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800C92F0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D7BC0 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800D89C4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C7A0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CBA0 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015CF6C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x180163444 (-DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180169BEC (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180203D50 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180228E00 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  char v3; // r9
  int v4; // eax
  bool v6; // zf
  unsigned int v7; // ecx
  int v8; // eax
  bool v9; // zf
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx

  v3 = 0;
  if ( a2 > 8 )
  {
    switch ( a2 )
    {
      case 11:
        if ( a1 != -1071243253 && a1 != -2147023728 )
        {
          v9 = a1 == -2147024890;
          goto LABEL_39;
        }
        break;
      case 10:
        if ( a1 != -2147024890 && a1 != -2147024809 && a1 != -2147023728 && a1 != -2147024895 )
        {
          v9 = a1 == -1071243253;
          goto LABEL_39;
        }
        break;
      case 9:
        if ( a1 != -2003292404
          && a1 != -2003304307
          && a1 != -2003304442
          && a1 != -2005530509
          && a1 != -2147024809
          && a1 != -2005270523
          && a1 != -2005270521
          && a1 != -2005532292
          && a1 != -2005530512
          && a1 != -1071243253 )
        {
          v9 = a1 == -2003304290;
          goto LABEL_39;
        }
        break;
      case 12:
        if ( a1 != -1071243253 && a1 != -2147023728 && a1 != -2147024890 )
        {
          v9 = a1 == -2147024809;
          goto LABEL_39;
        }
        break;
      default:
        if ( a2 > 14 )
        {
          if ( a2 != 15 )
            return v3;
          if ( a1 == -2147024882 )
          {
            *a3 = -2005532292;
            return 1;
          }
          v7 = a1 + 2005270523;
          if ( v7 > 0x1B )
            return v3;
          v8 = 134217733;
          goto LABEL_33;
        }
        v6 = a1 == -2003292412;
        goto LABEL_17;
    }
LABEL_40:
    *a3 = 0;
    return 1;
  }
  if ( a2 == 8 )
  {
    if ( a1 != -2005530509 && a1 != -2147024809 && a1 != -2005270523 && a1 != -2005270521 && a1 != -2003304442 )
    {
      v9 = a1 == -2003304307;
LABEL_39:
      if ( !v9 )
        return v3;
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
          goto LABEL_66;
        if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2147467259 )
          goto LABEL_18;
        v6 = a1 == -2005270496;
        goto LABEL_17;
      case 4:
        if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
          goto LABEL_66;
        v10 = a1 == -2003304445;
        break;
      case 3:
        switch ( a1 )
        {
          case -805306282:
            goto LABEL_66;
          case -805306355:
            goto LABEL_66;
          case -805306367:
            goto LABEL_66;
          case -2147024809:
            goto LABEL_66;
        }
        v11 = (unsigned int)(a1 + 2147024891);
        if ( (unsigned int)v11 <= 0x2D )
        {
          v12 = 0x200004000001LL;
          if ( _bittest64(&v12, v11) )
            goto LABEL_66;
        }
        v10 = a1 == -805306246;
        break;
      case 2:
        v13 = (unsigned int)(a1 + 2005270524);
        if ( (unsigned int)v13 <= 0x21 )
        {
          v14 = 0x240000001LL;
          if ( _bittest64(&v14, v13) )
            goto LABEL_66;
        }
        if ( a1 == 142213127 )
          goto LABEL_66;
        if ( a1 == -2147467259 )
          goto LABEL_18;
        v7 = a1 + 2005270526;
        if ( v7 > 0x1E )
          return v3;
        v8 = 1073741865;
        goto LABEL_33;
      case 5:
        if ( a1 == -2147467263 || a1 == -2147024809 )
        {
          *a3 = -2003304291;
          return 1;
        }
        v6 = a1 == -2147024865;
LABEL_17:
        if ( !v6 )
          return v3;
        goto LABEL_18;
      default:
        if ( (unsigned int)(a2 - 6) > 1 )
          return v3;
LABEL_31:
        v7 = a1 + 2005270523;
        if ( v7 > 0x1D )
          return v3;
        v8 = 671088645;
LABEL_33:
        if ( !_bittest(&v8, v7) )
          return v3;
        goto LABEL_18;
    }
    if ( v10 )
      goto LABEL_66;
    goto LABEL_31;
  }
  if ( (unsigned int)(a1 + 2005270523) <= 0x1B && (v4 = 134217733, _bittest(&v4, a1 + 2005270523)) || a1 == -2003238900 )
  {
LABEL_18:
    *a3 = -2003304307;
    return 1;
  }
  if ( a1 == -2005270494 )
  {
LABEL_66:
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
