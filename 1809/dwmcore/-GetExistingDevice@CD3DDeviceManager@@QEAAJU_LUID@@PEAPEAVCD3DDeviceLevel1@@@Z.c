/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098
 * Callers:
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800065C0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180011600 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18001C23C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18001C788 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18007FC2C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18008AB80 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015F164 (-SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18018E598 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 * Callees:
 *     ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FFA8 (-GetAvailableDevice@CD3DDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_18024C878, 1u, v7, 0x470u);
  }
  else if ( (unsigned int)CD3DDeviceManager::GetAvailableDevice((__int64)this, *(_QWORD *)&a2, a3) != 1 )
  {
    v7 = -2003304307;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
