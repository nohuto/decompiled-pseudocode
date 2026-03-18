/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C
 * Callers:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180023694 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180025BC0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x180026A78 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18002AA44 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18002EFD8 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180048E3C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800491F4 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180062B00 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180062B90 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180063190 (-GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800631E0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x1800632A0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800639D0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800AB1B0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800CB8F0 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800CDFC8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801627A0 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x1801834F8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801944BC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801948EC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x18019A00C (-DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801A8740 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024DA3C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x18024DD70 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180262790 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  char v3; // r9
  int v4; // eax
  bool v6; // zf
  bool v7; // zf
  unsigned int v8; // ecx
  int v9; // eax
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
          v7 = a1 == -2147024890;
          goto LABEL_29;
        }
        break;
      case 10:
        if ( a1 != -2147024890 && a1 != -2147024809 && a1 != -2147023728 && a1 != -2147024895 )
        {
          v7 = a1 == -1071243253;
          goto LABEL_29;
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
          v7 = a1 == -2003304290;
          goto LABEL_29;
        }
        break;
      case 12:
        if ( a1 != -1071243253 && a1 != -2147023728 && a1 != -2147024890 )
        {
          v7 = a1 == -2147024809;
          goto LABEL_29;
        }
        break;
      default:
        if ( a2 <= 14 )
        {
          v6 = a1 == -2003292412;
LABEL_17:
          if ( !v6 )
            return v3;
          goto LABEL_80;
        }
        if ( a2 != 15 )
          return v3;
        if ( a1 == -2147024882 )
        {
          *a3 = -2005532292;
          return 1;
        }
        v8 = a1 + 2005270523;
        if ( v8 > 0x1B )
          return v3;
        v9 = 134217733;
        goto LABEL_38;
    }
LABEL_96:
    *a3 = 0;
    return 1;
  }
  if ( a2 == 8 )
  {
    if ( a1 != -2005530509 && a1 != -2147024809 && a1 != -2005270523 && a1 != -2005270521 && a1 != -2003304442 )
    {
      v7 = a1 == -2003304307;
LABEL_29:
      if ( !v7 )
        return v3;
      goto LABEL_96;
    }
    goto LABEL_96;
  }
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
          goto LABEL_65;
        if ( (unsigned int)(a1 + 2005270523) > 2 && a1 != -2005532292 && a1 != -2147467259 )
        {
          v6 = a1 == -2005270496;
          goto LABEL_17;
        }
LABEL_80:
        *a3 = -2003304307;
        return 1;
      case 4:
        if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 )
          goto LABEL_65;
        v10 = a1 == -2003304445;
        break;
      case 3:
        switch ( a1 )
        {
          case -805306282:
            goto LABEL_65;
          case -805306355:
            goto LABEL_65;
          case -805306367:
            goto LABEL_65;
          case -2147024809:
            goto LABEL_65;
        }
        v11 = (unsigned int)(a1 + 2147024891);
        if ( (unsigned int)v11 <= 0x2D )
        {
          v12 = 0x200004000001LL;
          if ( _bittest64(&v12, v11) )
            goto LABEL_65;
        }
        v10 = a1 == -805306246;
        break;
      case 2:
        v13 = (unsigned int)(a1 + 2005270524);
        if ( (unsigned int)v13 <= 0x21 )
        {
          v14 = 0x240000001LL;
          if ( _bittest64(&v14, v13) )
            goto LABEL_65;
        }
        if ( a1 == 142213127 )
          goto LABEL_65;
        if ( a1 == -2147467259 )
          goto LABEL_80;
        v8 = a1 + 2005270526;
        if ( v8 > 0x1E )
          return v3;
        v9 = 1073741865;
LABEL_38:
        if ( !_bittest(&v9, v8) )
          return v3;
        goto LABEL_80;
      case 5:
        if ( a1 == -2147467263 || a1 == -2147024809 )
        {
          *a3 = -2003304291;
          return 1;
        }
        v6 = a1 == -2147024865;
        goto LABEL_17;
      default:
        if ( (unsigned int)(a2 - 6) > 1 )
          return v3;
        goto LABEL_36;
    }
    if ( v10 )
      goto LABEL_65;
LABEL_36:
    v8 = a1 + 2005270523;
    if ( v8 > 0x1D )
      return v3;
    v9 = 671088645;
    goto LABEL_38;
  }
  if ( (unsigned int)(a1 + 2005270523) <= 0x1B )
  {
    v4 = 134217733;
    if ( _bittest(&v4, a1 + 2005270523) )
      goto LABEL_80;
  }
  if ( a1 == -2003238900 )
    goto LABEL_80;
  if ( a1 == -2005270494 )
  {
LABEL_65:
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
