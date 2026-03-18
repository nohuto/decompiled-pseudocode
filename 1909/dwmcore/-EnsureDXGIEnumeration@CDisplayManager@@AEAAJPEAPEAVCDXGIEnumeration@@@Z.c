/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800279AC (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002CEF8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x18015B1C4 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015DBC0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800265E8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x180027B1C (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(CDisplayManager *this, struct CDXGIEnumeration **a2)
{
  CD3DModuleLoaderInternal *v2; // rcx
  unsigned int v3; // ebx
  CDXGIEnumeration *v5; // rcx
  unsigned int v7; // ecx
  CDisplayManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v2 = qword_180339CF8;
  v3 = 0;
  if ( qword_180339CF8 && !CDXGIEnumeration::IsUpToDate(qword_180339CF8) )
    ReleaseInterface<CD3DSurface>(&qword_180339CF8);
  if ( !qword_180339CF8 )
  {
    LODWORD(v8) = CD3DModuleLoaderInternal::CreateD3DObjects(v2, &qword_180339CF8);
    TranslateDXGIorD3DErrorInContext((unsigned int)v8, 4LL, &v8);
    v3 = (unsigned int)v8;
    if ( (int)v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BE018, 1u, (int)v8, 0xFEu, 0LL);
    if ( qword_180339D08 )
      (*(void (__fastcall **)(__int64, CDXGIEnumeration *))(*(_QWORD *)qword_180339D08 + 32LL))(
        qword_180339D08,
        qword_180339CF8);
  }
  if ( a2 )
  {
    v5 = qword_180339CF8;
    *a2 = qword_180339CF8;
    if ( v5 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))v5)(v5);
  }
  return v3;
}
