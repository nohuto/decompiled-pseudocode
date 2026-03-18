/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444
 * Callers:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6378 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 * Callees:
 *     SetNewForegroundQueue @ 0x1C001B530 (SetNewForegroundQueue.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001B64C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C001B864 (_anonymous_namespace_--RemoveEventMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PtiKbdFromQ @ 0x1C002BD30 (PtiKbdFromQ.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C002D44C (IsWindowUnderActiveLockScreen.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E3C40 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0117CDC (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0132E60 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C0134DA0 (xxxCancelTracking.c)
 *     SetHungFlag @ 0x1C0135468 (SetHungFlag.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C013779C (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     ProcessHungWindow @ 0x1C01514D4 (ProcessHungWindow.c)
 *     zzzActiveCursorTracking @ 0x1C01E4320 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r8
  struct tagWND *v11; // r8
  struct tagTHREADINFO *v12; // rcx
  struct tagWND *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  _BOOL8 v20; // r12
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v22; // r12
  __int64 v23; // rax
  LARGE_INTEGER *v24; // r12
  LARGE_INTEGER v25; // r9
  __int64 v26; // rbx
  __int64 v27; // r12
  int v28; // eax
  LARGE_INTEGER v29; // r12
  __int64 v30; // rax
  DWORD v31; // edx
  LARGE_INTEGER *v32; // r8
  LARGE_INTEGER v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  char v37; // r15
  unsigned int v38; // eax
  int v39; // eax
  struct tagWND *v40; // rcx
  BOOL v41; // ebx
  const struct tagWND *v42; // rax
  const struct tagWND *v43; // r15
  unsigned int ThreadId; // eax
  struct tagWND *v45; // rcx
  struct tagWND *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct tagWND *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r8
  LARGE_INTEGER v55; // [rsp+40h] [rbp-99h]
  __int64 v56; // [rsp+70h] [rbp-69h] BYREF
  __int64 v57; // [rsp+78h] [rbp-61h] BYREF
  __int64 v58; // [rsp+80h] [rbp-59h] BYREF
  LARGE_INTEGER *v59; // [rsp+88h] [rbp-51h]
  __int64 v60; // [rsp+90h] [rbp-49h] BYREF
  struct tagWND *v61; // [rsp+98h] [rbp-41h]
  __int64 v62; // [rsp+A0h] [rbp-39h]
  __int64 v63; // [rsp+A8h] [rbp-31h]
  LARGE_INTEGER *v64; // [rsp+B0h] [rbp-29h]
  _QWORD v65[3]; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v66[3]; // [rsp+D0h] [rbp-9h] BYREF
  _QWORD v67[9]; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v68; // [rsp+158h] [rbp+7Fh]

  v58 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  memset(v66, 0, sizeof(v66));
  v6 = 1;
  memset(v65, 0, sizeof(v65));
  memset(v67, 0, 24);
  v63 = gptiCurrent;
  SetSystemInputSource(&v58);
  if ( a1
    && (*(_QWORD *)(a1 + 24) != grpdeskRitInput
     || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, v67, v8);
  gppiLockSFW = 0LL;
  v9 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 480LL) & 1) != 0 )
    v9 = 0LL;
  else
    LockW32Thread(gptiForeground, v66, v8);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v68 = *(_QWORD *)(a1 + 16);
    SetNewForegroundQueue(*(_QWORD *)(v68 + 424), v7, v8);
    LockW32Thread(v68, v65, v10);
    v12 = *(struct tagTHREADINFO **)(a1 + 16);
    v13 = (struct tagWND *)a1;
    v14 = v68;
  }
  else
  {
    v14 = 0LL;
    v68 = 0LL;
    SetNewForegroundQueue(0LL, v7, v8);
    v12 = 0LL;
    v13 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v12, v13, v11);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v57 = *(_QWORD *)(gpqForeground + 436LL);
    if ( gpqForegroundPrev )
      v56 = *(_QWORD *)(gpqForegroundPrev + 436LL);
    if ( !(unsigned __int8)CheckAccess(&v57, &v56) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 120LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v17 = *(_QWORD *)(gpqForegroundPrev + 120LL);
      if ( v17 )
        zzzInputFocusLostWindowEvent(v17, 1);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
      zzzInputFocusReceivedWindowEvent(1);
    if ( a2 )
    {
      xxxCancelTracking();
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v18 = 0LL;
    if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
      v18 = *(_QWORD *)(v9 + 424);
    v19 = 0LL;
    if ( a2 )
      v19 = *(_QWORD *)(a2 + 424);
    v59 = 0LL;
    if ( v18 && v18 != v19 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v60, v18);
      v64 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v18 + 24), 0LL, 0LL);
      if ( !v64 )
      {
        v6 = 0;
        goto LABEL_78;
      }
      v20 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v22 = TopLevelWindow;
        v20 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v22) != 0;
      }
      if ( gptiForeground )
        PsGetThreadId((PETHREAD)*gptiForeground);
      v23 = PtiKbdFromQ(v18);
      v55.QuadPart = v20;
      v24 = v64;
      StoreQMessage(
        v64,
        0LL,
        0,
        v25,
        0LL,
        0,
        0LL,
        5u,
        v55,
        0,
        (DWORD *)&v58,
        *(_DWORD *)(*(_QWORD *)(v23 + 416) + 280LL),
        0LL,
        0LL);
      if ( v9 )
      {
        v24[13].QuadPart = v9;
        SetWakeBit(v9, 0x2040u);
      }
      if ( *(_QWORD *)(v18 + 128) )
      {
        if ( v9 && (unsigned int)IsThreadHung((_QWORD *)v9, 0) )
        {
          v45 = *(struct tagWND **)(v18 + 128);
          v62 = 0LL;
          v61 = v45;
          v60 = *(_QWORD *)(v63 + 408);
          *(_QWORD *)(v63 + 408) = &v60;
          HMLockObject(v45);
          v46 = *(struct tagWND **)(v18 + 128);
          ClearHungFlag(v46, 0x310u);
          ProcessHungWindow(v46);
          ThreadUnlock1(v48, v47, v49);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v18 + 128));
        }
      }
    }
    v26 = 0LL;
    if ( v68 && (*(_DWORD *)(v68 + 480) & 1) == 0 )
      v26 = *(_QWORD *)(v68 + 424);
    v27 = 0LL;
    if ( a2 )
      v27 = *(_QWORD *)(a2 + 424);
    if ( !v26 )
    {
      v14 = v68;
LABEL_71:
      v34 = 0LL;
      if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
        v34 = *(_QWORD *)(v9 + 424);
      v35 = 0LL;
      if ( a2 )
        v35 = *(_QWORD *)(a2 + 424);
      if ( v34 && v34 == v35 )
      {
        v41 = 0;
        if ( a1 )
        {
          v42 = (const struct tagWND *)GetTopLevelWindow(a1);
          v43 = v42;
          if ( v42 && (unsigned int)CoreWindowProp::IsComponent(v42) )
            v41 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v43) != 0;
          ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          ThreadId = 0;
        }
        xxxDeactivate(a2, ThreadId, v41);
      }
      goto LABEL_78;
    }
    if ( v26 == v27
      || (CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v60, v26),
          (v59 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v26 + 24), 0LL, 0LL)) != 0LL) )
    {
      v28 = anonymous_namespace_::RemoveEventMessage(v26, 5, -1);
      if ( v26 != v27 )
      {
        if ( v27 || (a3 & 2) != 0 )
        {
          v29.QuadPart = 0LL;
          if ( a1 )
            v29 = *(LARGE_INTEGER *)a1;
        }
        else
        {
          v29.QuadPart = 0LL;
        }
        if ( v28 )
          *(_DWORD *)(v26 + 396) |= 0x8000u;
        if ( (a3 & 1) == 0 && v9 )
          PsGetThreadId(*(PETHREAD *)v9);
        v30 = PtiKbdFromQ(v26);
        StoreQMessage(
          v59,
          0LL,
          v31,
          v33,
          v29,
          (int)v32,
          (__int64)v32,
          6u,
          (LARGE_INTEGER)v32,
          (char)v32,
          (DWORD *)&v58,
          *(_DWORD *)(*(_QWORD *)(v30 + 416) + 280LL),
          (LARGE_INTEGER)v32,
          v32);
        v14 = v68;
        v59[13].QuadPart = v68;
        SetWakeBit(v68, 0x2040u);
        if ( *(_QWORD *)(v26 + 128) )
        {
          v39 = IsThreadHung((_QWORD *)v68, 0);
          v40 = *(struct tagWND **)(v26 + 128);
          if ( v39 )
          {
            v62 = 0LL;
            v61 = v40;
            v60 = *(_QWORD *)(v63 + 408);
            *(_QWORD *)(v63 + 408) = &v60;
            HMLockObject(v40);
            v50 = *(struct tagWND **)(v26 + 128);
            ClearHungFlag(v50, 0x310u);
            ProcessHungWindow(v50);
            ThreadUnlock1(v52, v51, v53);
          }
          else
          {
            SetHungFlag(v40);
          }
        }
        goto LABEL_69;
      }
      if ( a1 == *(_QWORD *)(v27 + 128) )
      {
        if ( a1 )
          v54 = *(_QWORD *)a1;
        else
          v54 = 0LL;
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1LL, v54);
        xxxUpdateTray((struct tagWND *)a1);
        if ( (a3 & 4) == 0 )
          xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
      }
      else if ( (a3 & 1) == 0 )
      {
        v37 = ~(16 * a3) & 0x80;
        if ( v9 )
          v38 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
        else
          v38 = 0;
        anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v38, v37);
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(a1);
        goto LABEL_91;
      }
      v14 = v68;
LABEL_69:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      goto LABEL_71;
    }
    v6 = 0;
LABEL_91:
    v14 = v68;
  }
LABEL_78:
  if ( v14 )
    PopAndFreeW32ThreadLock((__int64)v65, v15, v16);
  if ( v9 )
    PopAndFreeW32ThreadLock((__int64)v66, v15, v16);
  if ( a2 )
    PopAndFreeW32ThreadLock((__int64)v67, v15, v16);
  return v6;
}
