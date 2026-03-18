/*
 * XREFs of ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x1802044CC
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x180203B70 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::ShouldConvertPresentToMPO(CDWMSwapChain *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 145) == 2 )
    return *((_BYTE *)this + 575) == 0;
  return v1;
}
