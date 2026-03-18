/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C00B0710
 * Callers:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0158EF0 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01F7184 (xxxbFullscreenSwitch.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rdi
  ULONG_PTR v9; // rsi
  unsigned __int8 v11; // r12
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // [rsp+28h] [rbp-59h]
  __int128 v24; // [rsp+28h] [rbp-59h]
  __int128 v25; // [rsp+28h] [rbp-59h]
  _QWORD v26[3]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+68h] [rbp-19h] BYREF
  __int128 v29; // [rsp+78h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v31[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)&v24 = &gspwndShouldBeForeground;
      *((_QWORD *)&v24 + 1) = a1;
      v28 = v24;
      HMAssignmentLock(&v28);
    }
    SetOrClrWF(0, a1, 0x707u, 1);
    SetOrClrWF(1, a1, a2 & 7 | 0x700, 1);
    if ( a2 == 1 && (!gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != a1) )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x704u, 1);
    }
  }
  if ( ghSwitcher )
  {
    gfRedoFullScreenSwitch = 1;
    return v5;
  }
  ghSwitcher = PsGetCurrentThreadId();
  v7 = gptiCurrent;
  v26[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v26;
  v26[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    gfRedoFullScreenSwitch = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v26);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v7 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    }
    v9 = gspwndFullScreen;
    if ( DesktopWindow == gspwndFullScreen )
      break;
    v11 = *(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 7;
    ThreadLockExchange(DesktopWindow, v26);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v31[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v31;
    v31[1] = v9;
    if ( v9 )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    *(_QWORD *)&v23 = &gspwndFullScreen;
    *((_QWORD *)&v23 + 1) = DesktopWindow;
    v29 = v23;
    HMAssignmentLock(&v29);
    gbFullScreen = v11;
    if ( (v9 || gbRemoteSession) && gbFullScreen == 2 && v11 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v17, v16);
    }
    else
    {
      if ( v9 )
      {
        v15 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 23LL) & 7) == 1 )
          {
            SetOrClrWF(0, v9, 0x707u, 1);
            SetOrClrWF(1, v9, 0x704u, 1);
          }
          xxxSendMessage(v9);
          v18 = *(_QWORD *)(v9 + 16);
          if ( v18 != gptiCurrent )
          {
            LockW32Thread(v18, v27);
            v18 = *(_QWORD *)(v9 + 16);
            v2 = 1;
          }
          xxxCapture(v18, 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock((__int64)v27, v14);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2((struct tagWND *)v9);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            *((_QWORD *)&v25 + 1) = v9;
            *(_QWORD *)&v25 = &gspwndFullScreen;
            v30 = v25;
            HMAssignmentLock(&v30);
            ThreadUnlock1(v22, v21);
            v5 = 0;
            break;
          }
          v15 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4960LL);
          gfGdiEnabled = 0;
        }
      }
      ThreadUnlock1(v15, v14);
      v7 = (unsigned int)v11 - 1;
      if ( v11 == 1 )
      {
        v19 = *(_QWORD *)(DesktopWindow + 16);
        if ( v19 != gptiCurrent )
        {
          LockW32Thread(v19, v27);
          v19 = *(_QWORD *)(DesktopWindow + 16);
          v2 = 1;
        }
        xxxCapture(v19, DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock((__int64)v27, v20);
        xxxSendMessage(DesktopWindow);
LABEL_51:
        v2 = 0;
        continue;
      }
      if ( v11 != 2 )
        goto LABEL_51;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      SetPointer(0LL);
      *(struct tagPOINT *)gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos(gptCursorFullScreen.x, gptCursorFullScreen.y, 2, 0);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( gfRedoFullScreenSwitch );
  ThreadUnlock1(v7, v6);
  ghSwitcher = 0LL;
  return v5;
}
