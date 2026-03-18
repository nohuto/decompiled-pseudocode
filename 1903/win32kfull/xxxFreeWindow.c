/*
 * XREFs of xxxFreeWindow @ 0x1C00988D4
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C000B3CC (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C000C230 (CleanupIAMAccess.c)
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C001001C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001B54C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DwmAsyncChildDestroy @ 0x1C0095A88 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C0095C18 (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C0096C5C (xxxRemoveShadow.c)
 *     xxxRemoveFullScreen @ 0x1C0097200 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 *     MagpFindThreadContext @ 0x1C009734C (MagpFindThreadContext.c)
 *     DestroyWindowsTimers @ 0x1C0097364 (DestroyWindowsTimers.c)
 *     ClearSendMessages @ 0x1C00973B0 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0097580 (GreDeleteSpriteOverlapPresent.c)
 *     DereferenceClass @ 0x1C0097690 (DereferenceClass.c)
 *     FreeClientOnWindowDestruction @ 0x1C0098170 (FreeClientOnWindowDestruction.c)
 *     _FindActivationFilterWindow @ 0x1C0098210 (_FindActivationFilterWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0098244 (UpdatePointerRedirIsAlive.c)
 *     FreeWindowMessageFilter @ 0x1C009828C (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C00982D8 (FreeWindowGCData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C009E590 (FindQMsg.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00AF848 (xxxClientFreeWindowClassExtraBytes.c)
 *     GetClassPtr @ 0x1C00BEAC0 (GetClassPtr.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BFE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C00DA2F0 (IPostQuitMessage.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00DCD20 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DeleteHrgnClip @ 0x1C00EE810 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C00EEB44 (InvalidateDCE.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00EF1A0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0111CB8 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     DecPaintCount @ 0x1C0114AFC (DecPaintCount.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C012D138 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012E2BC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C012FBB0 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C01369EC (xxxResetTooltip.c)
 *     _DeregisterShellHookWindow @ 0x1C013D8E0 (_DeregisterShellHookWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C01CC57C (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFD64 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D75A8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01DA7F0 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4D60 (RemoveSwitchWindowInfo.c)
 *     FindSpb @ 0x1C0208EA4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C020C0EC (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C020D2D0 (xxxDeferredDesktopRotation.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020FC7C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C02105C4 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C02116BC (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271B24 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C0284680 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 **v10; // rcx
  __int64 v11; // rbx
  void *v12; // rax
  struct tagWND **v13; // rcx
  struct tagWND **v14; // rcx
  struct tagWND **v15; // rcx
  __int64 v16; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  struct tagWND **v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD **v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  struct tagWND **v43; // rax
  __int64 v44; // r9
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rbx
  __int64 v51; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct tagSHADOW *v56; // rbx
  struct tagSHADOW **v57; // rcx
  struct tagSHADOW **v58; // rax
  __int64 Prop; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rbx
  TOKEN_TYPE v67; // eax
  void *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *ThreadContext; // rax
  _QWORD *v72; // rbx
  _QWORD *LensContext; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  _QWORD *v76; // rsi
  __int64 v77; // rcx
  _QWORD *v78; // rax
  int v79; // eax
  void *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  _DWORD *v83; // rax
  _DWORD *v84; // rcx
  _DWORD *v85; // rax
  _DWORD *v86; // rcx
  __int64 v87; // rcx
  __int64 QMsg; // rax
  __int64 v89; // rbx
  __int64 v90; // rbx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  EWNDOBJ *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 **v103; // rsi
  __int64 *v104; // rbx
  int v105; // edx
  __int64 v106; // rcx
  __int64 *v107; // rax
  __int64 Spb; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  void *v111; // r8
  void *v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rax
  struct tagWND *v115; // r8
  char *v116; // r14
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  void *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rbx
  __int64 v127; // r8
  __int64 v128; // rcx
  __int64 result; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  _DWORD *v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rcx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  void *v146; // rax
  __int64 v147; // r14
  __int64 v148; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // rax
  void *v155; // rcx
  __int64 v156; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  _QWORD v159[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v160; // [rsp+58h] [rbp-79h] BYREF
  __int64 v161; // [rsp+60h] [rbp-71h]
  __int64 v162; // [rsp+68h] [rbp-69h]
  __int64 v163; // [rsp+70h] [rbp-61h] BYREF
  __int64 v164; // [rsp+78h] [rbp-59h]
  __int64 v165; // [rsp+80h] [rbp-51h]
  __int64 v166; // [rsp+88h] [rbp-49h] BYREF
  __int64 v167; // [rsp+90h] [rbp-41h]
  __int64 v168; // [rsp+98h] [rbp-39h]
  __int128 v169; // [rsp+A8h] [rbp-29h]
  __int128 v170; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v171; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v172; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v173; // [rsp+E8h] [rbp+17h] BYREF
  char v174[16]; // [rsp+F8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v175; // [rsp+140h] [rbp+6Fh] BYREF

  v175 = a2;
  v4 = *((_QWORD *)a1 + 3);
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v6 = 0;
  if ( !v4 )
    goto LABEL_30;
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(v4 + 8) + 168LL) )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v4);
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v7 + 24LL) = 0LL;
    HMAssignmentUnlock(v7 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v10 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
      v11 = **v10;
      v12 = (void *)ReferenceDwmApiPort(v10, v8, v9);
      DwmAsyncShellWindowChange(v12, 0LL, v11);
    }
    v4 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 2) != 0 )
      v6 = 1;
  }
  v13 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 184LL);
  if ( *v13 == a1 )
  {
    HMAssignmentUnlock(v13);
    v4 = *((_QWORD *)a1 + 3);
  }
  v14 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 192LL);
  if ( *v14 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v14);
    v4 = *((_QWORD *)a1 + 3);
  }
  v15 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 200LL);
  if ( *v15 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v4 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v15);
    v4 = *((_QWORD *)a1 + 3);
  }
  v16 = v4 + 304;
  if ( *(struct tagWND **)(v4 + 304) == a1 )
  {
LABEL_17:
    HMAssignmentUnlock(v16);
    goto LABEL_22;
  }
  if ( *(struct tagWND **)(v4 + 328) != a1 )
  {
    v16 = v4 + 296;
    if ( a1 != *(struct tagWND **)(v4 + 296) )
    {
      ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
      v18 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v19 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v19 + 8) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        HMAssignmentUnlock(v18 + 2);
        Win32FreePool(v18);
      }
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v4, 0LL, (struct tagWND *)v4);
LABEL_22:
  v21 = *((_QWORD *)a1 + 3);
  if ( *(struct tagWND **)(v21 + 248) == a1 )
  {
    HMAssignmentUnlock(v21 + 248);
    v21 = *((_QWORD *)a1 + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v21 + 8));
  v22 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 232LL);
  if ( *v22 == a1 )
    HMAssignmentUnlock(v22);
  v23 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v23 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(a1);
    v23 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v23 + 16) & 0x20) != 0 )
  {
    v24 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v24 + 48);
    SetOrClrWF(0, (__int64)a1, 0x20u, 1);
  }
LABEL_30:
  if ( *((_DWORD *)a1 + 65) )
    ScrubDelegatedWindow(a1);
  v25 = *((_QWORD *)a1 + 34);
  if ( v25 )
  {
    v26 = (_QWORD **)(v25 + 8);
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 == v26 )
        break;
      v28 = *v27;
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (v29 = (_QWORD *)v27[1], (_QWORD *)*v29 != v27) )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      Win32FreePool(v27);
    }
    v30 = *((_QWORD *)a1 + 34);
    if ( *(_QWORD *)(v30 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v30 + 96));
      *(_QWORD *)(*((_QWORD *)a1 + 34) + 96LL) = 0LL;
      v30 = *((_QWORD *)a1 + 34);
    }
    Win32FreePool(v30);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  FreeWindowMessageFilter(a1, (unsigned __int64)a2, v4, a4);
  FreeWindowGCData(a1, v31, v32, v33);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v6 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen((__int64)a1);
  v34 = *((_QWORD *)a1 + 5);
  v37 = 0x3FFFLL;
  v35 = *(unsigned __int16 *)(v34 + 42);
  v36 = 672LL;
  LOWORD(v37) = v35 & 0x3FFF;
  if ( ((unsigned __int16)v35 & 0x3FFFu) >= 0x29A && (v35 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v37 > 0x2A0u )
    {
      if ( (unsigned __int16)v37 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
        SfnDWORD(a1, 112LL, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v37 - 4608));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v35 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
    v34 = *((_QWORD *)a1 + 5);
  }
  *(_WORD *)(v34 + 42) |= 0x8000u;
  v38 = *((_QWORD *)a1 + 5);
  v39 = *(_QWORD *)(v38 + 296);
  if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v38 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, (PVOID)(v39 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL)));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v38 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v38, v37, v35, v36) + 780) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(a1, v39);
      }
    }
  }
  v40 = *((_QWORD *)a1 + 15);
  if ( v40 )
  {
    v37 = v40 + 200;
    if ( *(struct tagWND **)(v40 + 200) == a1 )
    {
      v41 = *(_QWORD *)(v40 + 40);
      if ( *(char *)(v41 + 19) < 0 || *(char *)(v41 + 20) < 0 )
        v40 = 0LL;
      *(_QWORD *)&v169 = v37;
      *((_QWORD *)&v169 + 1) = v40;
      v170 = v169;
      HMAssignmentLock(&v170);
      v171 = *(_OWORD *)LockPointer(&v173, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v171);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 776LL) )
    HMAssignmentUnlock(gptiCurrent + 776LL);
  if ( *(struct tagWND **)(gptiCurrent + 1392LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1392LL);
  if ( *(struct tagWND **)(gptiCurrent + 1464LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1464LL);
  v42 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( a1 == *(struct tagWND **)(v42 + 120) )
  {
    HMAssignmentUnlock(v42 + 120);
    v42 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v42 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent((__int64)a1);
      v42 = *(_QWORD *)(gptiCurrent + 424LL);
    }
  }
  if ( a1 == *(struct tagWND **)(v42 + 136) )
  {
    HMAssignmentUnlock(v42 + 136);
    v42 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  if ( a1 == *(struct tagWND **)(v42 + 128) )
  {
    HMAssignmentUnlock(v42 + 128);
    v42 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  if ( a1 == *(struct tagWND **)(v42 + 144) )
  {
    HMAssignmentUnlock(v42 + 144);
    *(_BYTE *)(v42 + 152) = 0;
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v43 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v43 )
  {
    if ( a1 == v43[11] )
    {
      HMAssignmentUnlock(v43 + 11);
      v43 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v43[12] )
    {
      HMAssignmentUnlock(v43 + 12);
      v43 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v43[23] )
    {
      NotifyShell::WindowBorderExitIfEntered(a1, (struct tagWND *)v37);
      v44 = *((_QWORD *)a1 + 3);
      v45 = v44;
      if ( (*(_DWORD *)(v44 + 48) & 0x200) != 0 )
      {
        v46 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v44 + 112));
        v50 = v46;
        v45 = v49;
        if ( v46 )
        {
          v51 = *v46;
          if ( *v46 )
          {
            v163 = 0LL;
            v164 = 0LL;
            v165 = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49);
            v163 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v163;
            v164 = v51;
            HMLockObject(v51);
            xxxResetTooltip(v50);
            ThreadUnlock1(v54, v53, v55);
            v45 = *((_QWORD *)a1 + 3);
          }
        }
      }
      HMAssignmentUnlock(v45 + 184);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
    xxxReleaseCapture();
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
  {
    v56 = gpshadowFirst;
    v57 = &gpshadowFirst;
    while ( v56 )
    {
      v58 = (struct tagSHADOW **)((char *)v56 + 16);
      if ( *((struct tagWND **)v56 + 1) == a1 )
      {
        *v57 = *v58;
        HMAssignmentUnlock(v56);
        HMAssignmentUnlock((char *)v56 + 8);
        Win32FreePool(v56);
        break;
      }
      v56 = *v58;
      v57 = v58;
    }
  }
  else
  {
    xxxRemoveShadow((__int64)a1);
  }
  DestroyWindowSmIcon((__int64)a1, v37, v35);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  if ( *((_QWORD *)a1 + 18) )
  {
    v166 = 0LL;
    v167 = 0LL;
    v168 = 0LL;
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v166 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v166;
      v167 = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(a1, Prop);
      ThreadUnlock1(v61, v60, v62);
    }
    v63 = (unsigned __int16)atomDDEImp;
    v64 = *((_QWORD *)a1 + 18);
    if ( atomDDEImp == word_1C032C66C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v65 = RealInternalRemoveProp(v64, v63, 1LL);
    v66 = v65;
    if ( v65 )
    {
      *(_WORD *)(v65 + 88) = 0;
      if ( !*(_WORD *)(v65 + 90) )
      {
        v67 = SeTokenType(*(PACCESS_TOKEN *)(v65 + 32));
        v68 = *(void **)(v66 + 32);
        if ( v67 == TokenPrimary || v68 )
          ObfDereferenceObject(v68);
        Win32FreePool(v66);
      }
    }
    v69 = (unsigned __int16)gatomMonitorInheritance;
    v70 = *((_QWORD *)a1 + 18);
    if ( gatomMonitorInheritance == word_1C032C66C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v70, v69, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD **)&gMagnContext, gptiCurrent);
  v72 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, a1, 2LL);
    v76 = LensContext;
    if ( LensContext )
    {
      v77 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) != LensContext || (v78 = (_QWORD *)LensContext[1], (_QWORD *)*v78 != v76) )
        __fastfail(3u);
      *v78 = v77;
      *(_QWORD *)(v77 + 8) = v78;
      v79 = *((_DWORD *)v76 + 4);
      if ( (v79 & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *((_DWORD *)v76 + 4) &= ~0x40u;
        v79 = *((_DWORD *)v76 + 4);
      }
      if ( (v79 & 0x20) == 0 )
      {
        v80 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(v72[2] + 448LL) + 8LL), v74, v75);
        DwmAsyncMagnDestroy(v80);
      }
      if ( (unsigned __int64)(v76[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v76 + 3);
      v81 = v76[29];
      if ( v81 )
        Win32FreePool(v81);
      v82 = v76[32];
      if ( v82 )
        Win32FreePool(v82);
      Win32FreePool(v76);
    }
  }
  DestroyWindowsTimers();
  HKRemoveMatchingHotkeys(0LL, a1, 0LL, 1LL);
  v83 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v83 )
  {
    --*v83;
    v84 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v84 )
      Win32FreePool(v84);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v85 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v85 )
  {
    --*v85;
    v86 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v86 )
      Win32FreePool(v86);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages();
  v87 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v87 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(a1, 1);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v87 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1, 2);
    SetOrClrWF(0, (__int64)a1, 0xB02u, 1);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v87 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1, 8);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v87 + 136) || (*(_BYTE *)(v87 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v87 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x108u, 1);
    SetOrClrWF(0, (__int64)a1, 0x102u, 1);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 800LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 800LL), 18, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v89 = *((_QWORD *)a1 + 21);
    if ( v89 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v89);
    }
  }
  v90 = *((_QWORD *)a1 + 20);
  if ( v90 )
  {
    if ( v90 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v90);
    }
  }
  v91 = *((_QWORD *)a1 + 3);
  if ( v91 )
  {
    v92 = *(_QWORD *)(v91 + 56);
    if ( v92 && a1 == *(struct tagWND **)(v92 + 80) )
    {
      v93 = *(_QWORD *)(v91 + 56);
LABEL_183:
      UnlockNotifyWindow((struct tagMENU *)v93);
      goto LABEL_184;
    }
    v93 = *(_QWORD *)(v91 + 64);
    if ( v93 && a1 == *(struct tagWND **)(v93 + 80) )
      goto LABEL_183;
  }
LABEL_184:
  if ( gcountPWO )
  {
    v94 = (unsigned __int16)atomWndObj;
    v95 = *((_QWORD *)a1 + 18);
    if ( atomWndObj == word_1C032C66C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v97 = (EWNDOBJ *)RealInternalRemoveProp(v95, v94, 1LL);
    if ( v97 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v96, v98, v99);
      GreDeleteWnd(v97);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v100, v101, v102);
  v103 = (__int64 **)(gpDispInfo + 24LL);
  v104 = *(__int64 **)(gpDispInfo + 24LL);
  if ( v104 )
  {
    do
    {
      v105 = *((_DWORD *)v104 + 16);
      if ( (v105 & 0x400800) != 0 )
      {
LABEL_202:
        v107 = (__int64 *)*v104;
        v103 = (__int64 **)v104;
        goto LABEL_203;
      }
      v106 = v104[2];
      if ( (struct tagWND *)v106 == a1 || (struct tagWND *)v104[3] == a1 || (struct tagWND *)v104[4] == a1 )
      {
        if ( (v105 & 2) == 0 )
        {
          if ( v104 == *(__int64 **)(*(_QWORD *)(v106 + 136) + 40LL) || v104 != *(__int64 **)(v106 + 248) )
          {
            if ( (v105 & 0xC0) != 0 )
              DeleteHrgnClip(v104);
LABEL_200:
            InvalidateDCE(v104);
            goto LABEL_201;
          }
          *(_QWORD *)(v106 + 248) = 0LL;
          goto LABEL_231;
        }
        if ( (v105 & 0x1000) != 0 )
        {
          if ( v104[9] == gptiCurrent )
          {
            v117 = ReleaseCacheDC(v104[1], 0LL);
          }
          else
          {
            DestroyCacheDC(v103, v104[1]);
            v117 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(v104[1], 2147483666LL, 0LL, 0LL) )
            goto LABEL_200;
          v117 = 2;
        }
        if ( v117 != 1 )
        {
          if ( v117 != 2 )
            goto LABEL_200;
LABEL_231:
          DestroyCacheDC(v103, v104[1]);
        }
      }
LABEL_201:
      v107 = *v103;
      if ( v104 == *v103 )
        goto LABEL_202;
LABEL_203:
      v104 = v107;
    }
    while ( v107 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v109 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v109 + 16) < 0 )
  {
    v110 = FindSpb(a1);
    FreeSpb(v110);
    v109 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v109 + 168) && (*(_BYTE *)(v109 + 21) & 8) == 0 && (*(_WORD *)(v109 + 42) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v109 + 168));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  v111 = (void *)*((_QWORD *)a1 + 19);
  if ( v111 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v111);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v112 = (void *)*((_QWORD *)a1 + 23);
  if ( v112 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v112);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v113 = *((_QWORD *)a1 + 27);
  if ( v113 )
  {
    Win32FreePool(v113);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v114 = *((_QWORD *)a1 + 3);
  if ( !v114 || (v115 = *(struct tagWND **)(*(_QWORD *)(v114 + 8) + 24LL), a1 == v115) )
  {
    v116 = (char *)a1 + 104;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v116 = (char *)a1 + 104;
    v172 = *(_OWORD *)LockPointer(v174, (char *)a1 + 104, v115);
    HMAssignmentLock(&v172);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v121 = (void *)ReferenceDwmApiPort(v119, v118, v120);
    DwmAsyncOwnerChange(v121, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v122 = _HMPheFromObject(a1);
  *(_BYTE *)(v122 + 25) |= 2u;
  v126 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v124, v123) + 664);
  if ( v126 )
  {
    if ( *(struct tagWND **)(v126 + 64) == a1 )
    {
      HMAssignmentUnlock(v126 + 64);
      *(_QWORD *)(v126 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v126 + 80) == a1 )
      HMAssignmentUnlock(v126 + 80);
    if ( *(struct tagWND **)(v126 + 72) == a1 )
      HMAssignmentUnlock(v126 + 72);
  }
  v128 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v128 & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v128, v125, v127);
  if ( result )
  {
    FreeClientOnWindowDestruction((struct _LIST_ENTRY *)a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
        DeleteProperties(a1);
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x2A0 )
      {
        v132 = safe_cast_fnid_to_PSWITCHWND(a1);
        v133 = v132;
        if ( v132 )
        {
          v175 = *(struct tagSwitchWndInfo **)(v132 + 8);
          if ( v175 )
          {
            RemoveSwitchWindowInfo(&v175);
            *(_QWORD *)(v133 + 8) = 0LL;
          }
        }
      }
      v134 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v135 = v134;
      if ( v134 )
      {
        v136 = *(_QWORD *)(v134 + 16);
        if ( v136 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v159, v136);
          v139 = *(_QWORD *)v159[0];
          v140 = *(_DWORD **)v159[0];
          if ( (**(_DWORD **)v159[0] & 0x20000000) != 0 )
          {
            *v140 &= ~0x40000000u;
          }
          else if ( v140 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v141 = *(_QWORD *)v159[0];
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v159[0] + 88LL));
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v141);
            *(_QWORD *)(v135 + 16) = 0LL;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v159, v139, v137, v138);
        }
      }
      v142 = *((_QWORD *)a1 + 35);
      if ( v142 )
      {
        Win32FreePool(v142);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 892LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v146 = (void *)ReferenceDwmApiPort(v144, v143, v145);
        DwmAsyncChildDestroy(v146, *(_QWORD *)a1);
      }
      *(_QWORD *)(*((_QWORD *)v116 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v116);
      v147 = *((_QWORD *)a1 + 3);
      v148 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v151, v150, v152, v153) )
      {
        v154 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v154 )
          v148 = *v154;
      }
      v160 = *(_QWORD *)(v148 + 16);
      *(_QWORD *)(v148 + 16) = &v160;
      v155 = (void *)*((_QWORD *)a1 + 3);
      v161 = v147;
      v162 = UserDereferenceObject;
      if ( v155 )
        ObfReferenceObject(v155);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock(&v160);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v156 = *((_QWORD *)a1 + 3);
      if ( v156 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v156 + 40) + 24LL) + 16LL) + 416LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v131, v130);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)a1 + 17) + 72LL);
      SetOrClrWF(1, (__int64)a1, 0x204u, 1);
      SetOrClrWF(0, (__int64)a1, 0x220u, 1);
      SetOrClrWF(0, (__int64)a1, 0xFC0u, 1);
      SetOrClrWF(1, (__int64)a1, 0xF00u, 1);
      result = *((_QWORD *)a1 + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  return result;
}
