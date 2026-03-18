/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00055F0 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0007DD0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01328D0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxSetForegroundCheckNoActivate@@YAHPEAUtagWND@@@Z @ 0x1C01C30C4 (-xxxSetForegroundCheckNoActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C01C31A0 (-xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01C31C0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C000A108 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C006F000 (IsWindowUnderActiveLockScreen.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ClearKeyboardToggleStates @ 0x1C00AFA3C (ClearKeyboardToggleStates.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00B0910 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00CE784 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     SetNewForegroundQueue @ 0x1C00D0EA0 (SetNewForegroundQueue.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00D81FC (xxxCancelTracking.c)
 *     SetHungFlag @ 0x1C00D8654 (SetHungFlag.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FF6FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C010B140 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     zzzActiveCursorTracking @ 0x1C01CF81C (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(LARGE_INTEGER *a1, struct tagTHREADINFO *a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned int v7; // r15d
  __int64 v9; // r14
  struct tagTHREADINFO *v10; // rcx
  struct tagWND *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  _BOOL8 v22; // rdi
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v24; // rdi
  HANDLE ThreadId; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  LARGE_INTEGER *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // eax
  LARGE_INTEGER v32; // rdi
  DWORD v33; // edx
  unsigned int v34; // eax
  LARGE_INTEGER v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  char v41; // r12
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  char v45; // bl
  const struct tagWND *v46; // rax
  const struct tagWND *v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  LARGE_INTEGER v54; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER *v55; // [rsp+80h] [rbp-80h]
  DWORD v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER *v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  _QWORD v61[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v62[3]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v63[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v64[10]; // [rsp+100h] [rbp+0h] BYREF
  DWORD v65; // [rsp+160h] [rbp+60h]
  __int64 QuadPart; // [rsp+178h] [rbp+78h]

  v3 = 0LL;
  v5 = 0LL;
  v7 = 1;
  v57 = gptiCurrent;
  SetSystemInputSource(&v56);
  if ( a1
    && (a1[3].QuadPart != grpdeskRitInput
     || *(char *)(a1[5].QuadPart + 19) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen((__int64)a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread((__int64)a2, v64);
  gppiLockSFW = 0LL;
  v9 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v9 = 0LL;
  else
    LockW32Thread(gptiForeground, v63);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    QuadPart = a1[2].QuadPart;
    SetNewForegroundQueue(*(_QWORD *)(QuadPart + 432));
    LockW32Thread(QuadPart, v62);
    v10 = (struct tagTHREADINFO *)a1[2].QuadPart;
    v11 = (struct tagWND *)a1;
  }
  else
  {
    QuadPart = 0LL;
    SetNewForegroundQueue(0LL);
    v10 = 0LL;
    v11 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v10, v11);
  v14 = 0xFFFFFFFFLL;
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v12 = *(unsigned int *)(gpqForeground + 428LL);
      v3 = *(_QWORD *)(gpqForeground + 428LL);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = gpqForegroundPrev;
    if ( gpqForegroundPrev )
    {
      v15 = *(_DWORD *)(gpqForegroundPrev + 428LL);
      v5 = *(_QWORD *)(gpqForegroundPrev + 428LL);
    }
    else
    {
      v15 = 0;
    }
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v12 <= v15 )
      {
        if ( (_DWORD)v12 != v15
          || (v16 = HIDWORD(v3), v17 = HIDWORD(v5), (_DWORD)v16 != (_DWORD)v17)
          && (_DWORD)v16 != -1
          && (_DWORD)v17 != -1 )
        {
          ClearKeyboardToggleStates();
          anonymous_namespace_::UpdateKeyStateFlag();
        }
      }
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 112LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v18 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v18 )
        zzzInputFocusLostWindowEvent(v18, 1);
    }
    v19 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(1);
    if ( a2 )
    {
      xxxCancelTracking(v19, v12, v13, v14);
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v20 = 0LL;
    if ( v9 && (*(_DWORD *)(v9 + 488) & 1) == 0 )
      v20 = *(_QWORD *)(v9 + 432);
    v21 = 0LL;
    if ( a2 )
      v21 = *((_QWORD *)a2 + 54);
    v55 = 0LL;
    if ( v20 && v20 != v21 )
    {
      v58 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v20 + 24), 0LL, 0);
      if ( !v58 )
      {
LABEL_126:
        v7 = 0;
        goto LABEL_87;
      }
      v22 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
        v24 = TopLevelWindow;
        v22 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v24) != 0;
      }
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      v26 = *(_QWORD *)(v20 + 120);
      if ( v26 )
        v27 = *(_QWORD *)(v26 + 16);
      else
        v27 = *(_QWORD *)(v20 + 96);
      v54.QuadPart = v22;
      v28 = v58;
      StoreQMessage(
        v58,
        0LL,
        0,
        (LARGE_INTEGER)ThreadId,
        0LL,
        0,
        0LL,
        5u,
        v54,
        0,
        &v56,
        *(_DWORD *)(*(_QWORD *)(v27 + 424) + 280LL),
        0LL,
        0LL);
      if ( v9 )
      {
        v28[13].QuadPart = v9;
        SetWakeBit(v9, 0x2040u);
      }
      if ( *(_QWORD *)(v20 + 120) )
      {
        if ( v9 && (unsigned int)IsThreadHung((_QWORD *)v9, 0) )
        {
          v60 = *(_QWORD *)(v20 + 120);
          v49 = v60;
          v59 = *(_QWORD *)(v57 + 416);
          *(_QWORD *)(v57 + 416) = &v59;
          _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
          ClearHungFlag(*(struct tagWND **)(v20 + 120), 0x310u);
          ProcessHungWindow();
          ThreadUnlock1(v51, v50);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v20 + 120));
        }
      }
    }
    v29 = 0LL;
    if ( QuadPart && (*(_DWORD *)(QuadPart + 488) & 1) == 0 )
      v29 = *(_QWORD *)(QuadPart + 432);
    v30 = 0LL;
    if ( a2 )
      v30 = *((_QWORD *)a2 + 54);
    if ( !v29 )
    {
LABEL_80:
      v38 = 0LL;
      if ( v9 && (*(_DWORD *)(v9 + 488) & 1) == 0 )
        v38 = *(_QWORD *)(v9 + 432);
      v39 = 0LL;
      if ( a2 )
        v39 = *((_QWORD *)a2 + 54);
      if ( v38 && v38 == v39 )
      {
        v45 = 0;
        if ( a1 )
        {
          v46 = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
          v47 = v46;
          if ( v46 && (unsigned int)CoreWindowProp::IsComponent(v46) )
            v45 = (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v47) != 0;
          v48 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1[2].QuadPart);
        }
        else
        {
          v48 = 0;
        }
        xxxDeactivate((__int64)a2, v48, v45);
      }
      goto LABEL_87;
    }
    if ( v29 == v30 || (v55 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v29 + 24), 0LL, 0)) != 0LL )
    {
      v31 = anonymous_namespace_::RemoveEventMessage(v29, 5, -1);
      if ( v29 == v30 )
      {
        if ( a1 == *(LARGE_INTEGER **)(v30 + 120) )
        {
          anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1LL);
          xxxUpdateTray((struct tagWND *)a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else if ( (a3 & 1) == 0 )
        {
          v41 = ~(16 * a3) & 0x80;
          if ( v9 )
            v42 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
          else
            v42 = 0;
          anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v42, v41);
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking((struct tagWND *)a1);
          goto LABEL_87;
        }
      }
      else
      {
        if ( v30 || (a3 & 2) != 0 )
        {
          v32.QuadPart = 0LL;
          if ( a1 )
            v32 = *a1;
        }
        else
        {
          v32.QuadPart = 0LL;
        }
        if ( v31 )
          *(_DWORD *)(v29 + 388) |= 0x8000u;
        v33 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v33 = (a3 >> 4) & 1;
        v65 = v33;
        if ( (a3 & 1) != 0 )
        {
          v35.QuadPart = 0LL;
        }
        else
        {
          if ( v9 )
          {
            v34 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
            v33 = v65;
          }
          else
          {
            v34 = 0;
          }
          v35.QuadPart = v34;
        }
        v36 = *(_QWORD *)(v29 + 120);
        if ( v36 )
          v37 = *(_QWORD *)(v36 + 16);
        else
          v37 = *(_QWORD *)(v29 + 96);
        StoreQMessage(
          v55,
          0LL,
          v33,
          v35,
          v32,
          0,
          0LL,
          6u,
          0LL,
          0,
          &v56,
          *(_DWORD *)(*(_QWORD *)(v37 + 424) + 280LL),
          0LL,
          0LL);
        v55[13].QuadPart = QuadPart;
        SetWakeBit(QuadPart, 0x2040u);
        if ( *(_QWORD *)(v29 + 120) )
        {
          v43 = IsThreadHung((_QWORD *)QuadPart, 0);
          v44 = *(_QWORD *)(v29 + 120);
          if ( v43 )
          {
            v61[1] = *(_QWORD *)(v29 + 120);
            v61[0] = *(_QWORD *)(v57 + 416);
            *(_QWORD *)(v57 + 416) = v61;
            _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
            ClearHungFlag(*(struct tagWND **)(v29 + 120), 0x310u);
            ProcessHungWindow();
            ThreadUnlock1(v53, v52);
          }
          else
          {
            SetHungFlag((struct tagWND *)v44);
          }
        }
      }
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      goto LABEL_80;
    }
    goto LABEL_126;
  }
LABEL_87:
  if ( QuadPart )
    PopAndFreeW32ThreadLock((__int64)v62, v12);
  if ( v9 )
    PopAndFreeW32ThreadLock((__int64)v63, v12);
  if ( a2 )
    PopAndFreeW32ThreadLock((__int64)v64, v12);
  return v7;
}
