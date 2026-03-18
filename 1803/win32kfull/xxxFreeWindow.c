/*
 * XREFs of xxxFreeWindow @ 0x1C0036A54
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncChildDestroy @ 0x1C0009CD4 (DwmAsyncChildDestroy.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C0030EA0 (GetClassPtr.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00349AC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     InvalidateDCE @ 0x1C00354F8 (InvalidateDCE.c)
 *     xxxRemoveFullScreen @ 0x1C0035B8C (xxxRemoveFullScreen.c)
 *     MagpFindThreadContext @ 0x1C0035C5C (MagpFindThreadContext.c)
 *     DestroyWindowsTimers @ 0x1C0035C74 (DestroyWindowsTimers.c)
 *     ClearSendMessages @ 0x1C0035CC0 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0035E6C (GreDeleteSpriteOverlapPresent.c)
 *     DereferenceClass @ 0x1C0035F90 (DereferenceClass.c)
 *     FreeClientOnWindowDestruction @ 0x1C0036060 (FreeClientOnWindowDestruction.c)
 *     _FindActivationFilterWindow @ 0x1C00360F8 (_FindActivationFilterWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C003612C (UpdatePointerRedirIsAlive.c)
 *     FreeWindowMessageFilter @ 0x1C0036174 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C00361C0 (FreeWindowGCData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     FindQMsg @ 0x1C00493A0 (FindQMsg.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C005AAA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C005FFF8 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxResetTooltip @ 0x1C0064938 (xxxResetTooltip.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B3310 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00B7860 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     IPostQuitMessage @ 0x1C00BA650 (IPostQuitMessage.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     DeleteHrgnClip @ 0x1C00EC270 (DeleteHrgnClip.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F05FC (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     DecPaintCount @ 0x1C00F1034 (DecPaintCount.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F17E8 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C00F1880 (CleanupIAMAccess.c)
 *     SetShellWndManagementWindow @ 0x1C00F1D88 (SetShellWndManagementWindow.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00F32D4 (xxxClientFreeWindowClassExtraBytes.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C00F6BA8 (xxxRemoveShadow.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0103EEC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0104A3C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     _DeregisterShellHookWindow @ 0x1C010F2A0 (_DeregisterShellHookWindow.c)
 *     IsSysShadow @ 0x1C013B390 (IsSysShadow.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C01976E4 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C019B0B4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01A28BC (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01A5250 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01BC2A0 (RemoveSwitchWindowInfo.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01BDAD0 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C01CE610 (FindSpb.c)
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01D0AC4 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01D2640 (xxxDeferredDesktopRotation.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01D45B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01D4D98 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01D5E2C (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0240970 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C0258760 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rax
  struct tagWND **v11; // rcx
  struct tagWND **v12; // rcx
  struct tagWND **v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct tagWND **v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rax
  __int16 v30; // dx
  unsigned __int16 v31; // cx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  struct tagWND **v39; // rcx
  struct tagWND **v40; // rax
  __int64 v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rsi
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct tagSHADOW *v52; // rbx
  struct tagSHADOW **v53; // rcx
  struct tagSHADOW **v54; // rax
  __int64 v55; // rcx
  __int64 Prop; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rbx
  TOKEN_TYPE v62; // eax
  void *v63; // rcx
  _QWORD *ThreadContext; // rax
  _QWORD *v65; // rbx
  _QWORD *LensContext; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  _QWORD *v69; // rsi
  __int64 v70; // rcx
  _QWORD *v71; // rax
  int v72; // eax
  void *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 QMsg; // rax
  __int64 v79; // rbx
  __int64 v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  EWNDOBJ *v84; // rbx
  __int64 *v85; // rsi
  __int64 v86; // rbx
  int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 Spb; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  void *v94; // r8
  void *v95; // r8
  __int64 v96; // rcx
  __int64 v97; // rax
  struct tagWND *v98; // r8
  char *v99; // r14
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  void *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rbx
  __int64 v108; // r8
  __int64 v109; // rcx
  __int64 result; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rdx
  _DWORD *v118; // rcx
  __int64 v119; // rbx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  void *v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // rax
  void *v128; // rcx
  __int64 v129; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  __int64 v132; // rcx
  _QWORD v133[2]; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v134[4]; // [rsp+58h] [rbp-79h] BYREF
  __int128 v135; // [rsp+78h] [rbp-59h]
  __int128 v136; // [rsp+88h] [rbp-49h] BYREF
  __int128 v137; // [rsp+98h] [rbp-39h] BYREF
  __int128 v138; // [rsp+A8h] [rbp-29h] BYREF
  _QWORD v139[3]; // [rsp+B8h] [rbp-19h] BYREF
  _QWORD v140[3]; // [rsp+D0h] [rbp-1h] BYREF
  char v141[16]; // [rsp+E8h] [rbp+17h] BYREF
  __int64 v142; // [rsp+F8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v143; // [rsp+140h] [rbp+6Fh] BYREF

  v143 = a2;
  v4 = *((_QWORD *)a1 + 3);
  v6 = 0;
  if ( !v4 )
    goto LABEL_24;
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(v4 + 8) + 168LL) )
  {
    CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v7 + 24LL) = 0LL;
    HMAssignmentUnlock(v7 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v8, v9);
      DwmAsyncShellWindowChange(v10);
    }
    v4 = *((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 52LL) & 2) != 0 )
      v6 = 1;
  }
  v11 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 184LL);
  if ( *v11 == a1 )
  {
    HMAssignmentUnlock(v11);
    v4 = *((_QWORD *)a1 + 3);
  }
  v12 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 192LL);
  if ( *v12 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL) = 0LL;
    HMAssignmentUnlock(v12);
    v4 = *((_QWORD *)a1 + 3);
  }
  v13 = (struct tagWND **)(*(_QWORD *)(v4 + 8) + 200LL);
  if ( *v13 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v4 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v13);
    v4 = *((_QWORD *)a1 + 3);
  }
  v14 = v4 + 304;
  if ( *(struct tagWND **)(v4 + 304) == a1 )
  {
LABEL_31:
    HMAssignmentUnlock(v14);
    goto LABEL_16;
  }
  if ( *(struct tagWND **)(v4 + 328) != a1 )
  {
    v14 = v4 + 296;
    if ( a1 != *(struct tagWND **)(v4 + 296) )
    {
      ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
      v22 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v23 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v23 + 8) != v22 || (v24 = (_QWORD *)v22[1], (_QWORD *)*v24 != v22) )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        HMAssignmentUnlock(v22 + 2);
        Win32FreePool(v22);
      }
      goto LABEL_16;
    }
    goto LABEL_31;
  }
  SetShellWndManagementWindow(v4, 0LL);
LABEL_16:
  v15 = *((_QWORD *)a1 + 3);
  if ( *(struct tagWND **)(v15 + 248) == a1 )
  {
    HMAssignmentUnlock(v15 + 248);
    v15 = *((_QWORD *)a1 + 3);
  }
  UpdatePointerRedirIsAlive(*(_QWORD *)(v15 + 8));
  v16 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 232LL);
  if ( *v16 == a1 )
    HMAssignmentUnlock(v16);
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 23) & 0x40) != 0 )
  {
    DeregisterShellHookWindow(a1);
    v17 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v17 + 16) & 0x20) != 0 )
  {
    v18 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v18 + 48);
    SetOrClrWF(0LL, a1, 32LL, 1LL);
  }
LABEL_24:
  if ( *((_DWORD *)a1 + 64) )
    ScrubDelegatedWindow(a1);
  v19 = *((_QWORD *)a1 + 33);
  if ( v19 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v19 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v25 = *((_QWORD *)a1 + 33);
    if ( *(_QWORD *)(v25 + 96) )
    {
      CompositionObject::Release(*(CompositionObject **)(v25 + 96));
      *(_QWORD *)(*((_QWORD *)a1 + 33) + 96LL) = 0LL;
      v25 = *((_QWORD *)a1 + 33);
    }
    Win32FreePool(v25);
    *((_QWORD *)a1 + 33) = 0LL;
  }
  FreeWindowMessageFilter(a1, (unsigned __int64)a2, v4, a4);
  FreeWindowGCData(a1, v26, v27, v28);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v6 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen((__int64)a1);
  v29 = *((_QWORD *)a1 + 5);
  v30 = *(_WORD *)(v29 + 42);
  v31 = v30 & 0x3FFF;
  v32 = 666LL;
  v33 = 672LL;
  if ( (v30 & 0x3FFFu) >= 0x29A && (v30 & 0x4000) == 0 )
  {
    if ( v31 > 0x2A0u )
    {
      if ( v31 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * v31 - 4608));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v30 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
    v29 = *((_QWORD *)a1 + 5);
  }
  *(_WORD *)(v29 + 42) |= 0x8000u;
  v34 = *((_QWORD *)a1 + 5);
  v35 = *(_QWORD *)(v34 + 296);
  if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*(_DWORD *)(v34 + 232) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, (PVOID)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL) + v35));
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcess(v34, v35) + 772) & 0x40000008) == 0
           && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
    {
      xxxClientFreeWindowClassExtraBytes(*(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL));
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 296LL) = 0LL;
  }
  v36 = *((_QWORD *)a1 + 12);
  if ( v36 )
  {
    v35 = v36 + 184;
    if ( *(struct tagWND **)(v36 + 184) == a1 )
    {
      v37 = *(_QWORD *)(v36 + 40);
      if ( *(char *)(v37 + 19) < 0 || *(char *)(v37 + 20) < 0 )
        v36 = 0LL;
      *(_QWORD *)&v135 = v35;
      *((_QWORD *)&v135 + 1) = v36;
      v136 = v135;
      HMAssignmentLock(&v136);
      v137 = *(_OWORD *)LockPointer(v141, *((_QWORD *)a1 + 12) + 184LL, *(_QWORD *)(*((_QWORD *)a1 + 12) + 184LL));
      HMAssignmentLock(&v137);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 768LL) )
    HMAssignmentUnlock(gptiCurrent + 768LL);
  if ( *(struct tagWND **)(gptiCurrent + 1376LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1376LL);
  if ( *(struct tagWND **)(gptiCurrent + 1448LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1448LL);
  v38 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( a1 == *(struct tagWND **)(v38 + 112) )
  {
    HMAssignmentUnlock(v38 + 112);
    v38 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v38 == gpqForeground )
    {
      zzzInputFocusLostWindowEvent(a1, 10LL);
      v38 = *(_QWORD *)(gptiCurrent + 424LL);
    }
  }
  if ( a1 == *(struct tagWND **)(v38 + 128) )
  {
    HMAssignmentUnlock(v38 + 128);
    v38 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  if ( a1 == *(struct tagWND **)(v38 + 120) )
  {
    HMAssignmentUnlock(v38 + 120);
    v38 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v39 = (struct tagWND **)(v38 + 136);
  if ( a1 == *(struct tagWND **)(v38 + 136) )
  {
    HMAssignmentUnlock(v39);
    *(_BYTE *)(v38 + 144) = 0;
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v40 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v40 )
  {
    if ( a1 == v40[11] )
    {
      HMAssignmentUnlock(v40 + 11);
      v40 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    v39 = v40 + 12;
    if ( a1 == v40[12] )
    {
      HMAssignmentUnlock(v39);
      v40 = (struct tagWND **)*((_QWORD *)a1 + 3);
    }
    if ( a1 == v40[23] )
    {
      xxxNotifyShellWindowBorderExitIfEntered(a1, v35, v32, v33);
      v41 = *((_QWORD *)a1 + 3);
      v42 = v41;
      if ( (*(_DWORD *)(v41 + 48) & 0x200) != 0 )
      {
        v43 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v41 + 112));
        v45 = v43;
        v42 = v46;
        if ( v43 )
        {
          v47 = *v43;
          if ( *v43 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44);
            v139[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v139;
            v139[1] = v47;
            _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
            xxxResetTooltip(v45);
            ThreadUnlock1(v50, v49, v51);
            v42 = *((_QWORD *)a1 + 3);
          }
        }
      }
      HMAssignmentUnlock(v42 + 184);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) )
    xxxReleaseCapture(v39, v35, v32);
  if ( (unsigned int)IsSysShadow(a1, v35, v32, v33) )
  {
    v52 = gpshadowFirst;
    v53 = &gpshadowFirst;
    while ( v52 )
    {
      v54 = (struct tagSHADOW **)((char *)v52 + 16);
      if ( *((struct tagWND **)v52 + 1) == a1 )
      {
        *v53 = *v54;
        HMAssignmentUnlock(v52);
        HMAssignmentUnlock((char *)v52 + 8);
        Win32FreePool(v52);
        break;
      }
      v52 = *v54;
      v53 = v54;
    }
  }
  else
  {
    xxxRemoveShadow(a1);
  }
  DestroyWindowSmIcon(a1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  v55 = *((_QWORD *)a1 + 15);
  if ( v55 )
  {
    Prop = RealGetProp(v55, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v140[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v140;
      v140[1] = Prop;
      _InterlockedAdd((volatile signed __int32 *)(Prop + 8), 1u);
      xxxDDETrackWindowDying(v140, Prop);
      ThreadUnlock1(v58, v57, v59);
    }
    v60 = RealInternalRemoveProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomDDEImp, 1LL);
    v61 = v60;
    if ( v60 )
    {
      *(_WORD *)(v60 + 88) = 0;
      if ( !*(_WORD *)(v60 + 90) )
      {
        v62 = SeTokenType(*(PACCESS_TOKEN *)(v60 + 32));
        v63 = *(void **)(v61 + 32);
        if ( v62 == TokenPrimary || v63 )
          ObfDereferenceObject(v63);
        Win32FreePool(v61);
      }
    }
    RealInternalRemoveProp(*((_QWORD *)a1 + 15), (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 18LL, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD **)&gMagnContext, gptiCurrent);
  v65 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, a1, 2LL);
    v69 = LensContext;
    if ( LensContext )
    {
      v70 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) != LensContext || (v71 = (_QWORD *)LensContext[1], (_QWORD *)*v71 != v69) )
        __fastfail(3u);
      *v71 = v70;
      *(_QWORD *)(v70 + 8) = v71;
      v72 = *((_DWORD *)v69 + 4);
      if ( (v72 & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *((_DWORD *)v69 + 4) &= ~0x40u;
        v72 = *((_DWORD *)v69 + 4);
      }
      if ( (v72 & 0x20) == 0 )
      {
        v73 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(v65[2] + 448LL) + 8LL), v67, v68);
        DwmAsyncMagnDestroy(v73);
      }
      if ( (unsigned __int64)(v69[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v69 + 3);
      v74 = v69[29];
      if ( v74 )
        Win32FreePool(v74);
      v75 = v69[32];
      if ( v75 )
        Win32FreePool(v75);
      Win32FreePool(v69);
    }
  }
  DestroyWindowsTimers();
  HKRemoveMatchingHotkeys(0LL, a1, 0LL, 1LL);
  if ( !gbInSMSCleanup )
    ClearSendMessages();
  v77 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v77 + 26) & 8) != 0 )
  {
    UnsetLayeredWindow(a1);
    v77 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v77 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
    v77 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v77 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    v77 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v77 + 136) || (*(_BYTE *)(v77 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1, v76);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    v77 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v77 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 800LL) )
  {
    QMsg = FindQMsg(gptiCurrent, 18, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v79 = *((_QWORD *)a1 + 18);
    if ( v79 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v79);
    }
  }
  v80 = *((_QWORD *)a1 + 17);
  if ( v80 )
  {
    if ( v80 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v80);
    }
  }
  v81 = *((_QWORD *)a1 + 3);
  if ( v81 )
  {
    v82 = *(_QWORD *)(v81 + 56);
    if ( v82 && a1 == *(struct tagWND **)(v82 + 80) )
    {
      v83 = *(_QWORD *)(v81 + 56);
LABEL_169:
      UnlockNotifyWindow((struct tagMENU *)v83);
      goto LABEL_170;
    }
    v83 = *(_QWORD *)(v81 + 64);
    if ( v83 && a1 == *(struct tagWND **)(v83 + 80) )
      goto LABEL_169;
  }
LABEL_170:
  if ( gcountPWO )
  {
    v84 = (EWNDOBJ *)RealInternalRemoveProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomWndObj, 1LL);
    if ( v84 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v84);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v85 = (__int64 *)(gpDispInfo + 24LL);
  v86 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v86 )
  {
    do
    {
      v87 = *(_DWORD *)(v86 + 64);
      if ( (v87 & 0x400800) != 0 )
      {
LABEL_186:
        v89 = *(_QWORD *)v86;
        v85 = (__int64 *)v86;
        goto LABEL_187;
      }
      v88 = *(_QWORD *)(v86 + 16);
      if ( (struct tagWND *)v88 == a1 || *(struct tagWND **)(v86 + 24) == a1 || *(struct tagWND **)(v86 + 32) == a1 )
      {
        if ( (v87 & 2) == 0 )
        {
          if ( v86 == *(_QWORD *)(*(_QWORD *)(v88 + 112) + 40LL) || v86 != *(_QWORD *)(v88 + 232) )
          {
            if ( (v87 & 0xC0) != 0 )
              DeleteHrgnClip(v86);
LABEL_184:
            InvalidateDCE(v86);
            goto LABEL_185;
          }
          *(_QWORD *)(v88 + 232) = 0LL;
          goto LABEL_217;
        }
        if ( (v87 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v86 + 72) == gptiCurrent )
          {
            v100 = ReleaseCacheDC(*(_QWORD *)(v86 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v85, *(_QWORD *)(v86 + 8));
            v100 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v86 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_184;
          v100 = 2;
        }
        if ( v100 != 1 )
        {
          if ( v100 != 2 )
            goto LABEL_184;
LABEL_217:
          DestroyCacheDC(v85, *(_QWORD *)(v86 + 8));
        }
      }
LABEL_185:
      v89 = *v85;
      if ( v86 == *v85 )
        goto LABEL_186;
LABEL_187:
      v86 = v89;
    }
    while ( v89 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v91 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v91 + 16) < 0 )
  {
    v92 = FindSpb(a1);
    FreeSpb(v92);
    v91 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v91 + 168) && (*(_BYTE *)(v91 + 21) & 8) == 0 && (*(_WORD *)(v91 + 42) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v91 + 168));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  v93 = *((_QWORD *)a1 + 19);
  if ( v93 )
  {
    GreDeleteObject(v93);
    *((_QWORD *)a1 + 19) = 0LL;
  }
  v94 = (void *)*((_QWORD *)a1 + 16);
  if ( v94 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v94);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 16) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(a1);
  v95 = (void *)*((_QWORD *)a1 + 21);
  if ( v95 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v95);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 21) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v96 = *((_QWORD *)a1 + 25);
  if ( v96 )
  {
    Win32FreePool(v96);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v97 = *((_QWORD *)a1 + 3);
  if ( !v97 || (v98 = *(struct tagWND **)(*(_QWORD *)(v97 + 8) + 24LL), a1 == v98) )
  {
    v99 = (char *)a1 + 80;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 80);
  }
  else
  {
    v99 = (char *)a1 + 80;
    v138 = *(_OWORD *)LockPointer(&v142, (__int64)a1 + 80, (__int64)v98);
    HMAssignmentLock(&v138);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 88);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 96);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 184);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v104 = (void *)ReferenceDwmApiPort(v102, v101, v103);
    DwmAsyncOwnerChange(v104);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v105 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v105 + gSharedInfo[1] + 25) |= 2u;
  v107 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v105) + 664);
  if ( v107 )
  {
    if ( *(struct tagWND **)(v107 + 64) == a1 )
    {
      HMAssignmentUnlock(v107 + 64);
      *(_QWORD *)(v107 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v107 + 80) == a1 )
      HMAssignmentUnlock(v107 + 80);
    if ( *(struct tagWND **)(v107 + 72) == a1 )
      HMAssignmentUnlock(v107 + 72);
  }
  v109 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v109 & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v109, v106, v108);
  if ( result )
  {
    FreeClientOnWindowDestruction((struct _LIST_ENTRY *)a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 15) )
        DeleteProperties(a1);
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x2A0 )
      {
        v112 = safe_cast_fnid_to_PSWITCHWND(a1);
        v113 = v112;
        if ( v112 )
        {
          v143 = *(struct tagSwitchWndInfo **)(v112 + 8);
          if ( v143 )
          {
            RemoveSwitchWindowInfo(&v143);
            *(_QWORD *)(v113 + 8) = 0LL;
          }
        }
      }
      v114 = safe_cast_fnid_to_PMENUWND(a1);
      v115 = v114;
      if ( v114 )
      {
        v116 = *(_QWORD *)(v114 + 16);
        if ( v116 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v133, v116);
          v117 = *(_QWORD *)v133[0];
          v118 = *(_DWORD **)v133[0];
          if ( (**(_DWORD **)v133[0] & 0x20000000) != 0 )
          {
            *v118 &= ~0x40000000u;
          }
          else if ( v118 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v119 = *(_QWORD *)v133[0];
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v133[0] + 88LL));
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v119);
            *(_QWORD *)(v115 + 16) = 0LL;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v133, v117);
        }
      }
      v120 = *((_QWORD *)a1 + 34);
      if ( v120 )
      {
        Win32FreePool(v120);
        *((_QWORD *)a1 + 34) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 884LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v124 = (void *)ReferenceDwmApiPort(v122, v121, v123);
        DwmAsyncChildDestroy(v124, *(_QWORD *)a1);
      }
      *(_QWORD *)(*((_QWORD *)v99 - 5) + 48LL) = 0LL;
      HMAssignmentUnlock(v99);
      v125 = *((_QWORD *)a1 + 3);
      v127 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126);
      v134[0] = *(_QWORD *)(v127 + 16);
      *(_QWORD *)(v127 + 16) = v134;
      v128 = (void *)*((_QWORD *)a1 + 3);
      v134[1] = v125;
      v134[2] = UserDereferenceObject;
      if ( v128 )
        ObfReferenceObject(v128);
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock(v134);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v129 = *((_QWORD *)a1 + 3);
      if ( v129 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 40) + 24LL) + 16LL) + 416LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v111);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 112, *ClassPtr);
      ++*(_DWORD *)(*(_QWORD *)v132 + 72LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      SetOrClrWF(1LL, a1, 3840LL, 1LL);
      result = *((_QWORD *)a1 + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 18) = 0LL;
    }
  }
  return result;
}
