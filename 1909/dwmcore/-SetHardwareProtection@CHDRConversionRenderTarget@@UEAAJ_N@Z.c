/*
 * XREFs of ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180168730
 * Callers:
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@WJA@EAAJ_N@Z @ 0x1800F06C0 (-SetHardwareProtection@CHDRConversionRenderTarget@@WJA@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x18002AC5C (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801666D0 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
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
