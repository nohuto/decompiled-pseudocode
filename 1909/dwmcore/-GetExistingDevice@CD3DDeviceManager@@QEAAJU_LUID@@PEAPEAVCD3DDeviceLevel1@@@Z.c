/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94
 * Callers:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180013A24 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800276C0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800CF0D4 (-Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManage.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x180199BF4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A3AD4 (-SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CE698 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801CE8E4 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801CFDD8 (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D0544 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FBFA0 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801FC0D0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180057724 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        struct _LUID a2,
        struct CD3DDeviceLevel1 **a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // edi
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *((_BYTE *)this + 212) != 0 ? 0x8898008D : 0;
  if ( *((_BYTE *)this + 212) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180280CA0, 1u, v7, 0x467u, 0LL);
  }
  else if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CD3DDeviceManager::GetAvailableDevice)(
                            this,
                            a2,
                            a3) != 1 )
  {
    v7 = -2003304307;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
