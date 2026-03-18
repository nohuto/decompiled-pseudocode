/*
 * XREFs of ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180169E20
 * Callers:
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@WJA@EAAJ_N@Z @ 0x1800ECA00 (-SetHardwareProtection@CHDRConversionRenderTarget@@WJA@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18003DFF0 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180167DC0 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetHardwareProtection(CHDRConversionRenderTarget *this, char a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 66);
  v4 = CHwFullScreenRenderTarget::SetHardwareProtection(this, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x33Bu, 0LL);
  return v6;
}
