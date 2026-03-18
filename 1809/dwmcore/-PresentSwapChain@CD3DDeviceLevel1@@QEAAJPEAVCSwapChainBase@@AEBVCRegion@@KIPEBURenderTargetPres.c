/*
 * XREFs of ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPresentParameters@@@Z @ 0x18007CEDC
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CE04 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D0B0 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PresentSwapChain(
        CD3DDeviceLevel1 *this,
        struct CSwapChainBase *a2,
        const struct CRegion *a3,
        unsigned int a4,
        unsigned int a5,
        const struct RenderTargetPresentParameters *a6)
{
  int v6; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_DWORD *)this + 212);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0xC11u);
  }
  else
  {
    if ( g_fForceDeviceLost && rand() >= 32390 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 74))(
        *((_QWORD *)this + 74),
        &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8,
        &v15);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 264LL))(v15, 2289696800LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
    }
    v11 = CSwapChainBase::Present(a2, a3, a5, a4, a6);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC1Fu);
    }
    else if ( (a4 & 1) == 0 )
    {
      *((_QWORD *)this + 127) = *(_QWORD *)(*(_QWORD *)&g_pComposition + 368LL);
      *((_BYTE *)this + 1028) = 0;
    }
  }
  v13 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 1u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v13;
}
