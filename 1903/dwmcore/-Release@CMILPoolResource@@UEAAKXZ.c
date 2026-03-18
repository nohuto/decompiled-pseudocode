/*
 * XREFs of ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00
 * Callers:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180015074 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180016F4C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18002306C (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x180024774 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180024F2C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180034A9C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180035AB0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800376A8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18003903C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18003F0F0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004EEE0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180052E84 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800A8B9C (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B277C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800B36A4 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800B42E4 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800B58E0 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1800B7140 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Release@CD3DResource@@UEAAKXZ @ 0x1800C7BF0 (-Release@CD3DResource@@UEAAKXZ.c)
 *     ?Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800CEE74 (-Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManage.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800DD8CC (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDeviceLevel1@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800EBF00 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDeviceLevel1@@AEBU_LUID@@PEA.c)
 *     ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800EC00C (-NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F0B0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F380 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180162E60 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     ??1?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016C028 (--1-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??I?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18016C0D4 (--I-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCD3DDeviceLevel1@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016E244 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18017BB24 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017C888 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801956C0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18019B4B4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A5394 (-SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A57DC (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801AD5C0 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D0340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x18021D94C (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023F2C8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x18023F4B0 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023FAA4 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x1802500E4 (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CLocalAppRenderTarget@@UEAAXXZ @ 0x180250830 (-ReleaseResourcesForDisplayChange@CLocalAppRenderTarget@@UEAAXXZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18025D740 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180262D68 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263D44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180264508 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180264774 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648F8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILPoolResource::Release(CMILPoolResource *this)
{
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, CMILPoolResource *); // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, CMILPoolResource *))*((_QWORD *)this + 2);
    if ( v4 )
      (**v4)(v4, this);
    else
      (*(void (__fastcall **)(CMILPoolResource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  }
  return v2;
}
