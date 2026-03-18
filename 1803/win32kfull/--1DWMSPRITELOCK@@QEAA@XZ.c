/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0079DCC
 * Callers:
 *     GreGetSprite @ 0x1C00068A0 (GreGetSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C000A900 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C000AB40 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C000AC14 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreZorderSprite @ 0x1C0077AAC (GreZorderSprite.c)
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0078020 (vCleanupUMWindowlessSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00781A4 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C007D4E8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C40E8 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00C4F48 (GreUpdateSpriteClipRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00C6598 (GreDwmGetSurfaceData.c)
 *     GreGetSpriteAttributes @ 0x1C00FD218 (GreGetSpriteAttributes.c)
 *     GreForceClipRgnChange @ 0x1C010781C (GreForceClipRgnChange.c)
 *     GrePtInSprite @ 0x1C01363EC (GrePtInSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B23C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C023C400 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C023C580 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C023CBA4 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C023D070 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C023D234 (GreWindowResizeStarted.c)
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
