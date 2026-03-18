/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C001152C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C013CE70 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6508 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 * Callees:
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     SetHungFlag @ 0x1C0013594 (SetHungFlag.c)
 *     xxxCancelTracking @ 0x1C0013904 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     SetNewForegroundQueue @ 0x1C0013A60 (SetNewForegroundQueue.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0014300 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0014388 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0014830 (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001AF24 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C001B13C (_anonymous_namespace_--RemoveEventMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0026FDC (IsWindowUnderActiveLockScreen.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01096A0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C0110FE0 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C013DDBC (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 *     zzzActiveCursorTracking @ 0x1C01E44A0 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(struct tagWND *a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rsi
  struct tagWND *v8; // r8
  struct tagTHREADINFO *v9; // rcx
  struct tagWND *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  _BOOL8 v19; // r12
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v21; // r12
  __int64 v22; // rax
  struct tagQMSG *v23; // r12
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  int v36; // eax
  struct tagWND *v37; // rcx
  char v38; // bl
  const struct tagWND *v39; // rax
  const struct tagWND *v40; // r15
  unsigned int ThreadId; // eax
  struct tagWND *v42; // rcx
  struct tagWND *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct tagWND *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _BOOL8 v51; // [rsp+40h] [rbp-99h]
  __int64 v52; // [rsp+70h] [rbp-69h] BYREF
  __int64 v53; // [rsp+78h] [rbp-61h] BYREF
  __int64 v54; // [rsp+80h] [rbp-59h] BYREF
  struct tagQMSG *v55; // [rsp+88h] [rbp-51h]
  __int64 v56; // [rsp+90h] [rbp-49h] BYREF
  struct tagWND *v57; // [rsp+98h] [rbp-41h]
  __int64 v58; // [rsp+A0h] [rbp-39h]
  __int64 v59; // [rsp+A8h] [rbp-31h]
  struct tagQMSG *v60; // [rsp+B0h] [rbp-29h]
  _QWORD v61[3]; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v62[3]; // [rsp+D0h] [rbp-9h] BYREF
  _QWORD v63[9]; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v64; // [rsp+158h] [rbp+7Fh]

  v54 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  memset(v62, 0, sizeof(v62));
  v6 = 1;
  memset(v61, 0, sizeof(v61));
  memset(v63, 0, 24);
  v59 = gptiCurrent;
  SetSystemInputSource(&v54);
  if ( a1
    && (*((_QWORD *)a1 + 3) != grpdeskRitInput
     || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, v63);
  gppiLockSFW = 0LL;
  v7 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 480LL) & 1) != 0 )
    v7 = 0LL;
  else
    LockW32Thread(gptiForeground, v62);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v64 = *((_QWORD *)a1 + 2);
    SetNewForegroundQueue(*(_QWORD *)(v64 + 424));
    LockW32Thread(v64, v61);
    v9 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    v10 = a1;
    v11 = v64;
  }
  else
  {
    v11 = 0LL;
    v64 = 0LL;
    SetNewForegroundQueue(0LL);
    v9 = 0LL;
    v10 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v9, v10, v8);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v53 = *(_QWORD *)(gpqForeground + 436LL);
    if ( gpqForegroundPrev )
      v52 = *(_QWORD *)(gpqForegroundPrev + 436LL);
    if ( !(unsigned __int8)CheckAccess(&v53, &v52) )
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
      v14 = *(_QWORD *)(gpqForegroundPrev + 120LL);
      if ( v14 )
        zzzInputFocusLostWindowEvent(v14);
    }
    v15 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
      zzzInputFocusReceivedWindowEvent();
    if ( a2 )
    {
      xxxCancelTracking(v15, v12, v13);
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL, 1u, v16);
      xxxMakeWindowForegroundWithState(0LL, 0LL);
    }
    v17 = 0LL;
    if ( v7 && (*(_DWORD *)(v7 + 480) & 1) == 0 )
      v17 = *(_QWORD *)(v7 + 424);
    v18 = 0LL;
    if ( a2 )
      v18 = *(_QWORD *)(a2 + 424);
    v55 = 0LL;
    if ( v17 && v17 != v18 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v56, v17);
      v60 = AllocQEntryEx((struct tagMLIST *)(v17 + 24), 0LL, 0);
      if ( !v60 )
      {
        v6 = 0;
        goto LABEL_78;
      }
      v19 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v21 = TopLevelWindow;
        v19 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v21) != 0;
      }
      if ( gptiForeground )
        PsGetThreadId((PETHREAD)*gptiForeground);
      v22 = PtiKbdFromQ(v17);
      v51 = v19;
      v23 = v60;
      StoreQMessage(
        v60,
        0LL,
        0LL,
        v24,
        0LL,
        0,
        0LL,
        5,
        v51,
        0,
        &v54,
        *(_DWORD *)(*(_QWORD *)(v22 + 416) + 280LL),
        0LL,
        0LL);
      if ( v7 )
      {
        *((_QWORD *)v23 + 13) = v7;
        SetWakeBit(v7, 8256LL);
      }
      if ( *(_QWORD *)(v17 + 128) )
      {
        if ( v7 && (unsigned int)IsThreadHung((_QWORD *)v7, 0) )
        {
          v42 = *(struct tagWND **)(v17 + 128);
          v58 = 0LL;
          v57 = v42;
          v56 = *(_QWORD *)(v59 + 408);
          *(_QWORD *)(v59 + 408) = &v56;
          HMLockObject(v42);
          v43 = *(struct tagWND **)(v17 + 128);
          ClearHungFlag(v43);
          ProcessHungWindow(v43);
          ThreadUnlock1(v45, v44, v46);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v17 + 128), 0x310u);
        }
      }
    }
    v25 = 0LL;
    if ( v64 && (*(_DWORD *)(v64 + 480) & 1) == 0 )
      v25 = *(_QWORD *)(v64 + 424);
    v26 = 0LL;
    if ( a2 )
      v26 = *(_QWORD *)(a2 + 424);
    if ( !v25 )
    {
      v11 = v64;
LABEL_71:
      v33 = 0LL;
      if ( v7 && (*(_DWORD *)(v7 + 480) & 1) == 0 )
        v33 = *(_QWORD *)(v7 + 424);
      v34 = 0LL;
      if ( a2 )
        v34 = *(_QWORD *)(a2 + 424);
      if ( v33 && v33 == v34 )
      {
        v38 = 0;
        if ( a1 )
        {
          v39 = (const struct tagWND *)GetTopLevelWindow(a1);
          v40 = v39;
          if ( v39 && (unsigned int)CoreWindowProp::IsComponent(v39) )
            v38 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v40) != 0;
          ThreadId = (unsigned int)PsGetThreadId(**((PETHREAD **)a1 + 2));
        }
        else
        {
          ThreadId = 0;
        }
        xxxDeactivate(a2, ThreadId, v38);
      }
      goto LABEL_78;
    }
    if ( v25 == v26
      || (CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v56, v25),
          (v55 = AllocQEntryEx((struct tagMLIST *)(v25 + 24), 0LL, 0)) != 0LL) )
    {
      v27 = anonymous_namespace_::RemoveEventMessage(v25, 5LL, 0xFFFFFFFFLL);
      if ( v25 != v26 )
      {
        if ( v26 || (a3 & 2) != 0 )
        {
          v28 = 0LL;
          if ( a1 )
            v28 = *(_QWORD *)a1;
        }
        else
        {
          v28 = 0LL;
        }
        if ( v27 )
          *(_DWORD *)(v25 + 396) |= 0x8000u;
        if ( (a3 & 1) == 0 && v7 )
          PsGetThreadId(*(PETHREAD *)v7);
        v29 = PtiKbdFromQ(v25);
        StoreQMessage(
          v55,
          0LL,
          v30,
          v32,
          v28,
          v31,
          v31,
          6,
          v31,
          v31,
          &v54,
          *(_DWORD *)(*(_QWORD *)(v29 + 416) + 280LL),
          v31,
          v31);
        v11 = v64;
        *((_QWORD *)v55 + 13) = v64;
        SetWakeBit(v64, 8256LL);
        if ( *(_QWORD *)(v25 + 128) )
        {
          v36 = IsThreadHung((_QWORD *)v64, 0);
          v37 = *(struct tagWND **)(v25 + 128);
          if ( v36 )
          {
            v58 = 0LL;
            v57 = v37;
            v56 = *(_QWORD *)(v59 + 408);
            *(_QWORD *)(v59 + 408) = &v56;
            HMLockObject(v37);
            v47 = *(struct tagWND **)(v25 + 128);
            ClearHungFlag(v47);
            ProcessHungWindow(v47);
            ThreadUnlock1(v49, v48, v50);
          }
          else
          {
            SetHungFlag(v37, 0x310u);
          }
        }
        goto LABEL_69;
      }
      if ( a1 == *(struct tagWND **)(v26 + 128) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage(a1);
        xxxUpdateTray(a1);
        if ( (a3 & 4) == 0 )
          xxxSetWindowPos(a1, 0, 0, 3);
      }
      else if ( (a3 & 1) == 0 )
      {
        if ( v7 )
          PsGetThreadId(*(PETHREAD *)v7);
        anonymous_namespace_::xxxLocalActivateWindow(a1);
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(a1);
        goto LABEL_91;
      }
      v11 = v64;
LABEL_69:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage(a1);
      goto LABEL_71;
    }
    v6 = 0;
LABEL_91:
    v11 = v64;
  }
LABEL_78:
  if ( v11 )
    PopAndFreeW32ThreadLock(v61);
  if ( v7 )
    PopAndFreeW32ThreadLock(v62);
  if ( a2 )
    PopAndFreeW32ThreadLock(v63);
  return v6;
}
