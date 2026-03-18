/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18008AAA0 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180098F80 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800991F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801FBDE8 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007FE1C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18009AE88 (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(CSurfaceManager **this, struct CDXGIEnumeration **a2)
{
  unsigned int v4; // esi
  char v5; // bp
  struct CDXGIEnumeration **v6; // rbx
  CDXGIEnumeration *v7; // rcx
  struct CDXGIEnumeration *v8; // rcx
  unsigned int v10; // ecx
  CSurfaceManager *v11; // rcx
  int D3DObjects; // [rsp+50h] [rbp+8h] BYREF
  CDisplayManager *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = (CDisplayManager *)this;
  v4 = 0;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v6 = this + 6;
  v7 = this[6];
  if ( v7 && !CDXGIEnumeration::IsUpToDate(v7) )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)this + 6);
    v5 = 1;
  }
  if ( !*v6 )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v7, this + 6);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18029B8C0, 1u, D3DObjects, 0x128u);
  }
  if ( v5 )
  {
    v11 = this[8];
    if ( v11 )
      CSurfaceManager::ResetTokenThread(v11);
  }
  if ( a2 )
  {
    v8 = *v6;
    *a2 = *v6;
    if ( v8 )
      (**(void (__fastcall ***)(struct CDXGIEnumeration *))v8)(v8);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v4;
}
