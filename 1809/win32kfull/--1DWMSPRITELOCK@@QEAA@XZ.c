/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000DCCC (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0074AB4 (GreDwmNotifySpriteDPIChange.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C00754BC (GreZorderSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0075610 (vCleanupUMWindowlessSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreGetSpriteAttributes @ 0x1C0095A58 (GreGetSpriteAttributes.c)
 *     GreDwmGetSurfaceData @ 0x1C00A15B8 (GreDwmGetSurfaceData.c)
 *     GrePtInSprite @ 0x1C00A28B0 (GrePtInSprite.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00BD150 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00BD5EC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00BD6D8 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSprite @ 0x1C012B03C (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025232C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C025360C (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02537E0 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C0253F98 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C025470C (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
