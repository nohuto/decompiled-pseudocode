/*
 * XREFs of xxxSwitchDesktop @ 0x1C0081EE8
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C0080F50 (NtUserSwitchDesktop.c)
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 *     xxxSwitchDesktopWithFade @ 0x1C012732C (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C0133A40 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C001A060 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     WPP_RECORDER_SF_S @ 0x1C00814B4 (WPP_RECORDER_SF_S.c)
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     ResetPointerDevices @ 0x1C0081690 (ResetPointerDevices.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     EraseBitmap @ 0x1C0081880 (EraseBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0083110 (DrvOcclusionStateChangeNotify.c)
 *     ClearKeyboardStates @ 0x1C0083154 (ClearKeyboardStates.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00831D4 (GreLddmProcessDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C00832F8 (GreDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C00833C0 (FreeAllSpbs.c)
 *     WPP_RECORDER_SF_SL @ 0x1C00833F0 (WPP_RECORDER_SF_SL.c)
 *     DwmSyncDesktopSwitch @ 0x1C00834D0 (DwmSyncDesktopSwitch.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C00DA2F0 (IPostQuitMessage.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0115C40 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C011AE60 (SetTimerCoalescingTolerance.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01F6CAC (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  _UNKNOWN **v10; // rcx
  __int64 NameInfo; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  const wchar_t *v22; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v24; // r9
  ULONG_PTR v25; // rcx
  __int128 *v26; // rdx
  _QWORD *i; // rsi
  __int128 *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 *v31; // rcx
  int v32; // eax
  __int64 v33; // rbx
  HBRUSH v34; // rcx
  Edgy *v35; // rcx
  struct tagWND **v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r9
  int v39; // r15d
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  BOOL v45; // r8d
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ebx
  unsigned int v50; // ebx
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // r8
  int WindowCloakState; // eax
  BOOL v57; // edx
  BOOL v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  _QWORD *j; // rsi
  __int128 *v63; // rbx
  __int128 *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int128 *v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int ObjectType; // [rsp+20h] [rbp-E0h]
  int ObjectTypea; // [rsp+20h] [rbp-E0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  PETHREAD Thread; // [rsp+58h] [rbp-A8h]
  __int128 v89; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  __int64 v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-60h]
  __int64 v96; // [rsp+A8h] [rbp-58h]
  __int128 v97; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+E0h] [rbp-20h]
  _QWORD v101[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v102[3]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v103; // [rsp+120h] [rbp+20h]
  __int64 v104; // [rsp+130h] [rbp+30h]
  __int128 v105; // [rsp+138h] [rbp+38h]
  __int64 v106; // [rsp+148h] [rbp+48h]
  _QWORD v107[8]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0;
  BugCheckParameter3 = 0LL;
  v94 = 0LL;
  v6 = a2;
  v95 = 0LL;
  v7 = a1;
  v96 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  memset(v102, 0, sizeof(v102));
  v8 = gptiCurrent;
  memset(v101, 0, sizeof(v101));
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v7 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v7 + 32) & 4) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(v7 + 24);
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    NameInfo = ObQueryNameInfo(a2);
    if ( NameInfo )
      NameInfo = ObQueryNameInfo(v6) + 8;
    if ( NameInfo )
    {
      v15 = ObQueryNameInfo(v6);
      if ( v15 )
        v15 = ObQueryNameInfo(v6) + 8;
      v16 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      LODWORD(v16) = 0;
    }
    WPP_RECORDER_SF_SL(v16, v12, v13, v14);
    v10 = &WPP_RECORDER_INITIALIZED;
  }
  if ( grpdeskRitInput && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = ObQueryNameInfo(v6);
    if ( v17 )
      v17 = ObQueryNameInfo(v6) + 8;
    if ( v17 )
    {
      v21 = ObQueryNameInfo(v6);
      if ( v21 )
        v21 = ObQueryNameInfo(v6) + 8;
      v22 = *(const wchar_t **)(v21 + 8);
    }
    else
    {
      v22 = 0LL;
    }
    WPP_RECORDER_SF_S((__int64)v22, v18, v19, v20, ObjectType, v22);
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)v6 != gspdeskDisconnect && !PsIsSystemThread(CurrentThread) && (PVOID)v6 != grpdeskLogon )
  {
    LOBYTE(v10) = (*(_BYTE *)(v7 + 32) & 1) != 0;
    if ( ((unsigned __int8)v10 & ((a3 & 2) == 0)) != 0 )
    {
      ThreadProcessId = PsGetThreadProcessId(CurrentThread);
      LODWORD(v10) = gpidLogon;
      if ( ThreadProcessId != (HANDLE)gpidLogon )
        return 3221225506LL;
    }
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)v6 != gspdeskDisconnect) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_((_DWORD)v10, a2, 8, 28, (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v6);
    return 0LL;
  }
  PushW32ThreadLock(v6, v102, UserDereferenceObject, a4);
  ObfReferenceObject((PVOID)v6);
  ObOpenObjectByPointer(
    (PVOID)v6,
    0x200u,
    0LL,
    0x1F0003u,
    (POBJECT_TYPE)ExDesktopObjectType,
    0,
    (PHANDLE)&BugCheckParameter3);
  PushW32ThreadLock(BugCheckParameter3, v101, (__int64)AllowDesktopDestruction, v24);
  if ( *(_QWORD *)(gptiCurrent + 448LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v25 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v80 = *(_QWORD *)(gptiCurrent + 408LL);
    v98 = 0LL;
    *(_QWORD *)&v97 = v80;
    *(_QWORD *)(gptiCurrent + 408LL) = &v97;
    *((_QWORD *)&v97 + 1) = v25;
    HMLockObject(v25);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v82, v81, v83);
  }
  v26 = (__int128 *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) && gpqForeground )
    {
      *((_QWORD *)&v99 + 1) = *(_QWORD *)(gpqForeground + 128LL);
      *(_QWORD *)&v99 = grpdeskRitInput + 88LL;
      v89 = v99;
      HMAssignmentLock(&v89);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 32);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v28 = (__int128 *)*(i - 39);
        v26 = (__int128 *)gObjDummyLock;
        v29 = *((_QWORD *)v28 + 13);
        if ( v29 )
          v26 = (__int128 *)(v29 + 384);
        v30 = *((_QWORD *)v28 + 12);
        v31 = (__int128 *)gObjDummyLock;
        if ( v30 )
          v31 = (__int128 *)(v30 + 384);
        v32 = *((_DWORD *)v28 + 99);
        v90 = *((_QWORD *)&gpsiLock + 2);
        v100 = *((_QWORD *)v28 + 2);
        v104 = *((_QWORD *)v31 + 2);
        v106 = *((_QWORD *)v26 + 2);
        v89 = gpsiLock;
        v99 = *v28;
        v103 = *v31;
        v105 = *v26;
        if ( (v32 & 1) != 0 )
        {
          PostUpdateKeyStateEvent(v28, v26);
          v32 = *((_DWORD *)v28 + 99);
        }
        *((_DWORD *)v28 + 99) = v32 & 0xFFFFFEFF;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 6);
          v33 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v33);
          GreUnlockDynamicModeChange(v33);
          v34 = *(HBRUSH *)(v7 + 88);
          if ( v34 )
            EraseBitmap(v34);
          v4 = 1;
        }
        if ( grpdeskRitInput )
        {
          v35 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v35 )
            Edgy::FreeEdgyFrameData(v35, (struct tagEDGY_DATA *)v26);
        }
      }
      v8 = gptiCurrent;
    }
  }
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v107);
  LockObjectAssignment(grpdeskRitInput, v6);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v36 = *(struct tagWND ***)(v6 + 8);
  if ( (*((_DWORD *)*v36 + 16) & 1) != 0 )
    ComposeWindow(v36[3], 5);
  FreeAllSpbs();
  v39 = zzzSetDesktop(gptiRit, v6, 0LL, v37);
  if ( v39 >= 0 )
  {
    v40 = *(_QWORD *)(v9 + 16);
    v41 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(v40 + 424) != v41 )
    {
      AllocQueue(0LL, v41);
      ++*(_DWORD *)(*(_QWORD *)(v9 + 24) + 400LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v9 + 16), *(struct tagQ **)(v9 + 24), 0LL, 0);
      v40 = *(_QWORD *)(v9 + 16);
    }
    v39 = zzzSetDesktop((struct tagTHREADINFO *)v40, v6, 0LL, v38);
    if ( v39 >= 0 )
    {
      v42 = *(_QWORD *)(v6 + 8);
      v43 = *(unsigned int *)(*(_QWORD *)v42 + 64LL);
      if ( (v43 & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v43);
        v44 = (void *)UserReferenceDwmApiPort();
        DwmSyncDesktopSwitch(v44);
        EnterCrit(0LL, 1LL);
        v42 = *(_QWORD *)(v6 + 8);
      }
      v45 = v4 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(*(_QWORD *)v42 + 64LL) & 1,
        v45,
        **(_QWORD **)v42,
        ObjectTypea);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1, 0LL, v46, v47);
      }
      v48 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL);
      v91 = *(_QWORD *)(v8 + 408);
      *(_QWORD *)(v8 + 408) = &v91;
      v92 = v48;
      if ( v48 )
        HMLockObject(v48);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v49 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v49 = 1;
      v50 = (4 * (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1)) | v49;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v50);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v6 + 8) + 24LL), 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v50);
      v51 = *(_QWORD *)(v6 + 88);
      if ( !v51
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v6 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 234LL) & 0x20) != 0 && (GetWindowCloakState(v51, v78, v79) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL) == *(_QWORD *)(*(_QWORD *)(v51 + 16) + 416LL)
        && (GetWindowCloakState(v51, v78, v79) & 1) != 0 )
      {
        v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
        if ( v51 )
        {
          do
          {
            v52 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 176LL);
            v53 = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 416LL);
            if ( !IsNonImmersiveBand(v51) || v52 == v53 || (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 234LL) & 0x20) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v51, v54, v55);
              v57 = v52 == v53 && (WindowCloakState & 1) != 0;
              v58 = WindowCloakState || (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 27LL) & 8) != 0;
              LODWORD(v55) = v57 || v58;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 31LL) & 0x18) == 0x10 && !(_DWORD)v55 )
              break;
            v51 = *(_QWORD *)(v51 + 88);
          }
          while ( v51 );
          v8 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v6 + 88);
      if ( v51 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 23LL) & 7) == 4 )
        {
          SetOrClrWF(0, v51, 0x707u, 1);
          SetOrClrWF(1, v51, 0x701u, 1);
        }
        v94 = *(_QWORD *)(v8 + 408);
        *(_QWORD *)(v8 + 408) = &v94;
        v95 = v51;
        HMLockObject(v51);
        xxxSetForegroundWindow2((struct tagWND *)v51, v8, 32);
        ThreadUnlock1(v74, v73, v75);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32);
      }
      ThreadUnlock1(v60, v59, v61);
      ClearKeyboardStates();
      for ( j = *(_QWORD **)(grpdeskRitInput + 168LL); j != (_QWORD *)(grpdeskRitInput + 168LL); j = (_QWORD *)*j )
      {
        v63 = (__int128 *)*(j - 39);
        v64 = (__int128 *)gObjDummyLock;
        v65 = *((_QWORD *)v63 + 13);
        if ( v65 )
          v64 = (__int128 *)(v65 + 384);
        v66 = *((_QWORD *)v63 + 12);
        v67 = (__int128 *)gObjDummyLock;
        if ( v66 )
          v67 = (__int128 *)(v66 + 384);
        v68 = *((_DWORD *)v63 + 99);
        v106 = *((_QWORD *)&gpsiLock + 2);
        v104 = *((_QWORD *)v63 + 2);
        v98 = *((_QWORD *)v67 + 2);
        v90 = *((_QWORD *)v64 + 2);
        v105 = gpsiLock;
        v103 = *v63;
        v97 = *v67;
        v89 = *v64;
        if ( (v68 & 0x100) == 0 )
        {
          *((_DWORD *)v63 + 99) = v68 | 0x101;
          memset((char *)v63 + 204, 255, 0x20uLL);
          PostUpdateKeyStateEvent(v63, v69);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 6);
      if ( (PVOID)v6 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v70 = *(_DWORD *)(v6 + 48);
      if ( (v70 & 0x20) != 0 )
      {
        v76 = *(_QWORD *)(v6 + 8);
        if ( v76 )
        {
          if ( *(_QWORD *)(v76 + 24) )
          {
            *(_DWORD *)(v6 + 48) = v70 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v6, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    }
  }
  PopAndFreeAlwaysW32ThreadLock(v101);
  PopAndFreeW32ThreadLock(v102);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)AccessMode = v39;
    WPP_RECORDER_SF_D(
      v71,
      4u,
      3u,
      0x1Du,
      (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids,
      *(_QWORD *)AccessMode);
  }
  return (unsigned int)v39;
}
