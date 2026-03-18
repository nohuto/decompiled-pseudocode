/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C00C7C8C
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0084ADC (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00ECFB0 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E7E28 (xxxForceWindowToDpiForTest.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0117658 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

void __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r9
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)a1);
  v12 = *((_QWORD *)a1 + 5);
  v13 = v8;
  if ( (*(_DWORD *)(v12 + 288) & 0xF) == 2 && v8 )
  {
    SetDeferredDpiStateForWindowAndChildren(a1, 0, 0);
    v12 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v12 + 288) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v17,
                                                      v18,
                                                      v19)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v20 & 0xF) == 0 && (v20 & 0x40000000) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
            {
              if ( !a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v21 + 284)),
                    (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
              {
                xxxSendGDIScaledDpiChangedMsgs(a1, a3);
              }
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
  if ( v13 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x18u, *(_QWORD *)a1);
    }
    else if ( (unsigned int)IsTrayWindow(a1) )
    {
      PostShellHookMessages(0x10uLL, *(_QWORD *)a1);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x14u, *(_QWORD *)a1);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
