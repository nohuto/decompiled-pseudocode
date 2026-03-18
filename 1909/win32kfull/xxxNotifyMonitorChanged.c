/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C006935C
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0014B38 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00CBB90 (xxxEnableChildWindowDpiMessageX.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C012E644 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E7CA8 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00F1618 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E5F9C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall xxxNotifyMonitorChanged(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r14d
  __int64 result; // rax
  __int64 v12; // r9
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)a1);
  v9 = *((_QWORD *)a1 + 5);
  v10 = v8;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1, 0, 0);
    v9 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) != 0 )
  {
    result = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( result )
    {
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(_QWORD *)(result + 448) )
      {
        result = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL)
                                 + 64LL);
        if ( (result & 1) != 0 )
        {
          result = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (result & 0xF) == 0 && (result & 0x40000000) != 0 )
          {
            result = IsTopLevelWindow((__int64)a1);
            if ( (_DWORD)result )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v12 + 284)),
                    result = GreGetScaledLogPixels(a4),
                    (_WORD)result != ScaledLogPixels) )
              {
                result = xxxSendGDIScaledDpiChangedMsgs(a1, a3);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    result = xxxSendDpiChangedMsgs(a1, a2, a3, a4);
  }
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      result = PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 24LL, *(_QWORD *)a1);
    }
    else
    {
      result = IsTrayWindow(a1);
      if ( (_DWORD)result )
      {
        PostShellHookMessages(0x10uLL, *(_QWORD *)a1);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 20LL, *(_QWORD *)a1);
        result = xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
      }
    }
  }
  if ( a3 )
    return FreeHwndList(a3);
  return result;
}
