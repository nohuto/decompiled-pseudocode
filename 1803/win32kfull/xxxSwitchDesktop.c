/*
 * XREFs of xxxSwitchDesktop @ 0x1C00BFEDC
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C00BB240 (RemoteDisableScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00BC2A8 (xxxSwitchDesktopWithFade.c)
 *     NtUserSwitchDesktop @ 0x1C00BC740 (NtUserSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RemoteRedrawScreen @ 0x1C0137D94 (RemoteRedrawScreen.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     zzzCancelJournalling @ 0x1C000BD40 (zzzCancelJournalling.c)
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     DwmSyncDesktopSwitch @ 0x1C0056CA4 (DwmSyncDesktopSwitch.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00636E0 (xxxBroadcastDisplaySettingsChange.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     IPostQuitMessage @ 0x1C00BA650 (IPostQuitMessage.c)
 *     SetTimerCoalescingTolerance @ 0x1C00BC4A0 (SetTimerCoalescingTolerance.c)
 *     ResetPointerDevices @ 0x1C00BCABC (ResetPointerDevices.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C00BCC8C (EraseBitmap.c)
 *     FreeAllSpbs @ 0x1C00BCDA0 (FreeAllSpbs.c)
 *     GreDesktopSwitch @ 0x1C00BCDD0 (GreDesktopSwitch.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00BCE88 (GreLddmProcessDesktopSwitch.c)
 *     ClearKeyboardStates @ 0x1C00BCF50 (ClearKeyboardStates.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C00BCFB0 (DrvOcclusionStateChangeNotify.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BDA20 (xxxRefreshDisplayOrientation.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01BDE58 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r12d
  int v5; // r15d
  __int64 v8; // rsi
  __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r13
  struct tagEDGY_DATA *v12; // rdx
  ULONG_PTR v13; // rcx
  _QWORD *v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rbx
  HBRUSH v19; // rcx
  Edgy *v20; // rcx
  struct tagWND **v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 **v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // r14
  int v41; // edx
  int WindowCloakState; // eax
  int v43; // edx
  _BYTE *v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *i; // rbx
  __int64 v50; // r14
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int ObjectType; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+50h] [rbp-B0h]
  void *Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h]
  PETHREAD Thread; // [rsp+68h] [rbp-98h]
  __int128 v67; // [rsp+70h] [rbp-90h]
  __int128 v68; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v69[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v70[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v71[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v72[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v73[10]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v74; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v5 = a4;
  v8 = a1;
  v9 = gptiCurrent;
  Handle = 0LL;
  v65 = gptiCurrent;
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
  v11 = *(_QWORD *)(v8 + 24);
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
  PushW32ThreadLock(a2, v73, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, v72, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 448LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v13 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v69[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v69;
    v69[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v60, v59, v61);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v12 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        *(_QWORD *)&v67 = grpdeskRitInput + 88LL;
        *((_QWORD *)&v67 + 1) = *(_QWORD *)(gpqForeground + 120LL);
        v68 = v67;
        HMAssignmentLock(&v68);
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0x20u, 0);
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
          v16 = *(v15 - 38);
          v17 = *(_DWORD *)(v16 + 388);
          if ( (v17 & 1) != 0 )
          {
            PostUpdateKeyStateEvent(*(v15 - 38));
            v17 = *(_DWORD *)(v16 + 388);
          }
          *(_DWORD *)(v16 + 388) = v17 & 0xFFFFFEFF;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 != v14 );
        v9 = v65;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
          v18 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v18);
          GreUnlockDynamicModeChange(v18);
          v19 = *(HBRUSH *)(v8 + 88);
          if ( v19 )
            EraseBitmap(v19);
          v4 = 1;
        }
        if ( grpdeskRitInput )
        {
          v20 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v20 )
            Edgy::FreeEdgyFrameData(v20, v12);
        }
      }
    }
    v5 = a4;
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v21 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v21 + 13) & 1) != 0 )
    ComposeWindow(v21[3]);
  FreeAllSpbs();
  v22 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v22 >= 0 )
  {
    v23 = *(_QWORD *)(v11 + 16);
    v24 = *(_QWORD *)(v11 + 24);
    if ( *(_QWORD *)(v23 + 424) != v24 )
    {
      AllocQueue(0LL, v24);
      ++*(_DWORD *)(*(_QWORD *)(v11 + 24) + 392LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v11 + 16), *(struct tagQ **)(v11 + 24), 0LL, 0);
      v23 = *(_QWORD *)(v11 + 16);
    }
    v63 = zzzSetDesktop((struct tagTHREADINFO *)v23, a2, 0LL);
    v22 = v63;
    if ( v63 >= 0 )
    {
      v28 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v28 + 52) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v28, v25, v26, v27);
        v29 = *(__int64 ***)(a2 + 8);
        v30 = **v29;
        v34 = (void *)UserReferenceDwmApiPort(*v29, v31, v32, v33);
        DwmSyncDesktopSwitch(v34, v30, v5);
        EnterCrit(0LL, 1LL);
      }
      if ( !v4 || (v35 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0) )
        v35 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1,
        v35,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1, 0);
      }
      v36 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      v70[0] = *(_QWORD *)(v9 + 408);
      *(_QWORD *)(v9 + 408) = v70;
      v70[1] = v36;
      if ( v36 )
        _InterlockedAdd((volatile signed __int32 *)(v36 + 8), 1u);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v37 = 8, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0) )
        v37 = 0;
      v74 = v37 | (4 * (unsigned __int8)*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL)) & 4 | 1;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v74);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v74);
      v38 = *(_QWORD *)(a2 + 88);
      if ( !v38
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v38 + gSharedInfo[1] + 25LL) & 1) != 0
        || (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 234LL) & 0x20) != 0
        && (GetWindowCloakState(*(_QWORD **)(a2 + 88)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*(_QWORD *)(v38 + 16) + 416LL)
        && (GetWindowCloakState((_QWORD *)v38) & 1) != 0 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 88LL);
        if ( v38 )
        {
          do
          {
            v39 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL);
            v40 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 416LL);
            if ( IsNonImmersiveBand(v38) && v39 != v40 )
            {
              v44 = *(_BYTE **)(v38 + 40);
              if ( (v44[234] & 0x20) == 0 )
                goto LABEL_68;
            }
            WindowCloakState = GetWindowCloakState((_QWORD *)v38);
            if ( v39 != v40 || (v43 = 1, (WindowCloakState & 1) == 0) )
              v43 = 0;
            v44 = *(_BYTE **)(v38 + 40);
            if ( WindowCloakState || (v45 = 0, (v44[27] & 8) != 0) )
              v45 = 1;
            if ( v43 || (v41 = 0, v45) )
              v41 = 1;
LABEL_68:
            if ( (v44[31] & 0x18) == 0x10 && !v41 )
              break;
            v38 = *(_QWORD *)(v38 + 64);
          }
          while ( v38 );
          v9 = v65;
        }
      }
      HMAssignmentUnlock(a2 + 88);
      if ( v38 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0LL, v38, 1799LL, 1LL);
          SetOrClrWF(1LL, v38, 1793LL, 1LL);
        }
        v71[0] = *(_QWORD *)(v9 + 408);
        *(_QWORD *)(v9 + 408) = v71;
        v71[1] = v38;
        _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
        xxxSetForegroundWindow2((struct tagWND *)v38, v9, 0x20u, 0);
        ThreadUnlock1(v56, v55, v57);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u, 0);
      }
      ThreadUnlock1(v47, v46, v48);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v50 = *(i - 38);
        v51 = *(_DWORD *)(v50 + 388);
        if ( (v51 & 0x100) == 0 )
        {
          *(_DWORD *)(v50 + 388) = v51 | 0x101;
          memset((void *)(v50 + 196), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v50);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3);
      }
      v52 = *(_DWORD *)(a2 + 48);
      if ( (v52 & 0x20) != 0 )
      {
        v58 = *(_QWORD *)(a2 + 8);
        if ( v58 )
        {
          if ( *(_QWORD *)(v58 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v52 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      xxxRefreshDisplayOrientation();
      v22 = v63;
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v72);
  PopAndFreeW32ThreadLock((__int64)v73, v53);
  return (unsigned int)v22;
}
