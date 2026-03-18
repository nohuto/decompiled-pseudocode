/*
 * XREFs of GreTextInitialized @ 0x1C0165578
 * Callers:
 *     xxxInitWindowStation @ 0x1C00E04A8 (xxxInitWindowStation.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E59CC (ValidateExternalLogFont.c)
 *     CreateBitmapStrip @ 0x1C00E5B90 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C0142018 (GetCharDimensions.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC784 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E7DBC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread();
}
