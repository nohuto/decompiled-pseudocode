/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C013992C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C013AA38 (SetPointerMetaVisibility.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C013A78C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C013A878 (GreDwmEnableSoftwareCursorRendering.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
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
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 0);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
