/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C000A9EC
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C000A69C (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 * Callees:
 *     GreDwmHasSoftwareCursor @ 0x1C000AB40 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C000AC14 (GreDwmEnableSoftwareCursorRendering.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi

  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      SetPointer(0LL);
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 4960LL), *(unsigned int *)(gpsi + 4964LL), 2LL);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return zzzEndDeferWinEventNotify();
}
