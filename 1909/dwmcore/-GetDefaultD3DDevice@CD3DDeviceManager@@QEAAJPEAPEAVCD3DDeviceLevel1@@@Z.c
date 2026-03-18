/*
 * XREFs of ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015DBC0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180043AAC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800456A8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A3F1C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x18021C23C (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024EB68 (-EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::GetDefaultD3DDevice(CD3DDeviceManager *this, struct CD3DDeviceLevel1 **a2)
{
  signed int D3DDevice; // eax
  __int64 v5; // rcx
  struct CDXGIEnumeration *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CDXGIEnumeration *v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  D3DDevice = CDisplayManager::EnsureDXGIEnumeration(this, &v10);
  v6 = v10;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v9 = 491;
  }
  else
  {
    if ( !*((_DWORD *)v10 + 22) )
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E1E90, 1u, 0x8898008D, 0x1F7u, 0LL);
      goto LABEL_8;
    }
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, *(struct _LUID *)(**((_QWORD **)v10 + 8) + 336LL), a2);
    v7 = D3DDevice;
    if ( D3DDevice >= 0 )
      goto LABEL_8;
    v9 = 499;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E1E90, 1u, D3DDevice, v9, 0LL);
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v6 + 8LL))(v6);
  return v7;
}
