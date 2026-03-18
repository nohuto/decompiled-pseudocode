/*
 * XREFs of xxxDestroyWindow @ 0x1C001BB70
 * Callers:
 *     xxxCleanupMotherDesktopWindow @ 0x1C0009158 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C001CC1C (xxxRemoveShadow.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00AD260 (xxxCreateDefaultImeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00F8048 (xxxDW_DestroyOwnedWindows.c)
 *     NtUserDestroyWindow @ 0x1C0112A70 (NtUserDestroyWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C0125EF0 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C0126F90 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0134B60 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C000EE84 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C001B950 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C001C75C (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C001C7DC (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00AD5D8 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00AD67C (zzzImeCanDestroyDefIME.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00B0B4C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     xxxFocusSetInputContext @ 0x1C00CE6AC (xxxFocusSetInputContext.c)
 *     xxxEnableWindow @ 0x1C00CEC80 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     zzzInternalDestroyCaret @ 0x1C00DDCEC (zzzInternalDestroyCaret.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00F8048 (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C010AE1C (DWP_SetHotKey.c)
 *     xxxShowWindow @ 0x1C011E440 (xxxShowWindow.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C01360D0 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01C362C (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01C3A80 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01CCFA0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01E3704 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C01E39DC (xxxHandleDestroyGhostWindow.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C0209C00 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02257BC (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(volatile signed __int32 *a1)
{
  unsigned int v1; // esi
  int v2; // ebx
  char v4; // dl
  int v5; // r13d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 i; // rbx
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned __int8 v30; // r15
  volatile signed __int32 *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *j; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  struct tagWND *v47; // rdx
  __int64 v48; // rcx
  int CanDestroyDefIME; // ebx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // r9
  struct tagWND *v54; // rcx
  __int64 v55; // rdx
  __int128 v56; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v57[3]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v58[3]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v59[3]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v60[3]; // [rsp+A8h] [rbp-1h] BYREF
  char v61[64]; // [rsp+C0h] [rbp+17h] BYREF
  int v62; // [rsp+110h] [rbp+67h]
  struct tagMENUSTATE *v63; // [rsp+118h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = 0;
  v62 = 0;
  v57[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v57;
  v57[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v4 = *(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*a1
                + *((_QWORD *)&gSharedInfo + 1)
                + 25LL);
  v5 = v4 & 1;
  if ( gptiCurrent != *((_QWORD *)a1 + 2) )
  {
    if ( (v4 & 1) == 0 || (v4 & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_17:
      if ( v5 )
      {
        v9 = v2 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 488LL) = v9;
      }
      LOBYTE(v1) = ThreadUnlock1(v9, v8) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
  }
  if ( v5 )
  {
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 0x10000000;
    v62 = v2;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x10000000u;
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(_DWORD *)(v6 + 232);
  if ( (v7 & 0x4000) != 0 )
  {
    *(_DWORD *)(v6 + 232) = v7 & 0xFFFFBFFF;
    QueueShutdownData(*(_QWORD *)a1, 0LL);
  }
  if ( !v5 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow(*((struct tagWND **)a1 + 10), (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 608LL);
  if ( v11 )
  {
    if ( a1 == *(volatile signed __int32 **)(*(_QWORD *)v11 + 8LL) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 608LL);
      do
      {
        *(_DWORD *)(v11 + 8) &= ~4u;
        v11 = *(_QWORD *)(v11 + 48);
      }
      while ( v11 );
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v63,
          (struct tagMENUSTATE *)v12);
        xxxEndMenu(v13);
        if ( v63 )
          xxxUnlockMenuStateInternal(v63, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  v14 = *((_QWORD *)a1 + 5);
  v15 = v14;
  if ( (*(_BYTE *)(v14 + 31) & 0x40) == 0 && !*((_QWORD *)a1 + 12) && (*(_BYTE *)(v14 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v11, v14);
    v15 = *((_QWORD *)a1 + 5);
  }
  v16 = v15;
  if ( **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v15 + 31) & 0xC0) != 0x40 )
  {
    v17 = *((_QWORD *)a1 + 12);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 16);
      v19 = *((_QWORD *)a1 + 2);
      if ( v18 != v19 )
      {
        zzzAttachThreadInput(v19, v18, 0LL);
        v16 = *((_QWORD *)a1 + 5);
      }
    }
  }
  if ( (*(_BYTE *)(v16 + 31) & 0x40) != 0 && (*(_BYTE *)(v16 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v20 = *((_QWORD *)a1 + 10);
    if ( v20 )
    {
      v58[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v58;
      v58[1] = v20;
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v21 = *((_QWORD *)a1 + 10);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v21, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v23, v22);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1) )
    SetOrClrWF(1, (__int64)a1, 0x480u, 1);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 24LL) + 88LL); i; i = *(_QWORD *)(i + 64) )
    {
      if ( *(volatile signed __int32 **)(i + 96) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
        PostUnownedNotification((struct tagWND *)i);
    }
  }
  v25 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v25 & 0x10) != 0 )
  {
    if ( (v25 & 0x40) != 0 )
      xxxShowWindow(a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0, 0, (v5 << 13) + 151);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1);
      v26 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v26 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL) )
        {
          v27 = *((_QWORD *)a1 + 10);
          if ( v27 )
            zzzLockDisplayAreaAndInvalidateDCCache(v27, 16LL, 0LL);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessages(2LL, *(_QWORD *)a1);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1);
  }
  if ( !v5 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 432LL);
    v29 = 62;
    v30 = 0;
    v31 = *(volatile signed __int32 **)(v28 + 120);
    if ( a1 == v31 )
    {
      if ( *(char *)(*((_QWORD *)a1 + 5) + 31LL) < 0 )
      {
        v32 = (volatile signed __int32 *)*((_QWORD *)a1 + 12);
        if ( v32 )
        {
          v30 = 1;
          goto LABEL_83;
        }
      }
    }
    else
    {
      if ( v31 || gpqForeground != v28 )
        goto LABEL_110;
      v29 = 63;
    }
    v32 = a1;
LABEL_83:
    if ( v32 )
    {
      if ( v30 )
      {
        if ( !(unsigned int)IsNonImmersiveBand(v32) && *(char *)(*((_QWORD *)v32 + 5) + 20LL) < 0 )
        {
          for ( j = (volatile signed __int32 *)*((_QWORD *)v32 + 12); j; j = (volatile signed __int32 *)*((_QWORD *)j + 12) )
          {
            v34 = *((_QWORD *)j + 5);
            if ( (*(_BYTE *)(v34 + 234) & 1) != 0 && *(char *)(v34 + 20) >= 0 )
            {
              v32 = j;
              break;
            }
          }
        }
        v59[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v59;
        v59[1] = v32;
        _InterlockedIncrement(v32 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)v32 + 5) + 234LL) & 1) != 0 )
          xxxEnableWindow((struct tagWND *)v32);
      }
      v37 = xxxActivateWindowWithOptions(v32, (unsigned int)v30 + 2, v29, 1LL);
      if ( v30 )
        ThreadUnlock1(v36, v35);
      if ( (!v37 || !v30 && a1 == *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL))
        && (!v30 || a1 == *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        v38 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        v40 = v38;
        v41 = gpsi;
        if ( (*gpsi & 4) != 0 && v38 )
        {
          v60[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v60;
          v60[1] = v38;
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
          xxxFocusSetInputContext(v38, 0LL, 0LL);
          v40 = ThreadUnlock1(v43, v42);
        }
        v44 = gpqForeground;
        if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
        {
          if ( v40 )
            zzzInputFocusLostWindowEvent(v40, 9LL);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1u);
        }
        zzzInternalDestroyCaret(v44, v41, v39, v40);
      }
    }
  }
LABEL_110:
  v45 = *((_QWORD *)a1 + 12);
  if ( v45 )
  {
    while ( *(_QWORD *)(v45 + 96) )
      v45 = *(_QWORD *)(v45 + 96);
    v46 = v45 + 184;
    if ( a1 == *(volatile signed __int32 **)(v45 + 184) )
    {
      if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v45
                     + *((_QWORD *)&gSharedInfo + 1)
                     + 25LL) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v45 + 40) + 176LL) = 0LL;
        HMAssignmentUnlock(v46);
      }
      else
      {
        v56 = *(_OWORD *)LockPointer(v61, v46);
        HMAssignmentLock(&v56);
      }
    }
  }
  if ( !v5 )
  {
    if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, (__int64)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages((__int64)a1);
  }
  v47 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_135;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    goto LABEL_135;
  if ( !*(_QWORD *)(gptiCurrent + 784LL) )
    goto LABEL_135;
  v48 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL);
  if ( (*(_BYTE *)(v48 + 10) & 1) != 0 || *(_WORD *)v48 == *(_WORD *)(gpsi + 898LL) || v5 )
    goto LABEL_135;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    if ( !*((_QWORD *)a1 + 10) || !(unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 784LL), a1) )
      goto LABEL_135;
    v50 = *(_QWORD *)(gptiCurrent + 784LL);
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 784LL), a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_135;
    v50 = *(_QWORD *)(gptiCurrent + 784LL);
    if ( !v50 )
      goto LABEL_135;
  }
  xxxDestroyWindow(v50);
LABEL_135:
  v51 = *((_QWORD *)a1 + 10);
  if ( v51 && !v5 )
  {
    v52 = *(_QWORD *)(v51 + 16);
    if ( *(volatile signed __int32 **)(v52 + 1376) == a1 )
    {
      HMAssignmentUnlock(v52 + 1376);
      DisassociateShellFrameAppThreads2(v52, gptiCurrent);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v54 = (struct tagWND *)*((_QWORD *)a1 + 2);
      v47 = *(struct tagWND **)(v53 + 16);
      if ( v54 != v47 )
        zzzAttachThreadInput(v54, v47, 0LL);
    }
    if ( *((_DWORD *)a1 + 73) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v47);
    v55 = *((_QWORD *)a1 + 10);
    if ( v55 )
      UnlinkWindow((struct tagTERMINAL *)a1, v55);
  }
  SetOrClrWF(1, (__int64)a1, 0x380u, 1);
  xxxFreeWindow((struct tagWND *)a1);
  if ( v5 )
    *(_DWORD *)(gptiCurrent + 488LL) = v62 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  return 1LL;
}
