/*
 * XREFs of ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N5@Z @ 0x1800E3FA4
 * Callers:
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1800E3E58 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801635E8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 * Callees:
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x180028048 (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
 *     ??0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800E40D4 (--0CSwapChainBase@@IEAA@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::CDWMSwapChain(
        CDWMSwapChain *this,
        struct IDXGISwapChainDWM1 *a2,
        struct IDXGIOutput *a3,
        const struct DXGI_SWAP_CHAIN_DESC *a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        struct _LUID a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  __int64 v11; // r10
  __int64 v12; // rsi
  _BYTE v14[88]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h]

  CSwapChainBase::CSwapChainBase(this, a4, a5);
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 112) = a7;
  *((_BYTE *)this + 578) = a8;
  *((_BYTE *)this + 583) = a9;
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_BYTE *)this + 518) = 0;
  *((_QWORD *)this + 53) = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>((_QWORD *)this + 54, (__int64)a3);
  v12 = *((_QWORD *)this + 54);
  if ( v12 )
  {
    memset_0(v14, 0, 0x60uLL);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 56LL))(v12, v14);
    *((_QWORD *)this + 57) = v15;
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 54))(
      *((_QWORD *)this + 54),
      &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
      (char *)this + 440);
  }
  *((_DWORD *)this + 186) = -1;
  return this;
}
