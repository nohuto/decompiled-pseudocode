/*
 * XREFs of ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x1800BCBD0 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x18015C8A4 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18015E084 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800240B0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180024280 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180024C5C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessDeviceLost(CD3DDeviceLevel1 *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 220) == -2003304307
    && !*((_BYTE *)this + 1160)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 104LL))(*((_QWORD *)g_pComposition
                                                                                                + 69)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 126);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    v3 = *((_QWORD *)this + 64);
    *((_BYTE *)this + 1160) = 1;
    if ( v3 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 8LL))(v3, (char *)this + 496);
    CD2DContext::DestroyDeviceResources((CD2DTarget **)this, v2);
    CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 56);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 80) + 888LL))(*((_QWORD *)this + 80));
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 496));
  }
}
