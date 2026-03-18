/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C00BD2C0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C00BD124 (SetPointerMetaVisibility.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00BD5EC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00BD6D8 (GreDwmEnableSoftwareCursorRendering.c)
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
      gbForceSoftwareCursor = 0;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      gbForceSoftwareCursor = gSoftwareCursorCount > 0;
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
