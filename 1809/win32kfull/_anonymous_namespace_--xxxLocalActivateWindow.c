/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01C31C0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00B0910 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00B0B4C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00B0E48 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, int a2, char a3)
{
  unsigned __int64 v3; // rbx
  int v4; // r12d
  int v6; // r15d
  unsigned __int8 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // r13
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR v16; // r14
  struct tagWND *v17; // rdx
  __int64 v18; // r14
  __int64 i; // r9
  int v20; // ebx
  int v21; // ecx
  char v22; // r15
  __int64 v23; // rcx
  struct tagWND *j; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  unsigned int ThreadId; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // rcx
  __int128 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v52[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+90h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v57[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v58[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v59[3]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v60[80]; // [rsp+120h] [rbp+20h] BYREF
  int v62; // [rsp+198h] [rbp+98h]

  v3 = *(_QWORD *)a1;
  v4 = a3 & 4;
  v62 = a3 & 0x80;
  v6 = a3 & 2;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0;
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 )
    return 0;
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v9 )
    return 0;
  v10 = *(struct tagWND **)(v9 + 120);
  if ( a1 == v10 || (*(_BYTE *)(v8 + 18) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 388) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    {
      if ( xxxSendMessage((ULONG_PTR)a1) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
        xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
      }
    }
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  v50[1] = v3;
  v50[0] = v7;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v50, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
  {
    v49 = (unsigned __int64)(v11 + 120);
    v13 = &v53;
    v53 = v49;
  }
  else
  {
    *((_QWORD *)&v49 + 1) = *(_QWORD *)(v11 + 120);
    *(_QWORD *)&v49 = v11 + 128;
    v13 = &v54;
    v54 = v49;
  }
  HMAssignmentLock(v13);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(_QWORD *)(v15 + 120);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    v56[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v56;
    v56[1] = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v16) )
    {
      ThreadUnlock1(v35, v34);
      return 0;
    }
    SetOrClrWF(1, (__int64)a1, 0x210u, 1);
    PushW32ThreadLock(v3, v52, lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_);
    xxxSendMessage(v16);
    SetOrClrWF(0, (__int64)a1, 0x210u, 1);
    v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36);
    v38 = v52[0];
    *(_QWORD *)(v37 + 16) = v52[0];
    ThreadUnlock1(v38, v39);
    v15 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v17 = *(struct tagWND **)(v15 + 120);
  if ( *(struct tagWND **)(v15 + 128) == v17
    && v10 == v17
    && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v15 )
  {
    if ( !v17 )
    {
      *(_DWORD *)(v15 + 388) &= ~0x800u;
      v15 = *(_QWORD *)(gptiCurrent + 432LL);
    }
    v51[1] = a1;
    v51[0] = v15 + 120;
    HMAssignmentLock(v51);
    SetOrClrWF(1, (__int64)a1, 0x210u, 1);
    PushW32ThreadLock(v3, v52, lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_);
    xxxWindowEvent(3u, (__int64)a1, 0, 0, 1u);
    anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL, 5LL);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
    v57[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v57;
    v57[1] = v18;
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage((ULONG_PTR)a1) )
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    if ( !v6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow((__int64)a1) + 88);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 64) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v18 && !(unsigned int)IsVisible(v18))
        && (!v4 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
      {
        v20 = 19;
        if ( a1 != (struct tagWND *)i )
          v20 = 3;
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v20);
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v21 = *(_DWORD *)(gptiCurrent + 488LL);
    v22 = 0;
    if ( (v21 & 0x200) != 0 )
      goto LABEL_34;
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 16) == *((_QWORD *)a1 + 2) )
        goto LABEL_34;
      v43 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)&v49 = v43;
      *(_DWORD *)(v43 + 488) |= 0x200u;
      ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
      HIDWORD(v49) &= 0xFFFFFFFC;
      DWORD2(v49) = ThreadId;
      LockW32Thread(v43, v59);
      xxxSendActivateAppMessage((const struct tagAAS *)&v49);
      *(_DWORD *)(v43 + 488) &= ~0x200u;
      PopAndFreeW32ThreadLock((__int64)v59, v45);
      v21 = *(_DWORD *)(gptiCurrent + 488LL);
    }
    *(_DWORD *)(gptiCurrent + 488LL) = v21 | 0x200;
    v22 = 1;
    *(_QWORD *)&v49 = *((_QWORD *)a1 + 2);
    DWORD2(v49) = a2;
    HIDWORD(v49) = HIDWORD(v49) & 0xFFFFFFFC | 1;
    xxxSendActivateAppMessage((const struct tagAAS *)&v49);
LABEL_34:
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v23 + 16) & 0x40) != 0 )
    {
      SetOrClrWF(1, (__int64)a1, 0x101u, 1);
      v23 = *((_QWORD *)a1 + 5);
    }
    if ( *(char *)(v23 + 19) >= 0 )
    {
      for ( j = a1; *((_QWORD *)j + 12); j = (struct tagWND *)*((_QWORD *)j + 12) )
        ;
      v55 = *(_OWORD *)LockPointer(v60, (char *)j + 184);
      HMAssignmentLock(&v55);
    }
    anonymous_namespace_::xxxSendNCActivateMessage(a1);
    xxxSendMessage((ULONG_PTR)a1);
    xxxUpdateTray(a1);
    ThreadUnlock1(v26, v25);
    SetOrClrWF(0, (__int64)a1, 0x101u, 1);
    if ( v62 )
    {
      v27 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( (*(_DWORD *)(v27 + 388) & 0x800) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v27 + 112));
        if ( v29 != NonChildAncestor )
        {
          v40 = 0LL;
          if ( v29 && (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 31LL) & 0x20) == 0 )
            v40 = v29;
          v58[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v58;
          v58[1] = v29;
          if ( v29 )
            _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
          anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v40);
          ThreadUnlock1(v42, v41);
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x40u;
    if ( gppiScreenSaver )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
      {
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          7LL);
        *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
        v46 = *(_QWORD *)(gppiScreenSaver + 336LL);
        if ( v46 )
          SetForegroundPriority(v46, 1LL);
      }
    }
    else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        7LL);
    }
    if ( v22 )
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
    SetOrClrWF(0, (__int64)a1, 0x210u, 1);
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30);
    *(_QWORD *)(v31 + 16) = v52[0];
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  return 0;
}
