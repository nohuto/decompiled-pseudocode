/*
 * XREFs of zzzDecomposeDesktop @ 0x1C015F5CC
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0011034 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0065BF0 (GreUpdateSpriteVisRgn.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C015F744 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C015F8A4 (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C015FDA4 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // rbx
  char v9; // r14
  int v10; // eax

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
        v8 = *(_QWORD *)(gpKernelHandleTable + 24 * v5);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v8, a1) )
        {
          v9 = v3 + 2;
          LOBYTE(v10) = IsDesktopWindow(v8);
          if ( v10 )
          {
            v9 |= 4u;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 31LL) & 1) != 0 )
          {
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v8 + 16),
              *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL),
              0x10u,
              v8,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v8, v9);
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL), v6, v4);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
