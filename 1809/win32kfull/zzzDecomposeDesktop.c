/*
 * XREFs of zzzDecomposeDesktop @ 0x1C00CC674
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     MagpDecomposeDesktop @ 0x1C00C9764 (MagpDecomposeDesktop.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00C9C24 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00CC540 (GreTransferDwmStateToSpriteState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00CC7EC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00CC818 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rbx
  char v7; // r14
  int v8; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    v3 = a2 != 0 ? 0x10 : 0;
    MagpDecomposeDesktop(*(_QWORD **)&gMagnContext, (__int64)a1);
    v4 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v4 + gSharedInfo[1] + 24) == 1 )
      {
        v6 = *(_QWORD *)(gpKernelHandleTable + 24 * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v6, a1) )
        {
          v7 = v3 + 2;
          LOBYTE(v8) = IsDesktopWindow(v6);
          if ( v8 )
          {
            v7 |= 4u;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 1) != 0 )
          {
            PostEventMessageEx(*(struct tagTHREADINFO **)(v6 + 16), 0, 0LL, 0LL, 0LL);
          }
          ComposeWindow((struct tagWND *)v6, v7);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL), ***((_QWORD ***)a1 + 1));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
