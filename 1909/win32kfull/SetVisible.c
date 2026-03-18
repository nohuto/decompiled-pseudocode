/*
 * XREFs of SetVisible @ 0x1C0027330
 * Callers:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0016B88 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D6698 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E4320 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C0027544 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C00EF728 (ClrFTrueVis.c)
 *     DecVisWindows @ 0x1C00F8FD8 (DecVisWindows.c)
 *     _IsWindowVisible @ 0x1C010B4FC (_IsWindowVisible.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     DecrementCompositedCount @ 0x1C01E91D4 (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01E9400 (IncrementCompositedCount.c)
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
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 22LL, *(_QWORD *)a1);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows(a1);
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
      zzzSetWindowCompositionCloak((__int64)a1, 0LL, 2u);
      *((_DWORD *)a1 + 81) &= ~4u;
    }
    SetOrClrWF(1LL, a1, 3856LL, 1LL);
    SetOrClrWF(((a2 >> 4) & 1) == 0, a1, 2312LL, 1LL);
    IncVisWindows(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
      IncrementCompositedCount(a1);
    if ( (a2 & 4) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
      ComposeWindowIfNeeded(a1);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 17LL, *(_QWORD *)a1);
    return 1;
  }
  return v4;
}
