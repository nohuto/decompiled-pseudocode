/*
 * XREFs of zzzDecomposeDesktop @ 0x1C015E4AC
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C013ED60 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C015E624 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C015E784 (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C015EC84 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rbx
  char v14; // r14
  int v15; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    v3 = a2 != 0 ? 0x10 : 0;
    MagpDecomposeDesktop(*(_QWORD *)&gMagnContext, a1);
    v5 = 0LL;
    do
    {
      v6 = 32LL * (unsigned int)v5;
      if ( *(_BYTE *)(v6 + gSharedInfo[1] + 24) == 1 )
      {
        v13 = *(_QWORD *)(gpKernelHandleTable + 24 * v5);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v13, a1) )
        {
          v14 = v3 + 2;
          LOBYTE(v15) = IsDesktopWindow(v13);
          if ( v15 )
          {
            v14 |= 4u;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 1) != 0 )
          {
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v13 + 16),
              *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL),
              0x10u,
              v13,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v13, v14);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL), v6, v4);
    zzzEnableDwmPointerSupport(0, 0LL, v7, v8);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v9, v10, v11);
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
