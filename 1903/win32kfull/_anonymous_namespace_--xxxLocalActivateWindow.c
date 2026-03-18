/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6508 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0018644 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001AF24 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C001B100 (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C001B13C (_anonymous_namespace_--RemoveEventMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001B54C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     SetForegroundPriority @ 0x1C0211EF0 (SetForegroundPriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  int v6; // r14d
  unsigned __int8 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r15
  struct tagWND *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r15
  __int64 i; // r9
  int v21; // ebx
  int v22; // ecx
  char v23; // r12
  unsigned int v24; // r14d
  __int64 v25; // rcx
  struct tagWND *j; // rdx
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  struct tagWND *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  struct _KTHREAD *v54; // rcx
  __int64 v55; // rcx
  __int64 v57; // rcx
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+4Ch] [rbp-B4h]
  _QWORD v61[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _QWORD v69[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  _QWORD v73[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v74; // [rsp+110h] [rbp+10h] BYREF
  __int128 v75; // [rsp+120h] [rbp+20h] BYREF
  __int128 v76; // [rsp+130h] [rbp+30h] BYREF
  __int128 v77; // [rsp+140h] [rbp+40h] BYREF
  char v78[16]; // [rsp+150h] [rbp+50h] BYREF
  char v79[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v80[10]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int8 v81; // [rsp+1D0h] [rbp+D0h]
  int v83; // [rsp+1E0h] [rbp+E0h]
  int v84; // [rsp+1E8h] [rbp+E8h]

  v3 = *(_QWORD *)a1;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v4 = a3 & 4;
  v67 = 0LL;
  v68 = 0LL;
  memset(v61, 0, sizeof(v61));
  v81 = a3 & 1;
  v83 = v4;
  v6 = a3 & 2;
  v84 = a3 & 0x80;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1) )
    return 0;
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 )
    return 0;
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != v9 )
    return 0;
  v10 = *(struct tagWND **)(v9 + 128);
  if ( a1 == v10 || (*(_BYTE *)(v8 + 18) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 396) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    {
      if ( xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v57);
        xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
      }
    }
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) == (_QWORD)a1;
  }
  v62[0] = v7;
  v11 = *(_QWORD *)(gptiCurrent + 456LL);
  v62[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v62, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x8000u;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  v13 = *(_QWORD *)(v12 + 128);
  if ( v13 && *(char *)(*(_QWORD *)(v13 + 40) + 19LL) < 0 )
  {
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>((__int64)v78);
    v14 = &v74;
    v70 = (unsigned __int64)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    v74 = v70;
  }
  else
  {
    *((_QWORD *)&v71 + 1) = *(_QWORD *)(v12 + 128);
    *(_QWORD *)&v71 = v12 + 136;
    v14 = &v75;
    v75 = v71;
  }
  HMAssignmentLock(v14);
  v15 = *(_QWORD *)(gptiCurrent + 424LL);
  v16 = *(_QWORD *)(v15 + 128);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 424LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v63 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v63;
    v64 = v16;
    HMLockObject(v16);
    v41 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x20) << 16;
    if ( !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v16, v41, v3) )
    {
      ThreadUnlock1(v43, v42, v44);
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, v61, lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_);
    xxxSendMessage(v16, 6LL, v41, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v45 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v46 = v61[0];
    *(_QWORD *)(v45 + 16) = v61[0];
    ThreadUnlock1(v46, v47, v48);
    v15 = *(_QWORD *)(gptiCurrent + 424LL);
    v4 = v83;
  }
  v17 = *(struct tagWND **)(v15 + 128);
  if ( *(struct tagWND **)(v15 + 136) == v17
    && v10 == v17
    && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v15 )
  {
    if ( !v17 )
      *(_DWORD *)(v15 + 396) &= ~0x800u;
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>((__int64)v79);
    v18 = *(_QWORD *)(gptiCurrent + 424LL) + 128LL;
    *((_QWORD *)&v72 + 1) = a1;
    *(_QWORD *)&v72 = v18;
    v76 = v72;
    HMAssignmentLock(&v76);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, v61, lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_);
    xxxWindowEvent(3u, 1);
    anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 424LL), 6, 5);
    xxxMakeWindowForegroundWithState(0LL, 0);
    v19 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 136LL);
    v66 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v66;
    v67 = v19;
    if ( v19 )
      HMLockObject(v19);
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    if ( !v6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow(a1) + 112);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 88) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v19 && !(unsigned int)IsVisible(v19))
        && (!v4 || gpqForeground == *(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v21 = 19;
        if ( a1 != (struct tagWND *)i )
          v21 = 3;
        xxxSetWindowPos(a1, 0, 0, v21);
        if ( (v21 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v22 = *(_DWORD *)(gptiCurrent + 480LL);
    v23 = 0;
    if ( (v22 & 0x200) == 0 && (!v19 || v19[2] != *((_QWORD *)a1 + 2)) )
    {
      v24 = 0;
      if ( v19 )
      {
        v53 = v19[2];
        memset(v69, 0, sizeof(v69));
        *(_DWORD *)(v53 + 480) |= 0x200u;
        v54 = (struct _KTHREAD *)*gptiCurrent;
        v58 = v53;
        ThreadId = (unsigned int)PsGetThreadId(v54);
        v60 = 0;
        LockW32Thread(v53, v69);
        xxxSendActivateAppMessage((const struct tagAAS *)&v58);
        *(_DWORD *)(v53 + 480) &= ~0x200u;
        PopAndFreeW32ThreadLock(v69);
        v22 = *(_DWORD *)(gptiCurrent + 480LL);
        v24 = v60;
      }
      *(_DWORD *)(gptiCurrent + 480LL) = v22 | 0x200;
      v58 = *((_QWORD *)a1 + 2);
      v23 = 1;
      ThreadId = a2;
      v60 = v24 & 0xFFFFFFFC | 1;
      xxxSendActivateAppMessage((const struct tagAAS *)&v58);
    }
    v25 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v25 + 16) & 0x40) != 0 )
    {
      SetOrClrWF(1LL, a1, 257LL, 1LL);
      v25 = *((_QWORD *)a1 + 5);
    }
    if ( *(char *)(v25 + 19) >= 0 )
    {
      for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
        ;
      v77 = *(_OWORD *)LockPointer(v80, (__int64)j + 200, (__int64)a1);
      HMAssignmentLock(&v77);
    }
    v27 = 0LL;
    if ( v19 )
      v27 = *v19;
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground;
    v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    if ( v29 )
      v28 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v29 + 40) + 31LL) & 0x20) << 16;
    anonymous_namespace_::xxxSendNCActivateMessage(a1, v28, v27);
    v30 = v81 + 1LL;
    v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    if ( v31 )
      v30 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x20) << 16;
    xxxSendMessage(a1, 6LL, v30, v27);
    xxxUpdateTray(a1);
    ThreadUnlock1(v33, v32, v34);
    SetOrClrWF(0LL, a1, 257LL, 1LL);
    if ( v84 )
    {
      v35 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( (*(_DWORD *)(v35 + 396) & 0x800) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v35 + 120));
        if ( v37 != NonChildAncestor )
        {
          v49 = 0LL;
          if ( v37 && (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 31LL) & 0x20) == 0 )
            v49 = (struct tagWND *)v37;
          v73[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v73;
          v73[2] = 0LL;
          v73[1] = v37;
          if ( v37 )
            HMLockObject(v37);
          anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v49);
          ThreadUnlock1(v51, v50, v52);
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) |= 0x40u;
    if ( gppiScreenSaver )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) != gppiScreenSaver )
      {
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          7LL);
        *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
        v55 = *(_QWORD *)(gppiScreenSaver + 328LL);
        if ( v55 )
          SetForegroundPriority(v55, 1LL);
      }
    }
    else if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput && !gbBlockSendInputResets )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        7LL);
    }
    if ( v23 )
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200u;
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v38 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v38 + 16) = v61[0];
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) == (_QWORD)a1;
  }
  return 0;
}
