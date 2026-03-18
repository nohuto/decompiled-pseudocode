/*
 * XREFs of GreTextInitialized @ 0x1C0166B18
 * Callers:
 *     xxxInitWindowStation @ 0x1C0080104 (xxxInitWindowStation.c)
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSetNCFonts @ 0x1C013D3B0 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C013E248 (ValidateExternalLogFont.c)
 *     CreateBitmapStrip @ 0x1C013F960 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C0142DC8 (GetCharDimensions.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC5F4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     CreateScaledFont @ 0x1C01CC8E0 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0211494 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread();
}
