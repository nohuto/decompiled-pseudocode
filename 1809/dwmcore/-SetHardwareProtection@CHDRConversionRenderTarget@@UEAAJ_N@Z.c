/*
 * XREFs of ?SetHardwareProtection@CHDRConversionRenderTarget@@UEAAJ_N@Z @ 0x180209FC0
 * Callers:
 *     ?SetHardwareProtection@CHDRConversionRenderTarget@@WNA@EAAJ_N@Z @ 0x1800F1240 (-SetHardwareProtection@CHDRConversionRenderTarget@@WNA@EAAJ_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180072BAC (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180208670 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetHardwareProtection(CHDRConversionRenderTarget *this, char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 74);
  v4 = CHwFullScreenRenderTarget::SetHardwareProtection(this, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x33Du);
  return v6;
}
