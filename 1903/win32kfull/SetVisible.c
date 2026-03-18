/*
 * XREFs of SetVisible @ 0x1C002CDA0
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C01023E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01415E0 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D680C (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E44A0 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     CalcWindowFullScreen @ 0x1C002C8AC (CalcWindowFullScreen.c)
 *     DecVisWindows @ 0x1C002CB50 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002CC3C (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     ClrFTrueVis @ 0x1C0114A74 (ClrFTrueVis.c)
 *     _IsWindowVisible @ 0x1C0130C0C (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01E9354 (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E9580 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, unsigned int a2)
{
  unsigned int v4; // edi
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // eax

  v4 = 0;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
      return v4;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0LL, a1, 3856LL, 1LL);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1LL, a1, 2312LL, 1LL);
    }
    else
    {
      SetOrClrWF(0LL, a1, 2312LL, 1LL);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x16u, *(_QWORD *)a1);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows((__int64)a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_QWORD *)a1 + 5);
      v8 = *(_DWORD *)(v7 + 232);
      if ( (v8 & 0x8000) != 0 )
      {
        *(_DWORD *)(v7 + 232) = v8 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
  {
    if ( (*((_DWORD *)a1 + 81) & 4) != 0 )
    {
      zzzSetWindowCompositionCloak(a1, 0LL, 2LL);
      *((_DWORD *)a1 + 81) &= ~4u;
    }
    SetOrClrWF(1LL, a1, 3856LL, 1LL);
    SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
    IncVisWindows((__int64)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      IncrementCompositedCount(a1);
    if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
      ComposeWindowIfNeeded(a1);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x11u, *(_QWORD *)a1);
    return 1;
  }
  return v4;
}
