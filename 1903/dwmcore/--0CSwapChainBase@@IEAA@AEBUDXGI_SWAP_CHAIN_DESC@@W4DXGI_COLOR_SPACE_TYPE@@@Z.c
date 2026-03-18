/*
 * XREFs of ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800E37A4
 * Callers:
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800DCC10 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1800E3674 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI.c)
 * Callees:
 *     <none>
 */

CSwapChainBase *__fastcall CSwapChainBase::CSwapChainBase(
        CSwapChainBase *this,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  CSwapChainBase *result; // rax

  *(_QWORD *)this = &CMILPoolResource::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 34) = 0;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 120) = *a2;
  *((_DWORD *)this + 48) = a3;
  *((_QWORD *)this + 25) = (char *)this + 208;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 34) = (char *)this + 280;
  *((_DWORD *)this + 70) = 0;
  result = this;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  return result;
}
