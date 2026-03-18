/*
 * XREFs of ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18016306C
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18006C6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1801625C0 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::ShouldConvertPresentToMPO(CDWMSwapChain *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 147) == 2 )
    return *((_BYTE *)this + 583) == 0;
  return v1;
}
