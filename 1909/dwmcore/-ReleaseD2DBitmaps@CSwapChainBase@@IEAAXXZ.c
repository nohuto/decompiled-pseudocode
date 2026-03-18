/*
 * XREFs of ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x180162D94
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x180162F70 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CSwapChainBase::ReleaseD2DBitmaps(CSwapChainBase *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 102); i = (unsigned int)(i + 1) )
    ReleaseInterface<ID2D1Geometry>((__int64 *)(*(_QWORD *)(*((_QWORD *)this + 48) + 8 * i) + 216LL));
}
