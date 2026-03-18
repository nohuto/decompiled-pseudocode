/*
 * XREFs of xxxDestroyWindow @ 0x1C0094E90
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     NtUserDestroyWindow @ 0x1C00940C0 (NtUserDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0094118 (xxxDW_DestroyOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C0096C5C (xxxRemoveShadow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C0131420 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C0132700 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C013FEF0 (xxxDestroyThreadDDEObject.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01415E0 (xxxCleanupMotherDesktopWindow.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     xxxFocusSetInputContext @ 0x1C0014208 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x1C0016740 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001B54C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxShowWindow @ 0x1C002CA38 (xxxShowWindow.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C0091140 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0091470 (zzzImeCanDestroyDefIME.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0094118 (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C0094294 (DWP_SetHotKey.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C00959E0 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0095A60 (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0099FC8 (xxxDW_SendDestroyMessages.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00BF0AC (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C014122C (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01505A4 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C015D038 (xxxHandleDestroyGhostWindow.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D6900 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01D6D80 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E14E0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0221690 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023DC60 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 *a1)
{
  unsigned int v1; // esi
  int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r12d
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
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 i; // rbx
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int8 v35; // r15
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 j; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // bl
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rbx
  struct tagWND *v52; // rdx
  __int64 v53; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rbx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v62; // [rsp+60h] [rbp-41h]
  __int64 v63; // [rsp+68h] [rbp-39h]
  __int64 v64; // [rsp+70h] [rbp-31h] BYREF
  __int64 v65; // [rsp+78h] [rbp-29h]
  __int64 v66; // [rsp+80h] [rbp-21h]
  __int64 v67; // [rsp+88h] [rbp-19h] BYREF
  __int64 v68; // [rsp+90h] [rbp-11h]
  __int64 v69; // [rsp+98h] [rbp-9h]
  __int64 v70; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v71; // [rsp+A8h] [rbp+7h]
  __int64 v72; // [rsp+B0h] [rbp+Fh]
  __int128 v73; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v74; // [rsp+C8h] [rbp+27h] BYREF
  struct tagMENUSTATE *v75; // [rsp+108h] [rbp+67h] BYREF

  v1 = 0;
  v3 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v61 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v61;
  v62 = a1;
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
        v11 = v3 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 480LL) = v11;
      }
      LOBYTE(v1) = ThreadUnlock1(v11, v10, v12) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v7 )
  {
    v3 = *(_DWORD *)(gptiCurrent + 480LL) & 0x10000000;
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
          (MenuStateOwnerLockxxxUnlock *)&v75,
          (struct tagMENUSTATE *)v15);
        xxxEndMenu(v16);
        if ( v75 )
          xxxUnlockMenuStateInternal(v75, 0);
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
  if ( **(_WORD **)(a1[17] + 8) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v18 + 31) & 0xC0) != 0x40 )
  {
    v19 = a1[15];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      v21 = a1[2];
      if ( v20 != v21 )
      {
        zzzAttachThreadInput(v21, v20, 0);
        v18 = a1[5];
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 31) & 0x40) != 0 && (*(_BYTE *)(v18 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v22 = a1[13];
    if ( v22 )
    {
      v64 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v64;
      v65 = v22;
      HMLockObject(v22);
      v23 = a1[13];
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v23, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v25, v24, v26);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetOrClrWF(1, (__int64)a1, 0x480u, 1);
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
      v32 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v32 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v32 + 8) + 24LL) )
        {
          v33 = a1[13];
          if ( v33 )
            zzzLockDisplayAreaAndInvalidateDCCache(v33, 16LL, 0LL);
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
    xxxDW_DestroyOwnedWindows((__int64)a1, v29, v30, v31);
    DWP_SetHotKey((struct tagWND *)a1, 0);
  }
  if ( !v7 )
  {
    v34 = *(_QWORD *)(gptiCurrent + 424LL);
    v67 = 0LL;
    v35 = 0;
    v68 = 0LL;
    v69 = 0LL;
    v36 = *(__int64 **)(v34 + 128);
    if ( a1 == v36 )
    {
      if ( *(char *)(a1[5] + 31) < 0 )
      {
        v37 = a1[15];
        if ( v37 )
        {
          v35 = 1;
          goto LABEL_82;
        }
      }
    }
    else if ( v36 || gpqForeground != v34 )
    {
      goto LABEL_109;
    }
    v37 = (__int64)a1;
LABEL_82:
    if ( v37 )
    {
      if ( v35 )
      {
        if ( !IsNonImmersiveBand(v37) && *(char *)(*(_QWORD *)(v37 + 40) + 20LL) < 0 )
        {
          for ( j = *(_QWORD *)(v37 + 120); j; j = *(_QWORD *)(j + 120) )
          {
            v39 = *(_QWORD *)(j + 40);
            if ( (*(_BYTE *)(v39 + 234) & 1) != 0 && *(char *)(v39 + 20) >= 0 )
            {
              v37 = j;
              break;
            }
          }
        }
        v67 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v67;
        v68 = v37;
        HMLockObject(v37);
        if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 234LL) & 1) != 0 )
          xxxEnableWindow((struct tagWND *)v37, 1LL, v40);
      }
      v43 = xxxActivateWindowWithOptions(v37, (unsigned int)v35 + 2, 62LL, 1);
      if ( v35 )
        ThreadUnlock1(v42, v41, v44);
      if ( (!v43 || !v35 && a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL))
        && (!v35 || a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        v45 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        v46 = (__int64 *)v45;
        if ( (*gpsi & 4) != 0 && v45 )
        {
          v70 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v70;
          v71 = v45;
          HMLockObject(v45);
          xxxFocusSetInputContext(v46, 0, 0);
          v46 = (__int64 *)ThreadUnlock1(v48, v47, v49);
        }
        if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
        {
          if ( v46 )
            zzzInputFocusLostWindowEvent((__int64)v46);
          xxxWindowEvent(0x8005u, 0);
          xxxWindowEvent(3u, 1);
        }
        zzzInternalDestroyCaret();
      }
    }
  }
LABEL_109:
  v50 = a1[15];
  if ( v50 )
  {
    while ( *(_QWORD *)(v50 + 120) )
      v50 = *(_QWORD *)(v50 + 120);
    v51 = v50 + 200;
    if ( a1 == *(__int64 **)(v50 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v50) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v51 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v51);
      }
      else
      {
        v73 = *(_OWORD *)LockPointer(&v74, v51, a1[15]);
        HMAssignmentLock(&v73);
      }
    }
  }
  if ( !v7 )
  {
    if ( *(char *)(a1[5] + 19) >= 0 )
      xxxWindowEvent(0x8001u, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  v52 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_134;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    goto LABEL_134;
  if ( !*(_QWORD *)(gptiCurrent + 776LL) )
    goto LABEL_134;
  v53 = *(_QWORD *)(a1[17] + 8);
  if ( (*(_BYTE *)(v53 + 10) & 1) != 0 || *(_WORD *)v53 == *(_WORD *)(gpsi + 898LL) || v7 )
    goto LABEL_134;
  if ( (*(_BYTE *)(a1[5] + 31) & 0x40) != 0 )
  {
    if ( !a1[13] || !(unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 776LL), (__int64)a1) )
      goto LABEL_134;
    v55 = *(_QWORD *)(gptiCurrent + 776LL);
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD **)(gptiCurrent + 776LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_134;
    v55 = *(_QWORD *)(gptiCurrent + 776LL);
    if ( !v55 )
      goto LABEL_134;
  }
  xxxDestroyWindow(v55);
LABEL_134:
  v56 = a1[13];
  if ( v56 && !v7 )
  {
    v57 = *(_QWORD *)(v56 + 16);
    if ( *(__int64 **)(v57 + 1400) == a1 )
    {
      HMAssignmentUnlock(v57 + 1400);
      DisassociateShellFrameAppThreads2(v57, gptiCurrent);
    }
    if ( (*(_BYTE *)(a1[5] + 31) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v59 = a1[2];
      v52 = *(struct tagWND **)(v58 + 16);
      if ( (struct tagWND *)v59 != v52 )
        zzzAttachThreadInput(v59, (__int64)v52, 0);
    }
    if ( *((_DWORD *)a1 + 77) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v52);
    v60 = a1[13];
    if ( v60 )
      UnlinkWindow(a1, v60);
  }
  SetOrClrWF(1, (__int64)a1, 0x380u, 1);
  xxxFreeWindow((struct tagWND *)a1);
  if ( v7 )
    *(_DWORD *)(gptiCurrent + 480LL) = v3 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  return 1LL;
}
