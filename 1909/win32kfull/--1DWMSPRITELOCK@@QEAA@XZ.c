/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0030A78
 * Callers:
 *     GreGetSprite @ 0x1C0009468 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C002FB44 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C003005C (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00303CC (GreDwmNotifySpriteDPIChange.c)
 *     GreGetSpriteAttributes @ 0x1C0081D44 (GreGetSpriteAttributes.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0088F00 (vCleanupUMWindowlessSprite.c)
 *     GreForceClipRgnChange @ 0x1C0089134 (GreForceClipRgnChange.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0089B78 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GrePtInSprite @ 0x1C008AE24 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C008AFD0 (GreDwmGetSurfaceData.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C008D7B0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreDwmHasSoftwareCursor @ 0x1C013A78C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C013A878 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C013A930 (DwmDestroyDeviceSpecificResources.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026AE58 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B48C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026C5C0 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026C760 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026CEA8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026D63C (GreWindowResizeStarted.c)
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
