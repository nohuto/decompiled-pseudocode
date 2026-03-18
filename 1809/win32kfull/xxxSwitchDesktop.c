/*
 * XREFs of xxxSwitchDesktop @ 0x1C00D513C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C0094ED0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0094FF8 (xxxSwitchDesktopWithFade.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C00EA398 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C0158694 (RemoteRedrawScreen.c)
 * Callees:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00949D4 (GreLddmProcessDesktopSwitch.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00BA890 (xxxBroadcastDisplaySettingsChange.c)
 *     DwmSyncDesktopSwitch @ 0x1C00BAA10 (DwmSyncDesktopSwitch.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 *     FreeAllSpbs @ 0x1C00EAB30 (FreeAllSpbs.c)
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 *     ResetPointerDevices @ 0x1C01087BC (ResetPointerDevices.c)
 *     SetTimerCoalescingTolerance @ 0x1C010FEE0 (SetTimerCoalescingTolerance.c)
 *     ClearKeyboardStates @ 0x1C0121B00 (ClearKeyboardStates.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     GreDesktopSwitch @ 0x1C012CE2C (GreDesktopSwitch.c)
 *     EraseBitmap @ 0x1C013001C (EraseBitmap.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0133B34 (DrvOcclusionStateChangeNotify.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01E09FC (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r13
  struct tagEDGY_DATA *v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rbx
  HSURF v19; // rcx
  Edgy *v20; // rcx
  struct tagWND **v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 **v29; // rax
  __int64 v30; // rbx
  void *v31; // rax
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // eax
  __int64 i; // rbx
  __int64 v36; // rsi
  __int64 v37; // r14
  int v38; // r8d
  int WindowCloakState; // eax
  int v40; // edx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *j; // rbx
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int ObjectType; // [rsp+20h] [rbp-B9h]
  int v58; // [rsp+50h] [rbp-89h]
  void *Handle; // [rsp+58h] [rbp-81h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-79h]
  _QWORD v61[2]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v62[3]; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v63[3]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v64[3]; // [rsp+B0h] [rbp-29h] BYREF
  _QWORD v65[3]; // [rsp+C8h] [rbp-11h] BYREF
  _QWORD v66[10]; // [rsp+E0h] [rbp+7h] BYREF
  unsigned int v67; // [rsp+148h] [rbp+6Fh]

  v4 = 0;
  v5 = a4;
  v8 = a1;
  Handle = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v8 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v8 + 32) & 4) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(v8 + 24);
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_BYTE *)(v8 + 32) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    LockObjectAssignment(&gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, v66, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, v65, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 456LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v13 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v62[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v62;
    v62[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v56, v55);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v11 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        v61[0] = grpdeskRitInput + 88LL;
        v61[1] = *(_QWORD *)(gpqForeground + 120LL);
        HMAssignmentLock(v61);
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0x20u);
      }
    }
    if ( grpdeskRitInput )
    {
      v14 = (_QWORD *)(grpdeskRitInput + 168LL);
      v15 = *(_QWORD **)(grpdeskRitInput + 168LL);
      if ( (_QWORD *)*v14 != v14 )
      {
        do
        {
          v16 = *(v15 - 39);
          v17 = *(_DWORD *)(v16 + 388);
          if ( (v17 & 1) != 0 )
          {
            PostUpdateKeyStateEvent(*(v15 - 39), v11, v12);
            v17 = *(_DWORD *)(v16 + 388);
          }
          *(_DWORD *)(v16 + 388) = v17 & 0xFFFFFEFF;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 != v14 );
        v4 = 0;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 6);
          v18 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v18);
          GreUnlockDynamicModeChange(v18);
          v19 = *(HSURF *)(v8 + 88);
          if ( v19 )
            EraseBitmap(v19);
          v4 = 1;
        }
        if ( grpdeskRitInput )
        {
          v20 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v20 )
            Edgy::FreeEdgyFrameData(v20, v11);
        }
      }
    }
    v5 = a4;
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v21 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v21 + 16) & 1) != 0 )
    ComposeWindow(v21[3], 5);
  FreeAllSpbs();
  v23 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v23 >= 0 )
  {
    v24 = *(_QWORD *)(v10 + 16);
    v25 = *(_QWORD *)(v10 + 24);
    if ( *(_QWORD *)(v24 + 432) != v25 )
    {
      AllocQueue(0LL, v25);
      ++*(_DWORD *)(*(_QWORD *)(v10 + 24) + 392LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v10 + 16), *(struct tagQ **)(v10 + 24));
      v24 = *(_QWORD *)(v10 + 16);
    }
    v58 = zzzSetDesktop((struct tagTHREADINFO *)v24, a2, 0LL);
    v23 = v58;
    if ( v58 >= 0 )
    {
      v28 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v28 + 64) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v28, v22, v26, v27);
        v29 = *(__int64 ***)(a2 + 8);
        v30 = **v29;
        v31 = (void *)UserReferenceDwmApiPort(*v29);
        DwmSyncDesktopSwitch(v31, v30, v5);
        EnterCrit(0LL, 1LL);
      }
      if ( !v4 || (v32 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v32 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1,
        v32,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0);
        SetPointer(1);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0);
      }
      v33 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      v63[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v63;
      v63[1] = v33;
      if ( v33 )
        _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v34 = 8, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v34 = 0;
      v67 = v34 | (4 * (unsigned __int8)*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL)) & 4 | 1;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v67);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v67);
      i = *(_QWORD *)(a2 + 88);
      if ( !i
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i + gSharedInfo[1] + 25LL) & 1) != 0
        || (*(_BYTE *)(*(_QWORD *)(i + 40) + 234LL) & 0x20) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 88)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL)
        && (GetWindowCloakState(i) & 1) != 0 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 88LL); i; i = *(_QWORD *)(i + 64) )
        {
          v36 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL);
          v37 = *(_QWORD *)(*(_QWORD *)(i + 16) + 424LL);
          if ( !IsNonImmersiveBand(i) || v36 == v37 || (*(_BYTE *)(*(_QWORD *)(i + 40) + 234LL) & 0x20) != 0 )
          {
            WindowCloakState = GetWindowCloakState(i);
            if ( v36 != v37 || (v40 = 1, (WindowCloakState & 1) == 0) )
              v40 = 0;
            if ( WindowCloakState || (v41 = 0, (*(_BYTE *)(*(_QWORD *)(i + 40) + 27LL) & 8) != 0) )
              v41 = 1;
            if ( v40 || (v38 = 0, v41) )
              v38 = 1;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x18) == 0x10 && !v38 )
            break;
        }
      }
      HMAssignmentUnlock(a2 + 88);
      if ( i )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0, i, 0x707u, 1);
          SetOrClrWF(1, i, 0x701u, 1);
        }
        v64[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v64;
        v64[1] = i;
        _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
        xxxSetForegroundWindow2((struct tagWND *)i, gptiCurrent, 0x20u);
        ThreadUnlock1(v53, v52);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u);
      }
      ThreadUnlock1(v43, v42);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v45 = *(j - 39);
        v46 = *(_DWORD *)(v45 + 388);
        if ( (v46 & 0x100) == 0 )
        {
          *(_DWORD *)(v45 + 388) = v46 | 0x101;
          memset((void *)(v45 + 196), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v45, v47, v48);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6u);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v49 = *(_DWORD *)(a2 + 48);
      if ( (v49 & 0x20) != 0 )
      {
        v54 = *(_QWORD *)(a2 + 8);
        if ( v54 )
        {
          if ( *(_QWORD *)(v54 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v49 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
      v23 = v58;
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v65, v22);
  PopAndFreeW32ThreadLock((__int64)v66, v50);
  return (unsigned int)v23;
}
