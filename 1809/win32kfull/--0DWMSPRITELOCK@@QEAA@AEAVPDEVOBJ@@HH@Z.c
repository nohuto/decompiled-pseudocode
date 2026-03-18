/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0075EE0
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000DCCC (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0074AB4 (GreDwmNotifySpriteDPIChange.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C00754BC (GreZorderSprite.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0075610 (vCleanupUMWindowlessSprite.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreGetSpriteAttributes @ 0x1C0095A58 (GreGetSpriteAttributes.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C00BD150 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00BD5EC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00BD6D8 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSprite @ 0x1C012B03C (GreGetSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025232C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C025360C (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C0253F98 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C025470C (GreWindowResizeStarted.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)IsThreadCrossSessionAttached(this, a2)
      || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
      || (v8 = *ThreadWin32Thread) == 0
      || a4 == 1
      || !*(_DWORD *)(v8 + 104) && !*(_DWORD *)(v8 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
