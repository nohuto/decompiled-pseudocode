/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C006F8AC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0078020 (NtUserUpdateLayeredWindow.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0104E20 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01D31F4 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00724BC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00B3BD8 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01D14FC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall xxxNotifyMonitorChanged(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)a1);
  v10 = *((_QWORD *)a1 + 5);
  v11 = v8;
  if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1);
    v10 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) != 0 )
  {
    result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
    if ( result )
    {
      result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
      if ( *(_QWORD *)(result + 456) )
      {
        result = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14)
                                                           + 456)
                                               + 8LL)
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
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v15 + 284)),
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
  if ( v11 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 12) )
    {
      result = PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 24LL, *(_QWORD *)a1);
    }
    else
    {
      result = IsTrayWindow(a1);
      if ( (_DWORD)result )
      {
        PostShellHookMessages(16LL, *(_QWORD *)a1);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 20LL, *(_QWORD *)a1);
        result = xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
      }
    }
  }
  if ( a3 )
    return FreeHwndList(a3);
  return result;
}
