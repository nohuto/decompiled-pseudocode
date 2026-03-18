/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C001B1CC
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0160710 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C020D4C8 (xxxbFullscreenSwitch.c)
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // edx
  int v6; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 DesktopWindow; // rdi
  ULONG_PTR v12; // rsi
  int v13; // ecx
  char v15; // r12
  unsigned __int8 v16; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // [rsp+38h] [rbp-79h] BYREF
  __int64 v34; // [rsp+40h] [rbp-71h]
  __int64 v35; // [rsp+48h] [rbp-69h]
  _QWORD v36[3]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v37; // [rsp+68h] [rbp-49h] BYREF
  ULONG_PTR v38; // [rsp+70h] [rbp-41h]
  __int64 v39; // [rsp+78h] [rbp-39h]
  __int128 v40; // [rsp+88h] [rbp-29h]
  __int128 v41; // [rsp+98h] [rbp-19h]
  __int128 v42; // [rsp+A8h] [rbp-9h]
  __int128 v43; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v44; // [rsp+C8h] [rbp+17h] BYREF
  __int128 v45; // [rsp+D8h] [rbp+27h] BYREF

  v33 = 0LL;
  v3 = a1;
  v34 = 0LL;
  v35 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(a1, 4, 12, 12, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(a1, v4, 12, 13, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids, v3, v33, v34, v35);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_D(a1, v5, 12, 14, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids, a2);
      }
    }
  }
  v6 = 0;
  v7 = 1;
  if ( v3 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)&v40 = &gspwndShouldBeForeground;
      *((_QWORD *)&v40 + 1) = v3;
      v43 = v40;
      HMAssignmentLock(&v43);
    }
    SetOrClrWF(0LL, v3, 1799LL, 1LL);
    SetOrClrWF(1LL, v3, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 )
    {
      LODWORD(a1) = gpqForeground;
      if ( !gpqForeground || *(_QWORD *)(gpqForeground + 128LL) != v3 )
      {
        SetOrClrWF(0LL, v3, 1799LL, 1LL);
        SetOrClrWF(1LL, v3, 1796LL, 1LL);
      }
    }
  }
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1, 4, 12, 15, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
    return v7;
  }
  WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)PsGetCurrentThreadId();
  v10 = gptiCurrent;
  v33 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v33;
  v34 = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, &v33);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v10 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    }
    v12 = gspwndFullScreen;
    if ( DesktopWindow == gspwndFullScreen )
      break;
    v15 = *(_BYTE *)(*(_QWORD *)(DesktopWindow + 40) + 23LL);
    v37 = 0LL;
    v16 = v15 & 7;
    v38 = 0LL;
    v39 = 0LL;
    ThreadLockExchange(DesktopWindow, &v33);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v37 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v37;
    v38 = v12;
    if ( v12 )
      HMLockObject(v12);
    *(_QWORD *)&v41 = &gspwndFullScreen;
    *((_QWORD *)&v41 + 1) = DesktopWindow;
    v44 = v41;
    HMAssignmentLock(&v44);
    gbFullScreen = v16;
    if ( (v12 || gbRemoteSession) && gbFullScreen == 2 && v16 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v22, v21, v23);
    }
    else
    {
      memset(v36, 0, sizeof(v36));
      if ( v12 )
      {
        v19 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 23LL) & 7) == 1 )
          {
            SetOrClrWF(0LL, v12, 1799LL, 1LL);
            SetOrClrWF(1LL, v12, 1796LL, 1LL);
          }
          xxxSendMessage(v12, 58LL, 0LL, 0LL);
          v24 = *(_QWORD *)(v12 + 16);
          if ( v24 != gptiCurrent )
          {
            LockW32Thread(v24, v36);
            v24 = *(_QWORD *)(v12 + 16);
            v6 = 1;
          }
          xxxCapture(v24, 0LL, 5LL);
          if ( v6 )
          {
            PopAndFreeW32ThreadLock(v36);
            v6 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2((struct tagWND *)v12, 1u, v20);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL, 1u, v20);
            *((_QWORD *)&v42 + 1) = v12;
            *(_QWORD *)&v42 = &gspwndFullScreen;
            v45 = v42;
            HMAssignmentLock(&v45);
            ThreadUnlock1(v28, v27, v29);
            ThreadUnlock1(v31, v30, v32);
            v7 = 0;
            goto LABEL_16;
          }
          gfGdiEnabled = 0;
          v19 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4960LL);
        }
      }
      ThreadUnlock1(v19, v18, v20);
      v10 = (unsigned int)v16 - 1;
      if ( v16 == 1 )
      {
        v26 = *(_QWORD *)(DesktopWindow + 16);
        if ( v26 != gptiCurrent )
        {
          LockW32Thread(v26, v36);
          v26 = *(_QWORD *)(DesktopWindow + 16);
          v6 = 1;
        }
        xxxCapture(v26, DesktopWindow, 5LL);
        if ( v6 )
          PopAndFreeW32ThreadLock(v36);
        xxxSendMessage(DesktopWindow, 58LL, 1LL, 0LL);
LABEL_58:
        v6 = 0;
        continue;
      }
      if ( v16 != 2 )
        goto LABEL_58;
      SafeEnableMDEV(2LL);
      v6 = 0;
      gfGdiEnabled = 1;
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      SetPointer(0LL);
      gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL, 0LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL, 1u, v25);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) );
  ThreadUnlock1(v10, v8, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 4, 12, 16, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
LABEL_16:
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  return v7;
}
