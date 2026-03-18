/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A8A7C
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180024F2C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800A89D8 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x18015C8A4 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015F2A0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800A7788 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800A8B48 (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(CDisplayManager *this, struct CDXGIEnumeration **a2)
{
  CD3DModuleLoaderInternal *v2; // rcx
  unsigned int v3; // ebx
  CDXGIEnumeration *v5; // rcx
  __int64 v7; // rcx
  CDisplayManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v2 = qword_18033CC08;
  v3 = 0;
  if ( qword_18033CC08 && !CDXGIEnumeration::IsUpToDate(qword_18033CC08) )
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_18033CC08);
  if ( !qword_18033CC08 )
  {
    LODWORD(v8) = CD3DModuleLoaderInternal::CreateD3DObjects(v2, &qword_18033CC08);
    TranslateDXGIorD3DErrorInContext((int)v8, 4, &v8);
    v3 = (unsigned int)v8;
    if ( (int)v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BFEC8, 1u, (unsigned int)v8, 0xFEu, 0LL);
    if ( qword_18033CC18 )
      (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_18033CC18 + 32LL))(
        qword_18033CC18,
        qword_18033CC08);
  }
  if ( a2 )
  {
    v5 = qword_18033CC08;
    *a2 = qword_18033CC08;
    if ( v5 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))v5)(v5);
  }
  return v3;
}
