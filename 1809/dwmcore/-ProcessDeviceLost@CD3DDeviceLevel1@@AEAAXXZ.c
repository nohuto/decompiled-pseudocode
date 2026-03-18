/*
 * XREFs of ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPresentParameters@@@Z @ 0x18007CEDC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPres.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x18007CFF0 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801FBDE8 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801FD088 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800E8FD0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800E90C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800E95E0 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessDeviceLost(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 212) == -2003304307
    && !*((_BYTE *)this + 1024)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&g_pComposition + 536LL) + 112LL))(*(_QWORD *)(*(_QWORD *)&g_pComposition + 536LL)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 126);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    v2 = *((_QWORD *)this + 64);
    *((_BYTE *)this + 1024) = 1;
    if ( v2 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 8LL))(v2, (char *)this + 496);
    CD2DContext::DestroyDeviceResources(this);
    CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 864));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 80) + 888LL))(*((_QWORD *)this + 80));
    CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)this + 496));
  }
}
