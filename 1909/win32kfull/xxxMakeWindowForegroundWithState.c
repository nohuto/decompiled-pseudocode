/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C001B8F4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PowerOnGdi @ 0x1C01616D0 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C020D218 (xxxbFullscreenSwitch.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
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
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+38h] [rbp-79h] BYREF
  __int64 v33; // [rsp+40h] [rbp-71h]
  __int64 v34; // [rsp+48h] [rbp-69h]
  _QWORD v35[3]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v36; // [rsp+68h] [rbp-49h] BYREF
  ULONG_PTR v37; // [rsp+70h] [rbp-41h]
  __int64 v38; // [rsp+78h] [rbp-39h]
  __int128 v39; // [rsp+88h] [rbp-29h]
  __int128 v40; // [rsp+98h] [rbp-19h]
  __int128 v41; // [rsp+A8h] [rbp-9h]
  __int128 v42; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v43; // [rsp+C8h] [rbp+17h] BYREF
  __int128 v44; // [rsp+D8h] [rbp+27h] BYREF

  v32 = 0LL;
  v3 = a1;
  v33 = 0LL;
  v34 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(a1, 4, 12, 12, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(a1, v4, 12, 13, (__int64)&WPP_9f4ddfabac473dda6a0d1195e4e12578_Traceguids, v3, v32, v33, v34);
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
      *(_QWORD *)&v39 = &gspwndShouldBeForeground;
      *((_QWORD *)&v39 + 1) = v3;
      v42 = v39;
      HMAssignmentLock(&v42);
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
  v32 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v32;
  v33 = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Flink) = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, &v32);
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
    v36 = 0LL;
    v16 = v15 & 7;
    v37 = 0LL;
    v38 = 0LL;
    ThreadLockExchange(DesktopWindow, &v32);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v36 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
    v37 = v12;
    if ( v12 )
      HMLockObject(v12);
    *(_QWORD *)&v40 = &gspwndFullScreen;
    *((_QWORD *)&v40 + 1) = DesktopWindow;
    v43 = v40;
    HMAssignmentLock(&v43);
    gbFullScreen = v16;
    if ( (v12 || gbRemoteSession) && gbFullScreen == 2 && v16 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v22, v21, v23);
    }
    else
    {
      memset(v35, 0, sizeof(v35));
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
            LockW32Thread(v24, v35);
            v24 = *(_QWORD *)(v12 + 16);
            v6 = 1;
          }
          xxxCapture(v24, 0LL, 5LL);
          if ( v6 )
          {
            PopAndFreeW32ThreadLock(v35);
            v6 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2((struct tagWND *)v12);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            *((_QWORD *)&v41 + 1) = v12;
            *(_QWORD *)&v41 = &gspwndFullScreen;
            v44 = v41;
            HMAssignmentLock(&v44);
            ThreadUnlock1(v27, v26, v28);
            ThreadUnlock1(v30, v29, v31);
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
        v25 = *(_QWORD *)(DesktopWindow + 16);
        if ( v25 != gptiCurrent )
        {
          LockW32Thread(v25, v35);
          v25 = *(_QWORD *)(DesktopWindow + 16);
          v6 = 1;
        }
        xxxCapture(v25, DesktopWindow, 5LL);
        if ( v6 )
          PopAndFreeW32ThreadLock(v35);
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
      zzzLockWindowUpdate2(0LL);
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
