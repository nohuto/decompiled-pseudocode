/*
 * XREFs of xxxDestroyWindow @ 0x1C0035BC0
 * Callers:
 *     xxxCleanupMotherDesktopWindow @ 0x1C000B050 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     NtUserDestroyWindow @ 0x1C0034DF0 (NtUserDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0034E48 (xxxDW_DestroyOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C003798C (xxxRemoveShadow.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxCancelCoolSwitch @ 0x1C010ABE4 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C010BF20 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C010D200 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C011A3D0 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001BC74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C001C3B4 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C001C420 (zzzImeCanDestroyDefIME.c)
 *     xxxShowWindow @ 0x1C00225BC (xxxShowWindow.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0034E48 (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C0034FC4 (DWP_SetHotKey.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C0036718 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0036798 (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C003AD98 (xxxDW_SendDestroyMessages.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C006078C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C011BA0C (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     xxxEnableWindow @ 0x1C012FAB0 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     xxxFocusSetInputContext @ 0x1C0132D68 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0151364 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C015DFE8 (xxxHandleDestroyGhostWindow.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D678C (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D6C00 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0221150 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023D640 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r13d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // r8
  _WORD *v19; // rdx
  __int64 v20; // rax
  _WORD *v21; // rcx
  __int64 v22; // rcx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 i; // rbx
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // r12d
  unsigned __int8 v33; // r15
  __int64 *v34; // rax
  __int64 *v35; // rbx
  __int64 *j; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // bl
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rbx
  struct tagWND *v49; // rdx
  __int64 v50; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rbx
  __int64 v55; // r9
  struct tagWND *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // [rsp+50h] [rbp-59h] BYREF
  __int64 *v59; // [rsp+58h] [rbp-51h]
  __int64 v60; // [rsp+60h] [rbp-49h]
  __int64 v61; // [rsp+68h] [rbp-41h] BYREF
  __int64 v62; // [rsp+70h] [rbp-39h]
  __int64 v63; // [rsp+78h] [rbp-31h]
  __int64 v64; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v65; // [rsp+88h] [rbp-21h]
  __int64 v66; // [rsp+90h] [rbp-19h]
  __int64 v67; // [rsp+98h] [rbp-11h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-9h]
  __int64 v69; // [rsp+A8h] [rbp-1h]
  __int128 v70; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v71[8]; // [rsp+C0h] [rbp+17h] BYREF
  int v72; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v73; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = 0;
  v72 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v58 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v58;
  v59 = a1;
  if ( a1 )
    HMLockObject(a1);
  v7 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( gptiCurrent != a1[2] )
  {
    if ( !v7 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 2) == 0 )
    {
      UserSetLastError(5LL, v4, v5, v6);
LABEL_17:
      if ( v7 )
      {
        v11 = v2 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 480LL) = v11;
      }
      LOBYTE(v1) = ThreadUnlock1(v11, v10, v12) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v7 )
  {
    v2 = *(_DWORD *)(gptiCurrent + 480LL) & 0x10000000;
    v72 = v2;
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x10000000u;
  }
  v8 = a1[5];
  v9 = *(_DWORD *)(v8 + 232);
  if ( (v9 & 0x4000) != 0 )
  {
    *(_DWORD *)(v8 + 232) = v9 & 0xFFFFBFFF;
    QueueShutdownData(*a1, 0LL);
  }
  if ( !v7 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow((struct tagWND *)a1[13], (struct tagWND *)a1) )
      xxxCallCtfHook(5LL, 4LL, *a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *a1, 0LL, 5) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  v14 = *(_QWORD *)(a1[2] + 600);
  if ( v14 )
  {
    if ( a1 == *(__int64 **)(*(_QWORD *)v14 + 8LL) )
    {
      v15 = *(_QWORD *)(a1[2] + 600);
      do
      {
        *(_DWORD *)(v14 + 8) &= ~4u;
        v14 = *(_QWORD *)(v14 + 48);
      }
      while ( v14 );
      if ( (*(_DWORD *)(v15 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v73,
          (struct tagMENUSTATE *)v15);
        xxxEndMenu(v16);
        if ( v73 )
          xxxUnlockMenuStateInternal(v73, 0);
      }
    }
  }
  if ( ghwndSwitch == *a1 )
    ghwndSwitch = 0LL;
  v17 = a1[5];
  v18 = v17;
  if ( (*(_BYTE *)(v17 + 31) & 0x40) == 0 && !a1[15] && (*(_BYTE *)(v17 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v14, v17);
    v18 = a1[5];
  }
  v19 = *(_WORD **)(a1[17] + 8);
  if ( *v19 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v18 + 31) & 0xC0) != 0x40 )
  {
    v20 = a1[15];
    if ( v20 )
    {
      v19 = *(_WORD **)(v20 + 16);
      v21 = (_WORD *)a1[2];
      if ( v19 != v21 )
      {
        zzzAttachThreadInput(v21, v19, 0LL);
        v18 = a1[5];
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 31) & 0x40) != 0 && (*(_BYTE *)(v18 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v22 = a1[13];
    if ( v22 )
    {
      v61 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v61;
      v62 = v22;
      HMLockObject(v22);
      v23 = a1[13];
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v23, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v25, v24, v26);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1, v19, v18) )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(a1[5] + 42) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[3] + 8) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(__int64 **)(i + 120) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  v28 = *(_BYTE *)(a1[5] + 31);
  if ( (v28 & 0x10) != 0 )
  {
    if ( (v28 & 0x40) != 0 )
      xxxShowWindow((struct tagWND *)a1);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0, 0, (v7 << 13) + 151);
    if ( (*(_BYTE *)(a1[5] + 31) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1, 0);
      v29 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v29 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v29 + 8) + 24LL) )
        {
          v30 = a1[13];
          if ( v30 )
            zzzLockDisplayAreaAndInvalidateDCCache(v30, 16LL);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*(_WORD *)(a1[5] + 42) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessages(2uLL, *a1);
  }
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows((__int64)a1);
    DWP_SetHotKey((struct tagWND *)a1, 0);
  }
  if ( !v7 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 424LL);
    v32 = 62;
    v33 = 0;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v34 = *(__int64 **)(v31 + 128);
    if ( a1 == v34 )
    {
      if ( *(char *)(a1[5] + 31) < 0 )
      {
        v35 = (__int64 *)a1[15];
        if ( v35 )
        {
          v33 = 1;
          goto LABEL_83;
        }
      }
    }
    else
    {
      if ( v34 || gpqForeground != v31 )
        goto LABEL_110;
      v32 = 63;
    }
    v35 = a1;
LABEL_83:
    if ( v35 )
    {
      if ( v33 )
      {
        if ( !(unsigned int)IsNonImmersiveBand(v35) && *(char *)(v35[5] + 20) < 0 )
        {
          for ( j = (__int64 *)v35[15]; j; j = (__int64 *)j[15] )
          {
            v37 = j[5];
            if ( (*(_BYTE *)(v37 + 234) & 1) != 0 && *(char *)(v37 + 20) >= 0 )
            {
              v35 = j;
              break;
            }
          }
        }
        v64 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v64;
        v65 = v35;
        HMLockObject(v35);
        if ( (*(_BYTE *)(v35[5] + 234) & 1) != 0 )
          xxxEnableWindow((struct tagWND *)v35);
      }
      v40 = xxxActivateWindowWithOptions(v35, (unsigned int)v33 + 2, v32, 1LL);
      if ( v33 )
        ThreadUnlock1(v39, v38, v41);
      if ( (!v40 || !v33 && a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL))
        && (!v33 || a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        v42 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        v43 = v42;
        if ( (*gpsi & 4) != 0 && v42 )
        {
          v67 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v67;
          v68 = v42;
          HMLockObject(v42);
          xxxFocusSetInputContext(v43, 0LL, 0LL);
          v43 = ThreadUnlock1(v45, v44, v46);
        }
        if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
        {
          if ( v43 )
            zzzInputFocusLostWindowEvent(v43, 9LL);
          xxxWindowEvent(0x8005u, 0);
          xxxWindowEvent(3u, 1);
        }
        zzzInternalDestroyCaret();
      }
    }
  }
LABEL_110:
  v47 = a1[15];
  if ( v47 )
  {
    while ( *(_QWORD *)(v47 + 120) )
      v47 = *(_QWORD *)(v47 + 120);
    v48 = v47 + 200;
    if ( a1 == *(__int64 **)(v47 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v47) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v48 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v48);
      }
      else
      {
        v70 = *(_OWORD *)LockPointer(v71, v48, a1[15]);
        HMAssignmentLock(&v70);
      }
    }
  }
  if ( !v7 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  v49 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_135;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    goto LABEL_135;
  if ( !*(_QWORD *)(gptiCurrent + 776LL) )
    goto LABEL_135;
  v50 = *(_QWORD *)(a1[17] + 8);
  if ( (*(_BYTE *)(v50 + 10) & 1) != 0 || *(_WORD *)v50 == *(_WORD *)(gpsi + 898LL) || v7 )
    goto LABEL_135;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( !a1[13] || !(unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 776LL), (__int64)a1) )
      goto LABEL_135;
    v52 = *(_QWORD *)(gptiCurrent + 776LL);
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 776LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_135;
    v52 = *(_QWORD *)(gptiCurrent + 776LL);
    if ( !v52 )
      goto LABEL_135;
  }
  xxxDestroyWindow(v52);
LABEL_135:
  v53 = a1[13];
  if ( v53 && !v7 )
  {
    v54 = *(_QWORD *)(v53 + 16);
    if ( *(__int64 **)(v54 + 1400) == a1 )
    {
      HMAssignmentUnlock(v54 + 1400);
      DisassociateShellFrameAppThreads2(v54, gptiCurrent);
    }
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v56 = (struct tagWND *)a1[2];
      v49 = *(struct tagWND **)(v55 + 16);
      if ( v56 != v49 )
        zzzAttachThreadInput(v56, v49, 0LL);
    }
    if ( *((_DWORD *)a1 + 77) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v49);
    v57 = a1[13];
    if ( v57 )
      UnlinkWindow(a1, v57);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  xxxFreeWindow((struct tagWND *)a1);
  if ( v7 )
    *(_DWORD *)(gptiCurrent + 480LL) = v72 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  return 1LL;
}
