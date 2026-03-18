/*
 * XREFs of xxxSwitchDesktop @ 0x1C0137CE8
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 *     xxxSwitchDesktopWithFade @ 0x1C0101AF0 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C010E540 (RemoteDisableScreen.c)
 *     NtUserSwitchDesktop @ 0x1C013AE20 (NtUserSwitchDesktop.c)
 *     RemoteRedrawScreen @ 0x1C0160EE8 (RemoteRedrawScreen.c)
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00111D0 (xxxBroadcastDisplaySettingsChange.c)
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0021E80 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     zzzSetDesktop @ 0x1C0029750 (zzzSetDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C0079FE0 (IPostQuitMessage.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     SetTimerCoalescingTolerance @ 0x1C00F4E70 (SetTimerCoalescingTolerance.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C013951C (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardStates @ 0x1C0139560 (ClearKeyboardStates.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C01395E0 (GreLddmProcessDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C0139704 (GreDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C01397D0 (FreeAllSpbs.c)
 *     WPP_RECORDER_SF_SL @ 0x1C0139800 (WPP_RECORDER_SF_SL.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     DwmSyncDesktopSwitch @ 0x1C0139A94 (DwmSyncDesktopSwitch.c)
 *     EraseBitmap @ 0x1C0139B80 (EraseBitmap.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     ResetPointerDevices @ 0x1C0139DC0 (ResetPointerDevices.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     WPP_RECORDER_SF_S @ 0x1C0139F20 (WPP_RECORDER_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01F69FC (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _UNKNOWN **v9; // rcx
  __int64 NameInfo; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v23; // r8
  ULONG_PTR v24; // rcx
  __int128 *v25; // rdx
  _QWORD *i; // rsi
  __int128 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 *v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rcx
  Edgy *v34; // rcx
  struct tagWND **v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r15d
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  BOOL v44; // r8d
  __int64 v45; // rcx
  int v46; // ebx
  unsigned int v47; // ebx
  _QWORD *v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // r14
  BOOL v51; // r8d
  int WindowCloakState; // eax
  BOOL v53; // edx
  BOOL v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *j; // rsi
  __int128 *v59; // rbx
  __int128 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int128 *v63; // rcx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // edx
  int v71; // ecx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  int ObjectType; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-A8h]
  __int128 v85; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h]
  __int64 v90; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v91; // [rsp+A0h] [rbp-60h]
  __int64 v92; // [rsp+A8h] [rbp-58h]
  __int128 v93; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  __int128 v95; // [rsp+D0h] [rbp-30h]
  __int64 v96; // [rsp+E0h] [rbp-20h]
  _QWORD v97[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v98[3]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v99; // [rsp+120h] [rbp+20h]
  __int64 v100; // [rsp+130h] [rbp+30h]
  __int128 v101; // [rsp+138h] [rbp+38h]
  __int64 v102; // [rsp+148h] [rbp+48h]
  _QWORD v103[8]; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0;
  BugCheckParameter3 = 0LL;
  v90 = 0LL;
  v5 = a2;
  v91 = 0LL;
  v6 = a1;
  v92 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  memset(v98, 0, sizeof(v98));
  v7 = gptiCurrent;
  memset(v97, 0, sizeof(v97));
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v6 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v6 + 32) & 4) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(v6 + 24);
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    NameInfo = ObQueryNameInfo(a2);
    if ( NameInfo )
      NameInfo = ObQueryNameInfo(v5) + 8;
    if ( NameInfo )
    {
      v14 = ObQueryNameInfo(v5);
      if ( v14 )
        v14 = ObQueryNameInfo(v5) + 8;
      v15 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      LODWORD(v15) = 0;
    }
    WPP_RECORDER_SF_SL(v15, v11, v12, v13);
    v9 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = ObQueryNameInfo(v5);
    if ( v16 )
      v16 = ObQueryNameInfo(v5) + 8;
    if ( v16 )
    {
      v20 = ObQueryNameInfo(v5);
      if ( v20 )
        v20 = ObQueryNameInfo(v5) + 8;
      v21 = *(_QWORD *)(v20 + 8);
    }
    else
    {
      LODWORD(v21) = 0;
    }
    WPP_RECORDER_SF_S(v21, v17, v18, v19);
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)v5 != gspdeskDisconnect && !PsIsSystemThread(CurrentThread) && (PVOID)v5 != grpdeskLogon )
  {
    LOBYTE(v9) = (*(_BYTE *)(v6 + 32) & 1) != 0;
    if ( ((unsigned __int8)v9 & ((a3 & 2) == 0)) != 0 )
    {
      ThreadProcessId = PsGetThreadProcessId(CurrentThread);
      LODWORD(v9) = gpidLogon;
      if ( ThreadProcessId != (HANDLE)gpidLogon )
        return 3221225506LL;
    }
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)v5 != gspdeskDisconnect) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)v9, a2, 8, 28, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v5);
    return 0LL;
  }
  PushW32ThreadLock(v5, v98, UserDereferenceObject);
  ObfReferenceObject((PVOID)v5);
  ObOpenObjectByPointer(
    (PVOID)v5,
    0x200u,
    0LL,
    0x1F0003u,
    (POBJECT_TYPE)ExDesktopObjectType,
    0,
    (PHANDLE)&BugCheckParameter3);
  PushW32ThreadLock(BugCheckParameter3, v97, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 448LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v24 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v78 = *(_QWORD *)(gptiCurrent + 408LL);
    v94 = 0LL;
    *(_QWORD *)&v93 = v78;
    *(_QWORD *)(gptiCurrent + 408LL) = &v93;
    *((_QWORD *)&v93 + 1) = v24;
    HMLockObject(v24);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v80, v79, v81);
  }
  v25 = (__int128 *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) && gpqForeground )
    {
      *((_QWORD *)&v95 + 1) = *(_QWORD *)(gpqForeground + 128LL);
      *(_QWORD *)&v95 = grpdeskRitInput + 88LL;
      v85 = v95;
      HMAssignmentLock(&v85);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 32);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v27 = (__int128 *)*(i - 39);
        v25 = (__int128 *)gObjDummyLock;
        v28 = *((_QWORD *)v27 + 13);
        if ( v28 )
          v25 = (__int128 *)(v28 + 384);
        v29 = *((_QWORD *)v27 + 12);
        v30 = (__int128 *)gObjDummyLock;
        if ( v29 )
          v30 = (__int128 *)(v29 + 384);
        v31 = *((_DWORD *)v27 + 99);
        v86 = *((_QWORD *)&gpsiLock + 2);
        v96 = *((_QWORD *)v27 + 2);
        v100 = *((_QWORD *)v30 + 2);
        v102 = *((_QWORD *)v25 + 2);
        v85 = gpsiLock;
        v95 = *v27;
        v99 = *v30;
        v101 = *v25;
        if ( (v31 & 1) != 0 )
        {
          PostUpdateKeyStateEvent(v27, v25, v23);
          v31 = *((_DWORD *)v27 + 99);
        }
        *((_DWORD *)v27 + 99) = v31 & 0xFFFFFEFF;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 6);
          v32 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v32);
          GreUnlockDynamicModeChange(v32);
          v33 = *(_QWORD *)(v6 + 88);
          if ( v33 )
            EraseBitmap(v33);
          v3 = 1;
        }
        if ( grpdeskRitInput )
        {
          v34 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v34 )
            Edgy::FreeEdgyFrameData(v34, (struct tagEDGY_DATA *)v25);
        }
      }
      v7 = gptiCurrent;
    }
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v103);
  LockObjectAssignment(grpdeskRitInput, v5);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v35 = *(struct tagWND ***)(v5 + 8);
  if ( (*((_DWORD *)*v35 + 16) & 1) != 0 )
    ComposeWindow(v35[3], 5);
  FreeAllSpbs();
  v38 = zzzSetDesktop(gptiRit, v5, 0LL);
  if ( v38 >= 0 )
  {
    v39 = *(_QWORD *)(v8 + 16);
    v40 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(v39 + 424) != v40 )
    {
      AllocQueue(0LL, v40);
      ++*(_DWORD *)(*(_QWORD *)(v8 + 24) + 400LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v8 + 16), *(struct tagQ **)(v8 + 24), 0LL, 0);
      v39 = *(_QWORD *)(v8 + 16);
    }
    v38 = zzzSetDesktop((struct tagTHREADINFO *)v39, v5, 0LL);
    if ( v38 >= 0 )
    {
      v41 = *(_QWORD *)(v5 + 8);
      v42 = *(unsigned int *)(*(_QWORD *)v41 + 64LL);
      if ( (v42 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v42);
        v43 = (void *)UserReferenceDwmApiPort();
        DwmSyncDesktopSwitch(v43);
        EnterCrit(0LL, 1LL);
        v41 = *(_QWORD *)(v5 + 8);
      }
      v44 = v3 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(*(_QWORD *)v41 + 64LL) & 1,
        v44,
        **(_QWORD **)v41,
        ObjectType);
      if ( v3 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1, 0LL);
      }
      v45 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
      v87 = *(_QWORD *)(v7 + 408);
      *(_QWORD *)(v7 + 408) = &v87;
      v88 = v45;
      if ( v45 )
        HMLockObject(v45);
      GreLddmProcessDesktopSwitch();
      if ( !v3 || (v46 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v46 = 1;
      v47 = (4 * (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1)) | v46;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v47);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v47);
      v48 = *(_QWORD **)(v5 + 88);
      if ( !v48
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v5 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(v48[5] + 234LL) & 0x20) != 0 && (GetWindowCloakState(v48) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL) == *(_QWORD *)(v48[2] + 416LL)
        && (GetWindowCloakState(v48) & 1) != 0 )
      {
        v48 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) + 112LL);
        if ( v48 )
        {
          do
          {
            v49 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL);
            v50 = *(_QWORD *)(v48[2] + 416LL);
            if ( !IsNonImmersiveBand((__int64)v48) || v49 == v50 || (*(_BYTE *)(v48[5] + 234LL) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v48);
              v53 = v49 == v50 && (WindowCloakState & 1) != 0;
              v54 = WindowCloakState || (*(_BYTE *)(v48[5] + 27LL) & 8) != 0;
              v51 = v53 || v54;
            }
            if ( (*(_BYTE *)(v48[5] + 31LL) & 0x18) == 0x10 && !v51 )
              break;
            v48 = (_QWORD *)v48[11];
          }
          while ( v48 );
          v7 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v5 + 88);
      if ( v48 )
      {
        if ( (*(_BYTE *)(v48[5] + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0, (__int64)v48, 0x707u, 1);
          SetOrClrWF(1, (__int64)v48, 0x701u, 1);
        }
        v90 = *(_QWORD *)(v7 + 408);
        *(_QWORD *)(v7 + 408) = &v90;
        v91 = v48;
        HMLockObject(v48);
        xxxSetForegroundWindow2((__int64)v48, v7, 32);
        ThreadUnlock1(v74, v73, v75);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32);
      }
      ThreadUnlock1(v56, v55, v57);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v59 = (__int128 *)*(j - 39);
        v60 = (__int128 *)gObjDummyLock;
        v61 = *((_QWORD *)v59 + 13);
        if ( v61 )
          v60 = (__int128 *)(v61 + 384);
        v62 = *((_QWORD *)v59 + 12);
        v63 = (__int128 *)gObjDummyLock;
        if ( v62 )
          v63 = (__int128 *)(v62 + 384);
        v64 = *((_DWORD *)v59 + 99);
        v102 = *((_QWORD *)&gpsiLock + 2);
        v100 = *((_QWORD *)v59 + 2);
        v94 = *((_QWORD *)v63 + 2);
        v86 = *((_QWORD *)v60 + 2);
        v101 = gpsiLock;
        v99 = *v59;
        v93 = *v63;
        v85 = *v60;
        if ( (v64 & 0x100) == 0 )
        {
          *((_DWORD *)v59 + 99) = v64 | 0x101;
          memset((char *)v59 + 204, 255, 0x20uLL);
          PostUpdateKeyStateEvent(v59, v65, v66);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0LL, 0, 6);
      if ( (PVOID)v5 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3);
      }
      v67 = *(_DWORD *)(v5 + 48);
      if ( (v67 & 0x20) != 0 )
      {
        v76 = *(_QWORD *)(v5 + 8);
        if ( v76 )
        {
          if ( *(_QWORD *)(v76 + 24) )
          {
            *(_DWORD *)(v5 + 48) = v67 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v5, 1, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v97, v36, v37);
  PopAndFreeW32ThreadLock((__int64)v98, v68, v69);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v70) = 4;
    WPP_RECORDER_SF_D(v71, v70, 3, 29, (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids, v38);
  }
  return (unsigned int)v38;
}
