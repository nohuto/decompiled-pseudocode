/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C00304E4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00724D0 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E7EC8 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C000D590 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01AE400 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall xxxNotifyMonitorChanged(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int16 ScaledLogPixels; // bx

  result = IsTopLevelWindow((__int64)a1);
  if ( (_DWORD)result )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2 )
    {
      SetDeferredDpiStateForWindowAndChildren(a1, 0LL);
      v10 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 448) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 448)
                                        + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v13 = *((_QWORD *)a1 + 5);
            v14 = *(_DWORD *)(v13 + 288);
            if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v13 + 284)),
                    (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
              {
                xxxSendGDIScaledDpiChangedMsgs(a1, a3);
              }
            }
          }
        }
      }
    }
    else
    {
      xxxSendDpiChangedMsgs(a1, a2, a3, a4);
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 12) )
    {
      result = PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 24LL, *(_QWORD *)a1);
    }
    else
    {
      result = IsTrayWindow(a1);
      if ( (_DWORD)result )
      {
        PostShellHookMessages(16LL, *(_QWORD *)a1);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 20LL, *(_QWORD *)a1);
        result = xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
      }
    }
  }
  if ( a3 )
    return FreeHwndList(a3);
  return result;
}
