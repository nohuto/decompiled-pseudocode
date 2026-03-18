/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMOffScreenSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800DD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMOffScreenSwapChain *this,
        char a2,
        enum DXGI_HDR_METADATA_TYPE a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( a2 && a5 != 1 )
  {
    v5 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980085, 0x39Eu, 0LL);
  }
  return v5;
}
