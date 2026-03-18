/*
 * XREFs of xxxDestroyWindow @ 0x1C00711E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     NtUserDestroyWindow @ 0x1C0071190 (NtUserDestroyWindow.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0071FE0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     xxxRemoveShadow @ 0x1C00F6BA8 (xxxRemoveShadow.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C0105F90 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C0107074 (xxxCsDdeInitialize.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0108D28 (xxxCleanupMotherDesktopWindow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0111A40 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0034C20 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C005AAA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxFocusSetInputContext @ 0x1C005EEB8 (xxxFocusSetInputContext.c)
 *     xxxEnableWindow @ 0x1C005F4F0 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C0063D14 (zzzInternalDestroyCaret.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C006E84C (ImeCanDestroyDefIMEforChild.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0070C90 (zzzImeCanDestroyDefIME.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C0071C70 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0071CF4 (IsMotherDesktopWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0071D1C (xxxDW_SendDestroyMessages.c)
 *     DWP_SetHotKey @ 0x1C0071F20 (DWP_SetHotKey.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C0071FE0 (xxxDW_DestroyOwnedWindows.c)
 *     xxxShowWindow @ 0x1C0073948 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C010F9BC (xxxHandleDestroyGhostWindow.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0135CF4 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01A1D80 (DisassociateShellFrameAppThreads2.c)
 *     QueueShutdownData @ 0x1C01A2190 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C01E3D30 (xxxFlushPalette.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C01FCD64 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(ULONG_PTR a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _WORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 i; // rax
  char v30; // cl
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // r9d
  __int64 j; // rcx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  struct tagWND *v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  int CanDestroyDefIME; // ebx
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // rdx
  struct tagSwitchWndInfo *v61; // rdx
  __int64 v62; // r8
  int v63; // r9d
  struct tagMENUSTATE *v64; // [rsp+58h] [rbp-51h] BYREF
  __int128 v65; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v66[3]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v67[3]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v68[3]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v69[3]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v70[6]; // [rsp+D0h] [rbp+27h] BYREF
  int v71; // [rsp+110h] [rbp+67h]
  __int64 v72; // [rsp+118h] [rbp+6Fh]
  unsigned int v73; // [rsp+118h] [rbp+6Fh]
  __int64 v74; // [rsp+118h] [rbp+6Fh]
  int v75; // [rsp+120h] [rbp+77h]
  __int64 v76; // [rsp+128h] [rbp+7Fh]

  v1 = 0;
  v75 = 0;
  v3 = gptiCurrent;
  v66[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v66;
  v66[1] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v4 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v5 = *(unsigned __int8 *)(v4 + gSharedInfo[1] + 25);
  v6 = *(_BYTE *)(v4 + gSharedInfo[1] + 25) & 1;
  v71 = v6;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    if ( (*(_BYTE *)(v4 + gSharedInfo[1] + 25) & 1) == 0 || (v5 & 2) == 0 )
    {
      UserSetLastError(5LL, v5);
LABEL_17:
      if ( v71 )
      {
        v10 = v75 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 480LL) = v10;
      }
      LOBYTE(v1) = ThreadUnlock1(v10, v9, v11) == 0;
      return v1;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
    v6 = v71;
  }
  if ( v6 )
  {
    v75 = *(_DWORD *)(gptiCurrent + 480LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x10000000u;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_DWORD *)(v7 + 232);
  if ( (v8 & 0x4000) != 0 )
  {
    *(_DWORD *)(v7 + 232) = v8 & 0xFFFFBFFF;
    QueueShutdownData(*(_QWORD *)a1, 0LL);
  }
  if ( !v71 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow(*(struct tagWND **)(a1 + 80), (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v13 )
  {
    if ( a1 == *(_QWORD *)(*(_QWORD *)v13 + 8LL) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
      do
      {
        *(_DWORD *)(v13 + 8) &= ~4u;
        v13 = *(_QWORD *)(v13 + 48);
      }
      while ( v13 );
      if ( (*(_DWORD *)(v14 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v64,
          (struct tagMENUSTATE *)v14);
        xxxEndMenu(v15);
        if ( v64 )
          xxxUnlockMenuStateInternal(v64, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  v16 = *(_QWORD *)(a1 + 40);
  v17 = v16;
  if ( (*(_BYTE *)(v16 + 31) & 0x40) == 0 && !*(_QWORD *)(a1 + 96) && (*(_BYTE *)(v16 + 18) & 0x20) != 0 )
  {
    xxxFlushPalette(a1, v13, v16);
    v17 = *(_QWORD *)(a1 + 40);
  }
  v18 = v17;
  v19 = *(_WORD **)(*(_QWORD *)(a1 + 112) + 8LL);
  if ( *v19 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v17 + 31) & 0xC0) != 0x40 )
  {
    v20 = *(_QWORD *)(a1 + 96);
    if ( v20 )
    {
      v19 = *(_WORD **)(v20 + 16);
      v21 = *(_QWORD *)(a1 + 16);
      if ( v19 != (_WORD *)v21 )
      {
        zzzAttachThreadInput(v21, (__int64)v19, 0);
        v18 = *(_QWORD *)(a1 + 40);
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 31) & 0x40) != 0 && (*(_BYTE *)(v18 + 24) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v22 = *(_QWORD *)(a1 + 80);
    if ( v22 )
    {
      v67[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v67;
      v67[1] = v22;
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v23 = *(_QWORD *)(a1 + 144);
      v24 = *(__int64 **)(a1 + 80);
      v25 = *(_QWORD *)a1;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v24, 0x210u, (HWND)(((unsigned __int16)v23 << 16) | 2), v25, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v27, v26, v28);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1, v19, v17) )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 24LL) + 88LL); ; i = *(_QWORD *)(i + 64) )
    {
      v72 = i;
      if ( !i )
        break;
      if ( *(_QWORD *)(i + 96) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
      {
        PostUnownedNotification((struct tagWND *)i);
        i = v72;
      }
    }
  }
  v30 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v30 & 0x10) != 0 )
  {
    if ( (v30 & 0x40) != 0 )
      xxxShowWindow(a1, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, (v71 << 13) + 151);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1);
      v31 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v31 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v31 + 8) + 24LL) )
        {
          v32 = *(_QWORD *)(a1 + 80);
          if ( v32 )
            zzzLockDisplayAreaAndInvalidateDCCache(v32, 16, 0LL);
          xxxRedrawWindow(0LL, *(_QWORD *)(a1 + 40) + 88LL, 0LL, 133);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow((_QWORD *)a1) && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessages(2uLL, *(_QWORD *)a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    DWP_SetHotKey((struct tagWND *)a1);
  }
  if ( !v71 )
  {
    v33 = *(_QWORD *)(gptiCurrent + 424LL);
    v34 = *(_QWORD *)(v33 + 120);
    if ( a1 == v34 )
    {
      if ( *(char *)(*(_QWORD *)(a1 + 40) + 31LL) < 0 )
      {
        v35 = *(_QWORD *)(a1 + 96);
        v76 = v35;
        if ( v35 )
        {
          v36 = 2;
          goto LABEL_82;
        }
      }
    }
    else if ( v34 || gpqForeground != v33 )
    {
      goto LABEL_109;
    }
    v36 = 3;
    v76 = a1;
    v35 = a1;
LABEL_82:
    v73 = v36;
    if ( v35 )
    {
      if ( v36 == 2 && !IsNonImmersiveBand(v35) && *(char *)(*(_QWORD *)(v35 + 40) + 20LL) < 0 )
      {
        for ( j = *(_QWORD *)(v35 + 96); j; j = *(_QWORD *)(j + 96) )
        {
          v38 = *(_QWORD *)(j + 40);
          if ( (*(_BYTE *)(v38 + 234) & 1) != 0 && *(char *)(v38 + 20) >= 0 )
          {
            v35 = j;
            v76 = j;
            break;
          }
        }
      }
      v68[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v68;
      v68[1] = v35;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
      if ( v36 == 2 && (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 234LL) & 1) != 0 )
      {
        xxxEnableWindow((struct tagWND *)v35, 1);
        v35 = v76;
        v36 = v73;
      }
      v39 = xxxActivateWindow((struct tagWND *)v35, v36, v35);
      v42 = v73;
      if ( (!v39 || v73 == 3 && a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL))
        && (v73 == 3 || a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        v43 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
        v44 = v43;
        if ( (*gpsi & 4) != 0 && v43 )
        {
          v69[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v69;
          v69[1] = v43;
          _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
          xxxFocusSetInputContext((__int64 *)v43, 0LL, 0);
          v44 = ThreadUnlock1(v46, v45, v47);
        }
        if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
        {
          if ( v44 )
            zzzInputFocusLostWindowEvent(v44, 9);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1);
        }
        zzzInternalDestroyCaret();
      }
      ThreadUnlock1(v42, v40, v41);
    }
  }
LABEL_109:
  v48 = *(_QWORD *)(a1 + 96);
  v49 = v48;
  if ( v48 )
  {
    while ( *(_QWORD *)(v49 + 96) )
      v49 = *(_QWORD *)(v49 + 96);
    v50 = v49 + 184;
    if ( a1 == *(_QWORD *)(v49 + 184) )
    {
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v49 + gSharedInfo[1] + 25LL) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v49 + 40) + 176LL) = 0LL;
        HMAssignmentUnlock(v50);
      }
      else
      {
        v65 = *(_OWORD *)LockPointer(v70, v50, v48);
        HMAssignmentLock(&v65);
      }
    }
  }
  if ( !v71 )
  {
    if ( *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  v51 = (struct tagWND *)gpsi;
  if ( (*gpsi & 4) == 0 )
    goto LABEL_134;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    goto LABEL_134;
  if ( !*(_QWORD *)(gptiCurrent + 768LL) )
    goto LABEL_134;
  v52 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL);
  if ( (*(_BYTE *)(v52 + 10) & 1) != 0 )
    goto LABEL_134;
  v53 = v71;
  if ( *(_WORD *)v52 == *(_WORD *)(gpsi + 898LL) || v71 )
    goto LABEL_135;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 80) || !(unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 768LL), a1) )
      goto LABEL_134;
    v56 = *(_QWORD *)(gptiCurrent + 768LL);
  }
  else
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD **)(gptiCurrent + 768LL), (struct tagWND *)a1);
    zzzEndDeferWinEventNotify();
    v55 = CanDestroyDefIME == 0;
    v3 = gptiCurrent;
    if ( v55 )
      goto LABEL_134;
    v56 = *(_QWORD *)(gptiCurrent + 768LL);
    if ( !v56 )
      goto LABEL_134;
  }
  xxxDestroyWindow(v56);
LABEL_134:
  v53 = v71;
LABEL_135:
  v57 = *(_QWORD *)(a1 + 80);
  if ( v57 && !v53 )
  {
    v74 = *(_QWORD *)(v57 + 16);
    if ( *(_QWORD *)(v74 + 1384) == a1 )
    {
      HMAssignmentUnlock(v74 + 1384);
      DisassociateShellFrameAppThreads2(v74, v3);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v59 = *(_QWORD *)(a1 + 16);
      v51 = *(struct tagWND **)(v58 + 16);
      if ( (struct tagWND *)v59 != v51 )
        zzzAttachThreadInput(v59, (__int64)v51, 0);
    }
    if ( *(_DWORD *)(a1 + 280) )
      WindowGroupingWindowManagement::HandleWindowDestruction((WindowGroupingWindowManagement *)a1, v51);
    v60 = *(_QWORD *)(a1 + 80);
    if ( v60 )
      UnlinkWindow((struct tagTERMINAL *)a1, v60);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  xxxFreeWindow((struct tagWND *)a1, v61, v62, v63);
  if ( v71 )
    *(_DWORD *)(v3 + 480) = v75 | *(_DWORD *)(v3 + 480) & 0xEFFFFFFF;
  return 1LL;
}
