/*
 * XREFs of zzzDecomposeDesktop @ 0x1C000A278
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 * Callees:
 *     MagpDecomposeDesktop @ 0x1C0009D68 (MagpDecomposeDesktop.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C0009EA4 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C000A3E4 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C000A410 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0034050 (GreUpdateSpriteVisRgn.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rsi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) & 1) != 0 )
  {
    MagpDecomposeDesktop(*(_QWORD **)&gMagnContext, (__int64)a1);
    v2 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v2 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(_QWORD *)(gpKernelHandleTable + 24 * v2);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v4, a1) )
        {
          if ( !(unsigned int)IsDesktopWindow(v4) && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(*(struct tagTHREADINFO **)(v4 + 16), 0, 0LL, 0LL, 0LL);
          ComposeWindow((struct tagWND *)v4);
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 52LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
