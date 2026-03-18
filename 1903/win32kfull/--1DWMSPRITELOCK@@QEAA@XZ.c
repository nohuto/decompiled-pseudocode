/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002A608
 * Callers:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00293A4 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C0029BEC (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0029F5C (GreDwmNotifySpriteDPIChange.c)
 *     GreGetSpriteAttributes @ 0x1C003DB44 (GreGetSpriteAttributes.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0044530 (vCleanupUMWindowlessSprite.c)
 *     GreForceClipRgnChange @ 0x1C0044764 (GreForceClipRgnChange.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00451A8 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C0046600 (GreDwmGetSurfaceData.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0048CF0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0081210 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0081318 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00813C8 (GreDwmHasSoftwareCursor.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B588 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BBBC (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026CCF0 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026CE90 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026D5D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026DD6C (GreWindowResizeStarted.c)
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
