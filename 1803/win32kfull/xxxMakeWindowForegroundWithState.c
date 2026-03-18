/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C005AD04
 * Callers:
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0138810 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01D27FC (xxxbFullscreenSwitch.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 DesktopWindow; // rdi
  ULONG_PTR v10; // rsi
  unsigned __int8 v12; // r12
  __int64 v13; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+28h] [rbp-59h]
  __int128 v27; // [rsp+28h] [rbp-59h]
  __int128 v28; // [rsp+28h] [rbp-59h]
  _QWORD v29[3]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v30[24]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v34[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)&v27 = &gspwndShouldBeForeground;
      *((_QWORD *)&v27 + 1) = a1;
      v31 = v27;
      HMAssignmentLock(&v31);
    }
    SetOrClrWF(0LL, a1, 1799LL, 1LL);
    SetOrClrWF(1LL, a1, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 && (!gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != a1) )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1796LL, 1LL);
    }
  }
  if ( ghSwitcher )
  {
    gfRedoFullScreenSwitch = 1;
    return v5;
  }
  ghSwitcher = PsGetCurrentThreadId();
  v8 = gptiCurrent;
  v29[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v29;
  v29[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    gfRedoFullScreenSwitch = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v29);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v8 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    }
    v10 = gspwndFullScreen;
    if ( DesktopWindow == gspwndFullScreen )
      break;
    v12 = *(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 7;
    ThreadLockExchange(DesktopWindow, v29);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
    v34[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v34;
    v34[1] = v10;
    if ( v10 )
      _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
    *(_QWORD *)&v26 = &gspwndFullScreen;
    *((_QWORD *)&v26 + 1) = DesktopWindow;
    v32 = v26;
    HMAssignmentLock(&v32);
    gbFullScreen = v12;
    if ( (v10 || gbRemoteSession) && gbFullScreen == 2 && v12 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
      ThreadUnlock1(v19, v18, v20);
    }
    else
    {
      if ( v10 )
      {
        v16 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 23LL) & 7) == 1 )
          {
            SetOrClrWF(0LL, v10, 1799LL, 1LL);
            SetOrClrWF(1LL, v10, 1796LL, 1LL);
          }
          xxxSendMessage(v10);
          v21 = *(_QWORD *)(v10 + 16);
          if ( v21 != gptiCurrent )
          {
            LockW32Thread(v21, v30);
            v21 = *(_QWORD *)(v10 + 16);
            v2 = 1;
          }
          xxxCapture(v21, 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(v30);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2((struct tagWND *)v10, 1LL);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL, 1LL);
            *((_QWORD *)&v28 + 1) = v10;
            *(_QWORD *)&v28 = &gspwndFullScreen;
            v33 = v28;
            HMAssignmentLock(&v33);
            ThreadUnlock1(v24, v23, v25);
            v5 = 0;
            break;
          }
          v16 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4960LL);
          gfGdiEnabled = 0;
        }
      }
      ThreadUnlock1(v16, v15, v17);
      v8 = (unsigned int)v12 - 1;
      if ( v12 == 1 )
      {
        v22 = *(_QWORD *)(DesktopWindow + 16);
        if ( v22 != gptiCurrent )
        {
          LockW32Thread(v22, v30);
          v22 = *(_QWORD *)(DesktopWindow + 16);
          v2 = 1;
        }
        xxxCapture(v22, DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock(v30);
        xxxSendMessage(DesktopWindow);
LABEL_51:
        v2 = 0;
        continue;
      }
      if ( v12 != 2 )
        goto LABEL_51;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      gpcurLogCurrent = 0LL;
      SetPointer(0LL);
      *(struct tagPOINT *)gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL, 1LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow, 0LL, 0LL, 645);
    }
  }
  while ( gfRedoFullScreenSwitch );
  ThreadUnlock1(v8, v6, v7);
  ghSwitcher = 0LL;
  return v5;
}
