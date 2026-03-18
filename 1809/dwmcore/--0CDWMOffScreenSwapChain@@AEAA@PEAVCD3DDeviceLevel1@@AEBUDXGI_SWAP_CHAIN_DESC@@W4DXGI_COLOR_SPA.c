/*
 * XREFs of ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800E8698
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800E8258 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18007D300 (--0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(
        CDWMOffScreenSwapChain *this,
        struct CD3DDeviceLevel1 *a2,
        const struct DXGI_SWAP_CHAIN_DESC *a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ID3D11Texture2D *a5,
        void *a6)
{
  __int64 v7; // r10

  CSwapChainBase::CSwapChainBase(this, a3, a4);
  *((_QWORD *)this + 54) = v7;
  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 55) = a6;
  *((_QWORD *)this + 53) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))a5->lpVtbl->AddRef)(a5);
  return this;
}
