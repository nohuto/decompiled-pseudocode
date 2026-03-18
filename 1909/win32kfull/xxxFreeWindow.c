/*
 * XREFs of xxxFreeWindow @ 0x1C00396A4
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C000B900 (CleanupIAMAccess.c)
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C000EF1C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C0010A4C (DwmAsyncShellWindowChange.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001BC74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     DwmAsyncChildDestroy @ 0x1C00367C0 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C0036950 (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C003798C (xxxRemoveShadow.c)
 *     xxxRemoveFullScreen @ 0x1C0037F30 (xxxRemoveFullScreen.c)
 *     DestroyWindowSmIcon @ 0x1C0038000 (DestroyWindowSmIcon.c)
 *     MagpFindThreadContext @ 0x1C003807C (MagpFindThreadContext.c)
 *     DestroyWindowsTimers @ 0x1C0038094 (DestroyWindowsTimers.c)
 *     ClearSendMessages @ 0x1C00380E0 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00382B0 (GreDeleteSpriteOverlapPresent.c)
 *     DereferenceClass @ 0x1C00383C0 (DereferenceClass.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     FreeClientOnWindowDestruction @ 0x1C0038F40 (FreeClientOnWindowDestruction.c)
 *     _FindActivationFilterWindow @ 0x1C0038FE0 (_FindActivationFilterWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0039014 (UpdatePointerRedirIsAlive.c)
 *     FreeWindowMessageFilter @ 0x1C003905C (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C00390A8 (FreeWindowGCData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C003F360 (FindQMsg.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0050668 (xxxClientFreeWindowClassExtraBytes.c)
 *     GetClassPtr @ 0x1C00601A0 (GetClassPtr.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00614E8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     IPostQuitMessage @ 0x1C0079FE0 (IPostQuitMessage.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C007CA10 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DeleteHrgnClip @ 0x1C00CF610 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C00CF944 (InvalidateDCE.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00CFFA0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00EA580 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00ECB68 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     DecPaintCount @ 0x1C00EF7B0 (DecPaintCount.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C010831C (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010954C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _DeregisterShellHookWindow @ 0x1C0117800 (_DeregisterShellHookWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFBD4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D7428 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01DA670 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4BE0 (RemoveSwitchWindowInfo.c)
 *     FindSpb @ 0x1C0208BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C020BE3C (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C020D020 (xxxDeferredDesktopRotation.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020F73C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0210084 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C021117C (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271414 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C0283FC0 (GreDeleteWnd.c)
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
  _QWORD *v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct tagSHADOW *v54; // rbx
  struct tagSHADOW **v55; // rcx
  struct tagSHADOW **v56; // rax
  __int64 Prop; // rbx
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r9
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
  __int64 v88; // r9
  __int64 QMsg; // rax
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  EWNDOBJ *v97; // rbx
  __int64 **v98; // rsi
  __int64 *v99; // rbx
  int v100; // edx
  __int64 v101; // rcx
  __int64 *v102; // rax
  __int64 Spb; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  void *v106; // r8
  void *v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  struct tagWND *v110; // r8
  char *v111; // r14
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  void *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rbx
  __int64 v122; // r8
  __int64 v123; // rcx
  __int64 result; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // r8
  __int64 v132; // rdx
  _DWORD *v133; // rcx
  __int64 v134; // rbx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  void *v139; // rax
  __int64 v140; // r14
  __int64 v141; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 *v146; // rax
  void *v147; // rcx
  __int64 v148; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *ClassPtr; // rax
  _QWORD v151[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v152; // [rsp+58h] [rbp-79h] BYREF
  __int64 v153; // [rsp+60h] [rbp-71h]
  __int64 v154; // [rsp+68h] [rbp-69h]
  __int64 v155; // [rsp+70h] [rbp-61h] BYREF
  __int64 v156; // [rsp+78h] [rbp-59h]
  __int64 v157; // [rsp+80h] [rbp-51h]
  __int64 v158; // [rsp+88h] [rbp-49h] BYREF
  __int64 v159; // [rsp+90h] [rbp-41h]
  __int64 v160; // [rsp+98h] [rbp-39h]
  __int128 v161; // [rsp+A8h] [rbp-29h]
  __int128 v162; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v163; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v164; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v165; // [rsp+E8h] [rbp+17h] BYREF
  _BYTE v166[16]; // [rsp+F8h] [rbp+27h] BYREF
  struct tagSwitchWndInfo *v167; // [rsp+140h] [rbp+6Fh] BYREF

  v167 = a2;
  v4 = *((_QWORD *)a1 + 3);
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
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
    SetOrClrWF(0LL, a1, 32LL, 1LL);
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
      *(_QWORD *)&v161 = v37;
      *((_QWORD *)&v161 + 1) = v40;
      v162 = v161;
      HMAssignmentLock(&v162);
      v163 = *(_OWORD *)LockPointer(&v165, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v163);
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
      zzzInputFocusLostWindowEvent(a1, 10LL);
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
        v47 = v46;
        v45 = v48;
        if ( v46 )
        {
          v49 = *v46;
          if ( *v46 )
          {
            v155 = 0LL;
            v156 = 0LL;
            v157 = 0LL;
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v155 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v155;
            v156 = v49;
            HMLockObject(v49);
            xxxResetTooltip(v47);
            ThreadUnlock1(v52, v51, v53);
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
    v54 = gpshadowFirst;
    v55 = &gpshadowFirst;
    while ( v54 )
    {
      v56 = (struct tagSHADOW **)((char *)v54 + 16);
      if ( *((struct tagWND **)v54 + 1) == a1 )
      {
        *v55 = *v56;
        HMAssignmentUnlock(v54);
        HMAssignmentUnlock((char *)v54 + 8);
        Win32FreePool(v54);
        break;
      }
      v54 = *v56;
      v55 = v56;
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
    v158 = 0LL;
    v159 = 0LL;
    v160 = 0LL;
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v158 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v158;
      v159 = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(a1, Prop);
      ThreadUnlock1(v60, v59, v61);
    }
    v62 = (unsigned __int16)atomDDEImp;
    v63 = *((_QWORD *)a1 + 18);
    if ( atomDDEImp == word_1C032A65C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v64 = RealInternalRemoveProp(v63, v62, 1LL, v58);
    v66 = v64;
    if ( v64 )
    {
      *(_WORD *)(v64 + 88) = 0;
      if ( !*(_WORD *)(v64 + 90) )
      {
        v67 = SeTokenType(*(PACCESS_TOKEN *)(v64 + 32));
        v68 = *(void **)(v66 + 32);
        if ( v67 == TokenPrimary || v68 )
          ObfDereferenceObject(v68);
        Win32FreePool(v66);
      }
    }
    v69 = (unsigned __int16)gatomMonitorInheritance;
    v70 = *((_QWORD *)a1 + 18);
    if ( gatomMonitorInheritance == word_1C032A65C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    RealInternalRemoveProp(v70, v69, 1LL, v65);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 18LL, *(_QWORD *)a1);
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
    UnsetLayeredWindow(a1);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v87 + 27) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_DWORD *)(v87 + 232) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v87 + 136) || (*(_BYTE *)(v87 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    v87 = *((_QWORD *)a1 + 5);
  }
  if ( (*(_BYTE *)(v87 + 17) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
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
    v90 = *((_QWORD *)a1 + 21);
    if ( v90 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v90);
    }
  }
  v91 = *((_QWORD *)a1 + 20);
  if ( v91 )
  {
    if ( v91 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v91);
    }
  }
  v92 = *((_QWORD *)a1 + 3);
  if ( v92 )
  {
    v93 = *(_QWORD *)(v92 + 56);
    if ( v93 && a1 == *(struct tagWND **)(v93 + 80) )
    {
      v94 = *(_QWORD *)(v92 + 56);
LABEL_183:
      UnlockNotifyWindow((struct tagMENU *)v94);
      goto LABEL_184;
    }
    v94 = *(_QWORD *)(v92 + 64);
    if ( v94 && a1 == *(struct tagWND **)(v94 + 80) )
      goto LABEL_183;
  }
LABEL_184:
  if ( gcountPWO )
  {
    v95 = (unsigned __int16)atomWndObj;
    v96 = *((_QWORD *)a1 + 18);
    if ( atomWndObj == word_1C032A65C )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
    v97 = (EWNDOBJ *)RealInternalRemoveProp(v96, v95, 1LL, v88);
    if ( v97 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v97);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v98 = (__int64 **)(gpDispInfo + 24LL);
  v99 = *(__int64 **)(gpDispInfo + 24LL);
  if ( v99 )
  {
    do
    {
      v100 = *((_DWORD *)v99 + 16);
      if ( (v100 & 0x400800) != 0 )
      {
LABEL_202:
        v102 = (__int64 *)*v99;
        v98 = (__int64 **)v99;
        goto LABEL_203;
      }
      v101 = v99[2];
      if ( (struct tagWND *)v101 == a1 || (struct tagWND *)v99[3] == a1 || (struct tagWND *)v99[4] == a1 )
      {
        if ( (v100 & 2) == 0 )
        {
          if ( v99 == *(__int64 **)(*(_QWORD *)(v101 + 136) + 40LL) || v99 != *(__int64 **)(v101 + 248) )
          {
            if ( (v100 & 0xC0) != 0 )
              DeleteHrgnClip(v99);
LABEL_200:
            InvalidateDCE(v99);
            goto LABEL_201;
          }
          *(_QWORD *)(v101 + 248) = 0LL;
          goto LABEL_231;
        }
        if ( (v100 & 0x1000) != 0 )
        {
          if ( v99[9] == gptiCurrent )
          {
            v112 = ReleaseCacheDC(v99[1], 0LL);
          }
          else
          {
            DestroyCacheDC(v98, v99[1]);
            v112 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(v99[1], 2147483666LL, 0LL, 0LL) )
            goto LABEL_200;
          v112 = 2;
        }
        if ( v112 != 1 )
        {
          if ( v112 != 2 )
            goto LABEL_200;
LABEL_231:
          DestroyCacheDC(v98, v99[1]);
        }
      }
LABEL_201:
      v102 = *v98;
      if ( v99 == *v98 )
        goto LABEL_202;
LABEL_203:
      v99 = v102;
    }
    while ( v102 );
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  v104 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v104 + 16) < 0 )
  {
    v105 = FindSpb(a1);
    FreeSpb(v105);
    v104 = *((_QWORD *)a1 + 5);
  }
  if ( *(_QWORD *)(v104 + 168) && (*(_BYTE *)(v104 + 21) & 8) == 0 && (*(_WORD *)(v104 + 42) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(*(_QWORD *)(v104 + 168));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  v106 = (void *)*((_QWORD *)a1 + 19);
  if ( v106 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v106);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v107 = (void *)*((_QWORD *)a1 + 23);
  if ( v107 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v107);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  v108 = *((_QWORD *)a1 + 27);
  if ( v108 )
  {
    Win32FreePool(v108);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v109 = *((_QWORD *)a1 + 3);
  if ( !v109 || (v110 = *(struct tagWND **)(*(_QWORD *)(v109 + 8) + 24LL), a1 == v110) )
  {
    v111 = (char *)a1 + 104;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v111 = (char *)a1 + 104;
    v164 = *(_OWORD *)LockPointer(v166, (char *)a1 + 104, v110);
    HMAssignmentLock(&v164);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v116 = (void *)ReferenceDwmApiPort(v114, v113, v115);
    DwmAsyncOwnerChange(v116, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v117 = _HMPheFromObject(a1);
  *(_BYTE *)(v117 + 25) |= 2u;
  v121 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v119, v118) + 664);
  if ( v121 )
  {
    if ( *(struct tagWND **)(v121 + 64) == a1 )
    {
      HMAssignmentUnlock(v121 + 64);
      *(_QWORD *)(v121 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v121 + 80) == a1 )
      HMAssignmentUnlock(v121 + 80);
    if ( *(struct tagWND **)(v121 + 72) == a1 )
      HMAssignmentUnlock(v121 + 72);
  }
  v123 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v123 & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v123, v120, v122);
  if ( result )
  {
    FreeClientOnWindowDestruction((struct _LIST_ENTRY *)a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
        DeleteProperties(a1);
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x2A0 )
      {
        v127 = safe_cast_fnid_to_PSWITCHWND(a1);
        v128 = v127;
        if ( v127 )
        {
          v167 = *(struct tagSwitchWndInfo **)(v127 + 8);
          if ( v167 )
          {
            RemoveSwitchWindowInfo(&v167);
            *(_QWORD *)(v128 + 8) = 0LL;
          }
        }
      }
      v129 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v130 = v129;
      if ( v129 && *(_QWORD *)(v129 + 16) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v151);
        v132 = *(_QWORD *)v151[0];
        v133 = *(_DWORD **)v151[0];
        if ( (**(_DWORD **)v151[0] & 0x20000000) != 0 )
        {
          *v133 &= ~0x40000000u;
        }
        else if ( v133 == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
        }
        else
        {
          v134 = *(_QWORD *)v151[0];
          NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v151[0] + 88LL));
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v134);
          *(_QWORD *)(v130 + 16) = 0LL;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v151, v132, v131);
      }
      v135 = *((_QWORD *)a1 + 35);
      if ( v135 )
      {
        Win32FreePool(v135);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 892LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v139 = (void *)ReferenceDwmApiPort(v137, v136, v138);
        DwmAsyncChildDestroy(v139, *(_QWORD *)a1);
      }
      *(_QWORD *)(*((_QWORD *)v111 - 8) + 48LL) = 0LL;
      HMAssignmentUnlock(v111);
      v140 = *((_QWORD *)a1 + 3);
      v141 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v144, v143, v145) )
      {
        v146 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v146 )
          v141 = *v146;
      }
      v152 = *(_QWORD *)(v141 + 16);
      *(_QWORD *)(v141 + 16) = &v152;
      v147 = (void *)*((_QWORD *)a1 + 3);
      v153 = v140;
      v154 = UserDereferenceObject;
      if ( v147 )
        ObfReferenceObject(v147);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      return PopAndFreeW32ThreadLock(&v152);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v148 = *((_QWORD *)a1 + 3);
      if ( v148 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v148 + 40) + 24LL) + 16LL) + 416LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v126, v125);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), CurrentProcessWin32Process, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*((_QWORD *)a1 + 17) + 72LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      SetOrClrWF(1LL, a1, 3840LL, 1LL);
      result = *((_QWORD *)a1 + 5);
      *(_QWORD *)(result + 152) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  return result;
}
