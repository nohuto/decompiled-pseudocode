/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C005C770
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00061C0 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C00077F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C010FD90 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01A1BA0 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     SetHungFlag @ 0x1C0058F94 (SetHungFlag.c)
 *     xxxCancelTracking @ 0x1C00597BC (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     SetNewForegroundQueue @ 0x1C005A780 (SetNewForegroundQueue.c)
 *     xxxUpdateTray @ 0x1C005AAD0 (xxxUpdateTray.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C005AC88 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     ClearKeyboardToggleStates @ 0x1C005DA48 (ClearKeyboardToggleStates.c)
 *     xxxSendNCActivateMessage @ 0x1C005E010 (xxxSendNCActivateMessage.c)
 *     xxxApplyGlobalInputSettings @ 0x1C005EF88 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00749EC (IsWindowUnderActiveLockScreen.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00F0034 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0100970 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01AC63C (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(struct tagWND *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  struct tagTHREADINFO *v11; // rcx
  struct tagWND *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  LARGE_INTEGER *v23; // rdi
  BOOL v24; // r12d
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v26; // rdi
  HANDLE ThreadId; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rdi
  DWORD v34; // r12d
  unsigned int v35; // eax
  LARGE_INTEGER v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  LARGE_INTEGER *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // ebx
  char v44; // r15
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  char v49; // bl
  const struct tagWND *v50; // rax
  const struct tagWND *v51; // rdi
  int v52; // eax
  __int64 v53; // rcx
  struct tagWND *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct tagWND *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62[2]; // [rsp+20h] [rbp-E0h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  struct tagQMSG *v64; // [rsp+88h] [rbp-78h]
  DWORD v65; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER *v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  _QWORD v70[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v71[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v72[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v73[72]; // [rsp+108h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v67 = gptiCurrent;
  SetSystemInputSource(&v65);
  if ( a1
    && (*((_QWORD *)a1 + 3) != grpdeskRitInput
     || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, v73);
  gppiLockSFW = 0LL;
  v9 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 480LL) & 1) != 0 )
    v9 = 0LL;
  else
    LockW32Thread(gptiForeground, v72);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v63 = v10;
    SetNewForegroundQueue(*(_QWORD *)(v10 + 424));
    LockW32Thread(v10, v71);
    v11 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    v12 = a1;
  }
  else
  {
    v10 = 0LL;
    v63 = 0LL;
    SetNewForegroundQueue(0LL);
    v11 = 0LL;
    v12 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v11, v12);
  v15 = 0xFFFFFFFFLL;
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v13 = *(unsigned int *)(gpqForeground + 428LL);
      v5 = *(_QWORD *)(gpqForeground + 428LL);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = gpqForegroundPrev;
    if ( gpqForegroundPrev )
    {
      v16 = *(unsigned int *)(gpqForegroundPrev + 428LL);
      v6 = *(_QWORD *)(gpqForegroundPrev + 428LL);
    }
    else
    {
      v16 = 0LL;
    }
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v13 <= (unsigned int)v16 )
      {
        if ( (_DWORD)v13 != (_DWORD)v16
          || (v17 = HIDWORD(v5), v18 = HIDWORD(v6), (_DWORD)v17 != (_DWORD)v18)
          && (_DWORD)v17 != -1
          && (_DWORD)v18 != -1 )
        {
          ClearKeyboardToggleStates(v16, v13, gpqForegroundPrev, 0xFFFFFFFFLL);
          UpdateKeyStateFlag();
        }
      }
    }
  }
  if ( gpqForeground )
  {
    if ( gpqForeground != gpqForegroundPrev )
    {
      if ( *(_QWORD *)(gpqForeground + 112LL) )
      {
        v46 = HIDWORD(gpdwCPUserPreferencesMask);
        if ( (v46 & 0x80u) == 0LL )
          xxxApplyGlobalInputSettings(v46, v13, v14, v15);
      }
    }
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v19 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v19 )
        zzzInputFocusLostWindowEvent(v19, 1LL);
    }
    v20 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(1LL);
    if ( a2 )
    {
      xxxCancelTracking(v20, v13, v14);
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL, 1LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v21 = 0LL;
    if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
      v21 = *(_QWORD *)(v9 + 424);
    v22 = 0LL;
    if ( a2 )
      v22 = *(_QWORD *)(a2 + 424);
    v66 = 0LL;
    if ( v21 && v21 != v22 )
    {
      v64 = AllocQEntryEx((struct tagMLIST *)(v21 + 24), 0LL, 0);
      v23 = (LARGE_INTEGER *)v64;
      if ( !v64 )
      {
        v42 = 0;
        goto LABEL_88;
      }
      v24 = 0;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
        v26 = TopLevelWindow;
        if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
          v24 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v26) != 0;
        v23 = (LARGE_INTEGER *)v64;
      }
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      v28 = *(_QWORD *)(v21 + 120);
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 16);
      else
        v29 = *(_QWORD *)(v21 + 96);
      StoreQMessage(
        v23,
        0LL,
        0,
        (LARGE_INTEGER)ThreadId,
        0LL,
        0,
        0LL,
        5u,
        (LARGE_INTEGER)v24,
        0,
        &v65,
        *(_DWORD *)(*(_QWORD *)(v29 + 416) + 280LL),
        0LL,
        0LL);
      if ( v9 )
      {
        v23[13].QuadPart = v9;
        SetWakeBit(v9, 0x2040u);
      }
      if ( *(_QWORD *)(v21 + 120) )
      {
        if ( v9 && (unsigned int)IsThreadHung(v9, 0LL) )
        {
          v69 = *(_QWORD *)(v21 + 120);
          v53 = v69;
          v68 = *(_QWORD *)(v67 + 408);
          *(_QWORD *)(v67 + 408) = &v68;
          _InterlockedAdd((volatile signed __int32 *)(v53 + 8), 1u);
          v54 = *(struct tagWND **)(v21 + 120);
          ClearHungFlag(v54, 784);
          ProcessHungWindow(v54);
          ThreadUnlock1(v56, v55, v57);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v21 + 120), 0x310u);
        }
      }
    }
    v10 = v63;
    v30 = 0LL;
    if ( v63 && (*(_DWORD *)(v63 + 480) & 1) == 0 )
      v30 = *(_QWORD *)(v63 + 424);
    v31 = 0LL;
    if ( a2 )
      v31 = *(_QWORD *)(a2 + 424);
    if ( v30 )
    {
      if ( v30 != v31 )
      {
        v66 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v30 + 24), 0LL, 0);
        if ( !v66 )
        {
          v42 = 0;
          goto LABEL_88;
        }
      }
      v32 = RemoveEventMessage((struct tagQ *)v30, 5, -1);
      if ( v30 == v31 )
      {
        if ( a1 == *(struct tagWND **)(v31 + 120) )
        {
          xxxSendNCActivateMessage(a1);
          xxxUpdateTray(a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else if ( (a3 & 1) == 0 )
        {
          v44 = ~(unsigned __int8)(a3 >> 2) & 2;
          if ( v9 )
            v45 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
          else
            v45 = 0;
          v42 = xxxActivateThisWindow(a1, v45, v44, 0);
          if ( v42 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking(a1);
          v10 = v63;
          goto LABEL_88;
        }
      }
      else
      {
        if ( (v31 || (a3 & 2) != 0) && a1 )
          v33 = *(_QWORD *)a1;
        else
          v33 = 0LL;
        if ( v32 )
          *(_DWORD *)(v30 + 388) |= 0x8000u;
        v34 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v34 = (a3 >> 4) & 1;
        if ( (a3 & 1) != 0 )
        {
          v36.QuadPart = 0LL;
        }
        else
        {
          if ( v9 )
            v35 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
          else
            v35 = 0;
          v36.QuadPart = v35;
        }
        v37 = *(_QWORD *)(v30 + 120);
        if ( v37 )
          v38 = *(_QWORD *)(v37 + 16);
        else
          v38 = *(_QWORD *)(v30 + 96);
        *(_QWORD *)v62 = v33;
        v39 = v66;
        StoreQMessage(
          v66,
          0LL,
          v34,
          v36,
          *(LARGE_INTEGER *)v62,
          0,
          0LL,
          6u,
          (LARGE_INTEGER)a4,
          0,
          &v65,
          *(_DWORD *)(*(_QWORD *)(v38 + 416) + 280LL),
          0LL,
          0LL);
        v39[13].QuadPart = v63;
        SetWakeBit(v63, 0x2040u);
        if ( *(_QWORD *)(v30 + 120) )
        {
          v47 = IsThreadHung(v63, 0LL);
          v48 = *(_QWORD *)(v30 + 120);
          if ( v47 )
          {
            v70[1] = *(_QWORD *)(v30 + 120);
            v70[0] = *(_QWORD *)(v67 + 408);
            *(_QWORD *)(v67 + 408) = v70;
            _InterlockedAdd((volatile signed __int32 *)(v48 + 8), 1u);
            v58 = *(struct tagWND **)(v30 + 120);
            ClearHungFlag(v58, 784);
            ProcessHungWindow(v58);
            ThreadUnlock1(v60, v59, v61);
          }
          else
          {
            SetHungFlag((struct tagWND *)v48, 0x310u);
          }
        }
      }
    }
    v40 = 0LL;
    if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
      v40 = *(_QWORD *)(v9 + 424);
    v41 = 0LL;
    if ( a2 )
      v41 = *(_QWORD *)(a2 + 424);
    if ( v40 && v40 == v41 )
    {
      v49 = 0;
      if ( a1 )
      {
        v50 = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
        v51 = v50;
        if ( v50 && (unsigned int)CoreWindowProp::IsComponent(v50) )
          v49 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v51) != 0;
        v52 = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
      }
      else
      {
        v52 = 0;
      }
      xxxDeactivate(a2, v52, v49);
    }
    v10 = v63;
  }
  v42 = 1;
LABEL_88:
  if ( v10 )
    PopAndFreeW32ThreadLock(v71);
  if ( v9 )
    PopAndFreeW32ThreadLock(v72);
  if ( a2 )
    PopAndFreeW32ThreadLock(v73);
  return v42;
}
