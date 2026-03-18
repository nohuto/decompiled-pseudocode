/*
 * XREFs of ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801FE310
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180203EDC (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::D2DPresentMultiplaneOverlay(
        CD2DContext *this,
        struct IDXGISwapChainDWM1 *a2,
        __int64 a3,
        unsigned int a4,
        enum DXGI_HDR_METADATA_TYPE a5,
        const void *a6,
        unsigned int a7,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a8)
{
  if ( (a4 & 1) != 0 )
    return (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, _QWORD, const void *, unsigned int, const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(*(_QWORD *)a2 + 184LL))(
             a2,
             (unsigned int)a3,
             a4,
             (unsigned int)a5,
             a6,
             a7,
             a8);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, __int64, _QWORD, enum DXGI_HDR_METADATA_TYPE, const void *, const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *, unsigned int))(**((_QWORD **)this + 30) + 112LL))(
             *((_QWORD *)this + 30),
             a2,
             a3,
             a4,
             a5,
             a6,
             a8,
             a7);
}
