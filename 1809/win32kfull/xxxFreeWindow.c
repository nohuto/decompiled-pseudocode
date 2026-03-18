/*
 * XREFs of xxxFreeWindow @ 0x1C001E184
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C00096A0 (CleanupIAMAccess.c)
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0009D6C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DeleteHrgnClip @ 0x1C000BF70 (DeleteHrgnClip.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     InvalidateDCE @ 0x1C000EDA4 (InvalidateDCE.c)
 *     DwmAsyncChildDestroy @ 0x1C001C920 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C001CC1C (xxxRemoveShadow.c)
 *     xxxRemoveFullScreen @ 0x1C001D218 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C001D2E8 (DestroyWindowSmIcon.c)
 *     MagpFindThreadContext @ 0x1C001D364 (MagpFindThreadContext.c)
 *     DestroyWindowsTimers @ 0x1C001D37C (DestroyWindowsTimers.c)
 *     ClearSendMessages @ 0x1C001D3C8 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C001D580 (GreDeleteSpriteOverlapPresent.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowGCData @ 0x1C00217EC (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C00218B8 (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0021904 (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1C002194C (_FindActivationFilterWindow.c)
 *     FreeClientOnWindowDestruction @ 0x1C0021980 (FreeClientOnWindowDestruction.c)
 *     DereferenceClass @ 0x1C0021A20 (DereferenceClass.c)
 *     GetClassPtr @ 0x1C00224A0 (GetClassPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     FindQMsg @ 0x1C0034980 (FindQMsg.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C004108C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00B0B4C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     DwmAsyncShellWindowChange @ 0x1C00C96C4 (DwmAsyncShellWindowChange.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00E6170 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00EE378 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DecPaintCount @ 0x1C00F7870 (DecPaintCount.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0109BE4 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C010ACC0 (xxxClientFreeWindowClassExtraBytes.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0122E60 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012456C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     _DeregisterShellHookWindow @ 0x1C0132020 (_DeregisterShellHookWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01BC124 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01C42A0 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01C7430 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01DEE70 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01E0668 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C01F2BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F6FC0 (xxxDeferredDesktopRotation.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01F8FE0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01F98FC (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01FAA5C (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0258258 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C026B980 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2)
{
  __int64 v2; // r8
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  void *v7; // rax
  struct tagWND **v8; // rcx
  struct tagWND **v9; // rcx
  struct tagWND **v10; // rcx
  __int64 v11; // rcx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  struct tagWND **v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  struct tagWND **v32; // rcx
  struct tagWND **v33; // rax
  __int64 v34; // r9
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagSHADOW *v43; // rbx
  struct tagSHADOW **v44; // rcx
  struct tagSHADOW **v45; // rax
  __int64 Prop; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rbx
  TOKEN_TYPE v53; // eax
  void *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rbx
  _QWORD *ThreadContext; // rax
  _QWORD *v60; // rbx
  _QWORD *LensContext; // rax
  __int64 v62; // rdx
  _QWORD *v63; // rsi
  __int64 v64; // rcx
  _QWORD *v65; // rax
  int v66; // eax
  void *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  _DWORD *v70; // rax
  _DWORD *v71; // rcx
  _DWORD *v72; // rax
  _DWORD *v73; // rcx
  __int64 v74; // rcx
  __int64 QMsg; // rax
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  EWNDOBJ *v83; // rbx
  __int64 *v84; // rsi
  __int64 v85; // rbx
  int v86; // edx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 Spb; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  void *v93; // r8
  void *v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  struct tagWND *v97; // r8
  char *v98; // rsi
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  void *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rbx
  __int64 v106; // rcx
  __int64 result; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // r14
  _DWORD *v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  void *v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  void *v119; // rcx
  __int64 v120; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  _QWORD v123[2]; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v124[2]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v125[4]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v126; // [rsp+88h] [rbp-39h] BYREF
  __int128 v127; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v128[3]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v129[3]; // [rsp+C0h] [rbp-1h] BYREF
  char v130[16]; // [rsp+D8h] [rbp+17h] BYREF
  char v131[16]; // [rsp+E8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v132; // [rsp+130h] [rbp+6Fh] BYREF

  v132 = a2;
  v2 = *((_QWORD *)a1 + 3);
  v4 = 0;
  if ( !v2 )
    goto LABEL_30;
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(v2 + 8) + 168LL) )
  {
    CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v5 + 24LL) = 0LL;
    HMAssignmentUnlock(v5 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v7 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v6);
      DwmAsyncShellWindowChange(v7);
    }
    v2 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 2) != 0 )
      v4 = 1;
  }
  v8 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 184LL);
  if ( *v8 == a1 )
  {
    HMAssignmentUnlock(v8);
    v2 = *((_QWORD *)a1 + 3);
  }
  v9 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 192LL);
  if ( *v9 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v9);
    v2 = *((_QWORD *)a1 + 3);
  }
  v10 = (struct tagWND **)(*(_QWORD *)(v2 + 8) + 200LL);
  if ( *v10 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v2 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v10);
    v2 = *((_QWORD *)a1 + 3);
  }
  v11 = v2 + 304;
  if ( *(struct tagWND **)(v2 + 304) == a1 )
  {
LABEL_17:
    HMAssignmentUnlock(v11);
    goto LABEL_22;
  }
  if ( *(struct tagWND **)(v2 + 328) != a1 )
  {
    v11 = v2 + 296;
    if ( a1 != *(struct tagWND **)(v2 + 296) )
    {
      ActivationFilterWindow = (_QWORD *)FindActivationFilterWindow(a1);
      v13 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v14 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v14 + 8) != v13 )
          goto LABEL_176;
        v15 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v15 != v13 )
          goto LABEL_176;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        HMAssignmentUnlock(v13 + 2);
        Win32FreePool(v13);
      }
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  ShellWindowManagement::SetWndManagementWindow((ShellWindowManagement *)v2, 0LL, (struct tagWND *)v2);
LABEL_22:
  v16 = *((_QWORD *)a1 + 3);
  if ( *(struct tagWND **)(v16 + 248) == a1 )
  {
    HMAssignmentUnlock(v16 + 248);
    v16 = *((_QWORD *)a1 + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v16 + 8));
  v17 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 232LL);
  if ( *v17 == a1 )
    HMAssignmentUnlock(v17);
  v18 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v18 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(a1);
    v18 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v18 + 16) & 0x20) != 0 )
  {
    v19 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v19 + 48);
    SetOrClrWF(0, (__int64)a1, 0x20u, 1);
  }
LABEL_30:
  if ( *((_DWORD *)a1 + 61) )
    ScrubDelegatedWindow(a1);
  v20 = *((_QWORD *)a1 + 32);
  if ( v20 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v20 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v22 = *((_QWORD *)a1 + 32);
    if ( *(_QWORD *)(v22 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v22 + 96));
      *(_QWORD *)(*((_QWORD *)a1 + 32) + 96LL) = 0LL;
      v22 = *((_QWORD *)a1 + 32);
    }
    Win32FreePool(v22);
    *((_QWORD *)a1 + 32) = 0LL;
  }
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 25LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen((__int64)a1);
  v23 = *((_QWORD *)a1 + 5);
  v26 = 12287LL;
  v24 = *(unsigned __int16 *)(v23 + 42);
  v25 = 672LL;
  LOWORD(v26) = v24 & 0x2FFF;
  if ( ((unsigned __int16)v24 & 0x2FFFu) >= 0x29A && (v24 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v26 > 0x2A0u )
    {
      if ( (unsigned __int16)v26 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v26 - 4608));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v24 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
    v23 = *((_QWORD *)a1 + 5);
  }
  *(_WORD *)(v23 + 42) |= 0x8000u;
  v27 = *((_QWORD *)a1 + 5);
  v28 = *(_QWORD *)(v27 + 296);
  if ( v28 && v28 != -1 )
  {
    if ( (*(_DWORD *)(v27 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, (PVOID)(v28 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL)));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL) = 0LL;
    }
    else
    {
      *(_QWORD *)(v27 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(v27, v26, v24, v25) + 772) & 0x40000008) == 0
        && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(a1, v28);
      }
    }
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = 0;
  v29 = *((_QWORD *)a1 + 12);
  if ( v29 )
  {
    v26 = v29 + 184;
    if ( *(struct tagWND **)(v29 + 184) == a1 )
    {
      v30 = *(_QWORD *)(v29 + 40);
      if ( *(char *)(v30 + 19) < 0 || *(char *)(v30 + 20) < 0 )
        v29 = 0LL;
      v124[0] = v26;
      v124[1] = v29;
      HMAssignmentLock(v124);
      v126 = *(_OWORD *)LockPointer(v130, *((_QWORD *)a1 + 12) + 184LL);
      HMAssignmentLock(&v126);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 784LL) )
    HMAssignmentUnlock(gptiCurrent + 784LL);
  if ( *(struct tagWND **)(gptiCurrent + 1368LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1368LL);
  if ( *(struct tagWND **)(gptiCurrent + 1440LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1440LL);
  v31 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( a1 == *(struct tagWND **)(v31 + 112) )
  {
    HMAssignmentUnlock(v31 + 112);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v31 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent(a1, 10LL);
      v31 = *(_QWORD *)(gptiCurrent + 432LL);
    }
  }
  if ( a1 == *(struct tagWND **)(v31 + 128) )
  {
    HMAssignmentUnlock(v31 + 128);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  if ( a1 == *(struct tagWND **)(v31 + 120) )
  {
    HMAssignmentUnlock(v31 + 120);
    v31 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v32 = (struct tagWND **)(v31 + 136);
  if ( a1 == *(struct tagWND **)(v31 + 136) )
  {
    HMAssignmentUnlock(v32);
    *(_BYTE *)(v31 + 144) = 0;
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v33 )
  {
    if ( a1 == v33[11] )
    {
      HMAssignmentUnlock(v33 + 11);
      v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    v32 = v33 + 12;
    if ( a1 == v33[12] )
    {
      HMAssignmentUnlock(v32);
      v33 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v33[23] )
    {
      NotifyShell::WindowBorderExitIfEntered(a1, (struct tagWND *)v26);
      v34 = *((_QWORD *)a1 + 3);
      v35 = v34;
      if ( (*(_DWORD *)(v34 + 48) & 0x200) != 0 )
      {
        v36 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v34 + 112));
        v37 = v36;
        v35 = v38;
        if ( v36 )
        {
          v39 = *v36;
          if ( *v36 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v128[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v128;
            v128[1] = v39;
            _InterlockedAdd((volatile signed __int32 *)(v39 + 8), 1u);
            xxxResetTooltip(v37);
            ThreadUnlock1(v42, v41);
            v35 = *((_QWORD *)a1 + 3);
          }
        }
      }
      HMAssignmentUnlock(v35 + 184);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
    xxxReleaseCapture(v32, v26, v24, v25);
  if ( **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) == gatomShadow )
  {
    v43 = gpshadowFirst;
    v44 = &gpshadowFirst;
    while ( v43 )
    {
      v45 = (struct tagSHADOW **)((char *)v43 + 16);
      if ( *((struct tagWND **)v43 + 1) == a1 )
      {
        *v44 = *v45;
        HMAssignmentUnlock(v43);
        HMAssignmentUnlock((char *)v43 + 8);
        Win32FreePool(v43);
        break;
      }
      v43 = *v45;
      v44 = v45;
    }
  }
  else
  {
    xxxRemoveShadow((__int64)a1);
  }
  DestroyWindowSmIcon((__int64)a1, v26);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v129[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v129;
      v129[1] = Prop;
      _InterlockedAdd((volatile signed __int32 *)(Prop + 8), 1u);
      xxxDDETrackWindowDying(v129, Prop);
      ThreadUnlock1(v48, v47);
    }
    v49 = (unsigned __int16)atomDDEImp;
    v50 = *((_QWORD *)a1 + 15);
    if ( atomDDEImp == word_1C0317660 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v51 = RealInternalRemoveProp(v50, v49, 1LL);
    v52 = v51;
    if ( v51 )
    {
      *(_WORD *)(v51 + 88) = 0;
      if ( !*(_WORD *)(v51 + 90) )
      {
        v53 = SeTokenType(*(PACCESS_TOKEN *)(v51 + 32));
        v54 = *(void **)(v52 + 32);
        if ( v53 == TokenPrimary || v54 )
          ObfDereferenceObject(v54);
        Win32FreePool(v52);
      }
    }
    v55 = (unsigned __int16)gatomMonitorInheritance;
    v56 = *((_QWORD *)a1 + 15);
    if ( gatomMonitorInheritance == word_1C0317660 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v56, v55, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 18LL, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A0 )
  {
    v57 = safe_cast_fnid_to_PSWITCHWND(a1);
    v58 = v57;
    if ( v57 )
    {
      v132 = *(struct tagSwitchWndInfo **)(v57 + 8);
      if ( v132 )
      {
        RemoveSwitchWindowInfo(&v132);
        *(_QWORD *)(v58 + 8) = 0LL;
      }
    }
  }
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD **)&gMagnContext, gptiCurrent);
  v60 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, a1, 2LL);
    v63 = LensContext;
    if ( LensContext )
    {
      v64 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) == LensContext )
      {
        v65 = (_QWORD *)LensContext[1];
        if ( (_QWORD *)*v65 == v63 )
        {
          *v65 = v64;
          *(_QWORD *)(v64 + 8) = v65;
          v66 = *((_DWORD *)v63 + 4);
          if ( (v66 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v63 + 4) &= ~0x40u;
            v66 = *((_DWORD *)v63 + 4);
          }
          if ( (v66 & 0x20) == 0 )
          {
            v67 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(v60[2] + 456LL) + 8LL), v62);
            DwmAsyncMagnDestroy(v67);
          }
          if ( (unsigned __int64)(v63[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            HMAssignmentUnlock(v63 + 3);
          v68 = v63[29];
          if ( v68 )
            Win32FreePool(v68);
          v69 = v63[32];
          if ( v69 )
            Win32FreePool(v69);
          Win32FreePool(v63);
          goto LABEL_144;
        }
      }
LABEL_176:
      __fastfail(3u);
    }
  }
LABEL_144:
  DestroyWindowsTimers();
  HKRemoveMatchingHotkeys(0LL, a1, 0LL, 1LL);
  v70 = (_DWORD *)*((_QWORD *)a1 + 34);
  if ( v70 )
  {
    --*v70;
    v71 = (_DWORD *)*((_QWORD *)a1 + 34);
    if ( !*v71 )
      Win32FreePool(v71);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  v72 = (_DWORD *)*((_QWORD *)a1 + 35);
  if ( v72 )
  {
    --*v72;
    v73 = (_DWORD *)*((_QWORD *)a1 + 35);
    if ( !*v73 )
      Win32FreePool(v73);
    *((_QWORD *)a1 + 35) = 0LL;
  }
  if ( !gbInSMSCleanup )
    ClearSendMessages();
  v74 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v74 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(a1, 1);
    v74 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v74 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1, 2);
    SetOrClrWF(0, (__int64)a1, 0xB02u, 1);
    v74 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v74 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1, 8);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    v74 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v74 + 136) || (*(_BYTE *)(v74 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    v74 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v74 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x108u, 1);
    SetOrClrWF(0, (__int64)a1, 0x102u, 1);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 808LL) )
  {
    QMsg = FindQMsg(gptiCurrent, 18, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v76 = *((_QWORD *)a1 + 18);
    if ( v76 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v76);
    }
  }
  v77 = *((_QWORD *)a1 + 17);
  if ( v77 )
  {
    if ( v77 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v77);
    }
  }
  v78 = *((_QWORD *)a1 + 3);
  if ( v78 )
  {
    v79 = *(_QWORD *)(v78 + 56);
    if ( v79 && a1 == *(struct tagWND **)(v79 + 80) )
    {
      v80 = *(_QWORD *)(v78 + 56);
LABEL_184:
      UnlockNotifyWindow((struct tagMENU *)v80);
      goto LABEL_185;
    }
    v80 = *(_QWORD *)(v78 + 64);
    if ( v80 && a1 == *(struct tagWND **)(v80 + 80) )
      goto LABEL_184;
  }
LABEL_185:
  if ( gcountPWO )
  {
    v81 = (unsigned __int16)atomWndObj;
    v82 = *((_QWORD *)a1 + 15);
    if ( atomWndObj == word_1C0317660 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v83 = (EWNDOBJ *)RealInternalRemoveProp(v82, v81, 1LL);
    if ( v83 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v83);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v84 = (__int64 *)(gpDispInfo + 24LL);
  v85 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v85 )
  {
    do
    {
      v86 = *(_DWORD *)(v85 + 64);
      if ( (v86 & 0x400800) != 0 )
      {
LABEL_203:
        v88 = *(_QWORD *)v85;
        v84 = (__int64 *)v85;
        goto LABEL_204;
      }
      v87 = *(_QWORD *)(v85 + 16);
      if ( (struct tagWND *)v87 == a1 || *(struct tagWND **)(v85 + 24) == a1 || *(struct tagWND **)(v85 + 32) == a1 )
      {
        if ( (v86 & 2) == 0 )
        {
          if ( v85 == *(_QWORD *)(*(_QWORD *)(v87 + 112) + 40LL) || v85 != *(_QWORD *)(v87 + 232) )
          {
            if ( (v86 & 0xC0) != 0 )
              DeleteHrgnClip(v85);
LABEL_201:
            InvalidateDCE(v85);
            goto LABEL_202;
          }
          *(_QWORD *)(v87 + 232) = 0LL;
          goto LABEL_234;
        }
        if ( (v86 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v85 + 72) == gptiCurrent )
          {
            v99 = ReleaseCacheDC(*(_QWORD *)(v85 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v84, *(_QWORD *)(v85 + 8));
            v99 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v85 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_201;
          v99 = 2;
        }
        if ( v99 != 1 )
        {
          if ( v99 != 2 )
            goto LABEL_201;
LABEL_234:
          DestroyCacheDC(v84, *(_QWORD *)(v85 + 8));
        }
      }
LABEL_202:
      v88 = *v84;
      if ( v85 == *v84 )
        goto LABEL_203;
LABEL_204:
      v85 = v88;
    }
    while ( v88 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v90 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v90 + 16) < 0 )
  {
    v91 = FindSpb(a1);
    FreeSpb(v91);
    v90 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v90 + 168) && (*(_BYTE *)(v90 + 21) & 8) == 0 && (*(_WORD *)(v90 + 42) & 0x2FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v90 + 168));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  v92 = *((_QWORD *)a1 + 19);
  if ( v92 )
  {
    GreDeleteObject(v92);
    *((_QWORD *)a1 + 19) = 0LL;
  }
  v93 = (void *)*((_QWORD *)a1 + 16);
  if ( v93 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v93);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 16) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(a1);
  v94 = (void *)*((_QWORD *)a1 + 21);
  if ( v94 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v94);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 21) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v95 = *((_QWORD *)a1 + 25);
  if ( v95 )
  {
    Win32FreePool(v95);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v96 = *((_QWORD *)a1 + 3);
  if ( !v96 || (v97 = *(struct tagWND **)(*(_QWORD *)(v96 + 8) + 24LL), a1 == v97) )
  {
    v98 = (char *)a1 + 80;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 80);
  }
  else
  {
    v98 = (char *)a1 + 80;
    v127 = *(_OWORD *)LockPointer(v131, (char *)a1 + 80, v97);
    HMAssignmentLock(&v127);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 88);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 96);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 184);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v102 = (void *)ReferenceDwmApiPort(v101, v100);
    DwmAsyncOwnerChange(v102, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
  HMMarkObjectDestroy(a1);
  v103 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v103 + *((_QWORD *)&gSharedInfo + 1) + 25) |= 2u;
  v105 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v103) + 672);
  if ( v105 )
  {
    if ( *(struct tagWND **)(v105 + 64) == a1 )
    {
      HMAssignmentUnlock(v105 + 64);
      *(_QWORD *)(v105 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v105 + 80) == a1 )
      HMAssignmentUnlock(v105 + 80);
    if ( *(struct tagWND **)(v105 + 72) == a1 )
      HMAssignmentUnlock(v105 + 72);
  }
  v106 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v106 & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v106, v104);
  if ( result )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 15) )
        DeleteProperties(a1);
      v109 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v110 = v109;
      if ( v109 && *(_QWORD *)(v109 + 16) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v123);
        v111 = *(_DWORD **)v123[0];
        if ( (**(_DWORD **)v123[0] & 0x20000000) != 0 )
        {
          *v111 &= ~0x40000000u;
        }
        else if ( v111 == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
        }
        else
        {
          v112 = *(_QWORD *)v123[0];
          NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v123[0] + 88LL));
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v112);
          *(_QWORD *)(v110 + 16) = 0LL;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v123);
      }
      v113 = *((_QWORD *)a1 + 33);
      if ( v113 )
      {
        Win32FreePool(v113);
        *((_QWORD *)a1 + 33) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = 0;
      --*(_DWORD *)(gptiCurrent + 892LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v116 = (void *)ReferenceDwmApiPort(v115, v114);
        DwmAsyncChildDestroy(v116, *(_QWORD *)a1);
      }
      *(_QWORD *)(*((_QWORD *)v98 - 5) + 48LL) = 0LL;
      HMAssignmentUnlock(v98);
      v117 = *((_QWORD *)a1 + 3);
      v118 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v125[0] = *(_QWORD *)(v118 + 16);
      *(_QWORD *)(v118 + 16) = v125;
      v119 = (void *)*((_QWORD *)a1 + 3);
      v125[1] = v117;
      v125[2] = UserDereferenceObject;
      if ( v119 )
        ObfReferenceObject(v119);
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock(v125);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v120 = *((_QWORD *)a1 + 3);
      if ( v120 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 + 40) + 24LL) + 16LL) + 424LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v108);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 112, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)a1 + 14) + 72LL);
      SetOrClrWF(1, (__int64)a1, 0x204u, 1);
      SetOrClrWF(0, (__int64)a1, 0x220u, 1);
      SetOrClrWF(0, (__int64)a1, 0xFC0u, 1);
      SetOrClrWF(1, (__int64)a1, 0xF00u, 1);
      result = *((_QWORD *)a1 + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 18) = 0LL;
    }
  }
  return result;
}
