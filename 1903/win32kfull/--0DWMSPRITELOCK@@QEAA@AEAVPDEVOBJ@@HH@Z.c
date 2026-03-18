/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C002A650
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
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0048CF0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0081210 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0081318 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00813C8 (GreDwmHasSoftwareCursor.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B588 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BBBC (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026CCF0 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C026D5D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026DD6C (GreWindowResizeStarted.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax

  *(_DWORD *)this = 0;
  v4 = a4;
  if ( !(_DWORD)a3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v8 = *ThreadWin32Thread) == 0
      || v4 == 1
      || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
