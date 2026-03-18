/*
 * XREFs of ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18015EE08
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180163760 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::D2DPresentDWM(
        CD2DContext *this,
        struct IDXGISwapChainDWM1 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagRECT *a6,
        unsigned int a7,
        const struct DXGI_SCROLL_RECT *a8,
        struct IDXGIResource *a9,
        unsigned int a10)
{
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v15; // [rsp+88h] [rbp+20h] BYREF

  if ( (a4 & 1) != 0 )
    v11 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, _QWORD, const struct tagRECT *, unsigned int, const struct DXGI_SCROLL_RECT *, struct IDXGIResource *, unsigned int))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10);
  else
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *))(**((_QWORD **)this + 30) + 104LL))(
            *((_QWORD *)this + 30),
            a2);
  v12 = v11;
  if ( v11 == 142213121 )
  {
    v13 = *(_QWORD *)a2;
    v15 = 0;
    if ( (*(int (__fastcall **)(struct IDXGISwapChainDWM1 *, int *))(v13 + 240))(a2, &v15) >= 0 )
    {
      if ( v15 )
        RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  return v12;
}
