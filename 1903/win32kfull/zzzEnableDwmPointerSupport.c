/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C0081918
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C00811E4 (SetPointerMetaVisibility.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0081318 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00813C8 (GreDwmHasSoftwareCursor.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzEnableDwmPointerSupport(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  int HasSoftwareCursor; // eax
  __int64 v7; // rcx
  int v8; // edi

  v5 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  GreLockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  if ( !v5 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      SetPointer(0LL);
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v7, (struct PDEVOBJ *)a1);
    if ( v8 )
    {
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !v5 )
        zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 0);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return zzzEndDeferWinEventNotify();
}
