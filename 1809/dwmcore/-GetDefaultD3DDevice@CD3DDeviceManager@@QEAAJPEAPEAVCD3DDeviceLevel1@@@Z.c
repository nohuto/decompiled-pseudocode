/*
 * XREFs of ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800C56C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800C721C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801E3DE0 (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180201848 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::GetDefaultD3DDevice(CD3DDeviceManager *this, struct CD3DDeviceLevel1 **a2)
{
  int D3DDevice; // eax
  __int64 v5; // rcx
  struct CDXGIEnumeration *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CDXGIEnumeration *v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  D3DDevice = CDisplayManager::EnsureDXGIEnumeration((CSurfaceManager **)&g_DisplayManager, &v10);
  v6 = v10;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v9 = 498;
  }
  else
  {
    if ( !*((_DWORD *)v10 + 22) )
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BC238, 1u, -2003304307, 0x1FEu);
      goto LABEL_8;
    }
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, *(struct _LUID *)(**((_QWORD **)v10 + 8) + 336LL), a2);
    v7 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_8;
    v9 = 506;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BC238, 1u, D3DDevice, v9);
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v6 + 8LL))(v6);
  return v7;
}
