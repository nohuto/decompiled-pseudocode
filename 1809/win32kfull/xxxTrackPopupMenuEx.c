/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C0233EE8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C021E580 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     IsWindowShellCloaked @ 0x1C000ED34 (IsWindowShellCloaked.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0104E20 (xxxEnableChildWindowDpiMessageX.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     SubtractRect @ 0x1C010956C (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0109E14 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C01297A0 (MNClearCachedPopupSizes.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01D2444 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01D24A4 (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01F99E4 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F9E68 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C0208688 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C020B0D8 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0221A78 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0240FF8 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 **a1, unsigned int a2, LONG a3, LONG a4, ULONG_PTR a5, __int64 a6)
{
  __int64 **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v25; // edi
  __int64 *v26; // rax
  _DWORD *Window; // r14
  __int64 v28; // rdx
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rdx
  int v33; // eax
  struct tagMENUSTATE *v34; // rdi
  __int64 v35; // rdx
  unsigned int *v36; // rdx
  unsigned int v37; // ecx
  bool v38; // cf
  MenuHelpers *v39; // rcx
  HDC v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  struct tagMONITOR *v55; // r10
  int v56; // r9d
  int v57; // r12d
  __int64 v58; // rcx
  __int64 v59; // rdx
  int BestPos; // ebx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  unsigned int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int v67; // ebx
  int v68; // r12d
  __int64 v69; // rdx
  int v70; // [rsp+28h] [rbp-F0h]
  __int64 v71[2]; // [rsp+98h] [rbp-80h] BYREF
  int v72; // [rsp+A8h] [rbp-70h]
  int v73; // [rsp+ACh] [rbp-6Ch]
  int v74; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-60h]
  __int128 v76; // [rsp+C8h] [rbp-50h]
  __int64 v77; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-38h]
  __int64 v79[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v81[2]; // [rsp+100h] [rbp-18h] BYREF
  __int64 v82[3]; // [rsp+110h] [rbp-8h] BYREF
  __int128 v83; // [rsp+128h] [rbp+10h] BYREF
  __int128 v84; // [rsp+138h] [rbp+20h] BYREF
  __int128 v85; // [rsp+148h] [rbp+30h] BYREF
  __int128 v86; // [rsp+158h] [rbp+40h] BYREF
  _QWORD v87[3]; // [rsp+168h] [rbp+50h] BYREF
  _QWORD v88[3]; // [rsp+180h] [rbp+68h] BYREF
  __int128 v89; // [rsp+198h] [rbp+80h] BYREF
  _BYTE v90[64]; // [rsp+1A8h] [rbp+90h] BYREF

  v7 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v71, 0LL);
  v11 = 0LL;
  LODWORD(v75) = 0;
  v73 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v12 = 87LL;
LABEL_6:
      UserSetLastError(v12, v8, v9, v10);
LABEL_7:
      v14 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v79 = *(_OWORD *)(a6 + 4);
  }
  v78 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v16 = *(_QWORD *)(gptiCurrent + 608LL);
  v14 = 1;
  if ( v16 )
  {
    if ( (a2 & 1) == 0 )
    {
      v12 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v71, *(_QWORD *)v16);
    v13 = *(_QWORD *)(*(_QWORD *)v71[0] + 8LL);
    if ( (*(_DWORD *)(v16 + 8) & 4) == 0
      || (**(_DWORD **)v71[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v16 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v16, 0);
    v17 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v71[0] + 56LL));
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 8);
    else
      v18 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v71, v18);
    if ( *(_QWORD *)v71[0] && (**(_DWORD **)v71[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v71[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v71[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v16 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
  }
  v72 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v74 = (unsigned __int16)GetKeyState(2u, v8, v9, v10) >> 15;
  else
    v74 = (unsigned __int16)GetKeyState(1u, v8, v9, v10) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19) & 0xF) == 2 )
  {
    v75 = __PAIR64__(a4, a3);
    v21 = *(_QWORD *)(MonitorFromPoint(__PAIR64__(a4, a3), 2LL, 0) + 40);
    v22 = *(_DWORD *)(v21 + 28);
    v73 = *(_DWORD *)(v21 + 32);
  }
  else
  {
    v22 = v75;
  }
  v25 = 0;
  if ( PsGetCurrentProcessWin32Process(v21) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v25 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v82, 0LL);
  v26 = *v7;
  v82[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             0x80800000,
             v22,
             v73,
             0x64u,
             0x64u,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v26 + 40) + 40LL) & 0x40000000) != 0)),
             (__int64)v82,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             0xA00u,
             v25,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82, v28);
  if ( !Window )
    goto LABEL_7;
  *(_QWORD *)&v76 = safe_cast_fnid_to_PMENUWND((__int64)Window);
  if ( !(_QWORD)v76 )
  {
    xxxDestroyWindow(v30);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29);
  v87[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v87;
  v87[1] = Window;
  _InterlockedAdd(Window + 2, 1u);
  if ( (W32GetCurrentThreadDpiAwarenessContext(ThreadWin32Thread, v32) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v78 + 424) + 820LL) & 0x80000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v33 = IsChildWindowDpiMessageEnabledX(a5))
         : (v33 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v33 = IsNonClientDpiScalingEnabledX(a5)),
          v33) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(**v7 + 40) + 40LL) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
  }
  v34 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**v7 + 40) + 40LL) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak((__int64)Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, (__int64)Window, 0xA40u, 1);
  SetOrClrWF(0, (__int64)Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v71, *(_QWORD *)(v76 + 8));
  if ( !*(_QWORD *)v71[0] )
    goto LABEL_56;
  *((_QWORD *)&v76 + 1) = a5;
  *(_QWORD *)&v76 = *(_QWORD *)v71[0] + 8LL;
  v83 = v76;
  HMAssignmentLock(&v83);
  LockPopupMenu((__int64)v71, (__int64 *)(*(_QWORD *)v71[0] + 40LL), (__int64)v7);
  *((_QWORD *)&v76 + 1) = Window;
  *(_QWORD *)&v76 = *(_QWORD *)v71[0] + 56LL;
  v84 = v76;
  HMAssignmentLock(&v84);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v71, v81);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81, v35);
  *(_QWORD *)(*(_QWORD *)v71[0] + 64LL) = *(_QWORD *)v71[0];
  **(_DWORD **)v71[0] |= 8u;
  v36 = *(unsigned int **)v71[0];
  v37 = (v74 << 9) | **(_DWORD **)v71[0] & 0xFFFFFDFF;
  v38 = v72 != 0;
  v72 = -v72;
  *v36 = v37;
  v39 = (MenuHelpers *)(**(_DWORD **)v71[0] & 0xFFFFFFBF | (v38 ? 0x40 : 0));
  **(_DWORD **)v71[0] = (_DWORD)v39;
  if ( MenuHelpers::GetMenuRightAlignHint(v39) || (*(_DWORD *)(*(_QWORD *)(**v7 + 40) + 40LL) & 0x20) != 0 )
    **(_DWORD **)v71[0] |= 0x10u;
  **(_DWORD **)v71[0] ^= (**(_DWORD **)v71[0] ^ (16 * a2)) & 0x800;
  LODWORD(v75) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v71[0] |= 0x100u;
  **(_DWORD **)v71[0] ^= (**(_DWORD **)v71[0] ^ (a2 >> 7)) & 4;
  v40 = MNAllocMenuState((_QWORD **)v71);
  v11 = (__int64)v40;
  if ( !v40 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_135:
    xxxWindowEvent(5u, a5, 0, 0, 0);
    xxxMNReleaseCapture(v11);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    v68 = 1;
    v67 = 0;
    goto LABEL_139;
  }
  if ( gptiCurrent == *((_QWORD *)v40 + 4) )
  {
    ++*((_DWORD *)v40 + 10);
    v34 = (struct tagMENUSTATE *)v40;
  }
  if ( (**(_DWORD **)v71[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  if ( !xxxMNStartMenu(v71, v11, -1) )
    goto LABEL_151;
  if ( (*(_DWORD *)(v11 + 8) & 0x400) != 0 )
  {
    v80 = *(_QWORD *)Window;
    xxxUserModeCallback(100LL, (__int64)&v80, 8LL, v42, v70);
  }
  if ( (**(_DWORD **)v71[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v71[0] + 8LL) )
  {
    v43 = *(_QWORD *)(*(_QWORD *)v71[0] + 8LL);
    v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
    v88[0] = *(_QWORD *)(v44 + 416);
    *(_QWORD *)(v44 + 416) = v88;
    v88[1] = v43;
    _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    v7 = a1;
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v71[0] + 8LL));
    ThreadUnlock1(v46, v45);
    **(_DWORD **)v71[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Window + 5) + 232LL) & 0x20000000) != 0 )
  {
    v47 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(**v7 + 40) + 44LL) )
    {
      while ( (**(_DWORD **)(96LL * v47 + *(_QWORD *)(**v7 + 88)) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**v7 + 88) + 96LL * v47) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v47 >= *(_DWORD *)(*(_QWORD *)(**v7 + 40) + 44LL) )
          goto LABEL_80;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_80:
  v48 = *((_QWORD *)Window + 5);
  if ( (*(_DWORD *)(v48 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
  }
  else if ( (*(_DWORD *)(v48 + 288) & 0xF) == 0
         && (v50 = *(_QWORD *)(*((_QWORD *)Window + 2) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 424LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(**v7 + 76) )
  {
    *(_WORD *)(**v7 + 76) = WindowDpiLastNotify;
    v51 = (__int64)v7[2];
    if ( !v51 )
      v51 = **v7;
    MNClearCachedPopupSizes(v51);
  }
  *(_QWORD *)&v76 = xxxSendMessage((ULONG_PTR)Window);
  if ( !(_DWORD)v76 )
  {
LABEL_151:
    if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(v78 + 432) )
    {
      v69 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v69 )
        xxxWindowEvent(0x80000005, v69, 0, 1, 0x21u);
    }
    goto LABEL_135;
  }
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
  {
    *(_DWORD *)(v11 + 8) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)(**v7 + 40) + 40LL) |= 4u;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(**v7 + 40) + 40LL) &= ~4u;
  }
  v73 = (unsigned __int16)v76 + 6;
  v72 = WORD1(v76) + 6;
  v77 = __PAIR64__(a4, a3);
  v52 = __PAIR64__(a4, a3);
  v53 = MonitorFromPoint(__PAIR64__(a4, a3), 2LL, 0);
  v54 = *(_QWORD *)(a5 + 40);
  v55 = (struct tagMONITOR *)v53;
  *(_QWORD *)&v76 = v53;
  v56 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v54 + 26) >> 6)) == 0 )
    v56 = a2;
  LODWORD(v77) = v56;
  if ( (v56 & 8) != 0 )
  {
    a3 -= v73;
    **(_DWORD **)v71[0] = **(_DWORD **)v71[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v56 & 4) != 0 )
  {
    a3 -= (unsigned int)v73 >> 1;
  }
  else
  {
    **(_DWORD **)v71[0] = **(_DWORD **)v71[0] & 0xF07FFFFF | ((((**(_DWORD **)v71[0] & 0x10) != 0) + 1) << 23);
  }
  v57 = v72;
  if ( (v56 & 0x20) != 0 )
  {
    a4 -= v72;
    **(_DWORD **)v71[0] |= 0x4000000u;
  }
  else if ( (v56 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v72 >> 1;
  }
  else
  {
    **(_DWORD **)v71[0] |= 0x2000000u;
  }
  if ( (v56 & 0x3C00) != 0 )
    **(_DWORD **)v71[0] = **(_DWORD **)v71[0] & 0xF07FFFFF | ((v56 & 0x3C00) << 13);
  v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v58 + 236) != 1 )
      goto LABEL_116;
LABEL_115:
    **(_DWORD **)v71[0] |= 0x80000000;
    goto LABEL_116;
  }
  if ( *(_DWORD *)(v58 + 236) == 1 )
  {
    v86 = *GetMonitorRectForWindow(&v89, v53, (const struct tagWND *)Window);
    v85 = *(_OWORD *)GetMonitorMenuRectForWindow(v90, v76, Window);
    SubtractRect((__int64)v79, (int *)&v86, (int *)&v85);
    v56 = v77;
    v55 = (struct tagMONITOR *)v76;
    goto LABEL_115;
  }
  v79[0] = 0LL;
  v79[1] = 0LL;
  **(_DWORD **)v71[0] &= ~0x80000000;
LABEL_116:
  BestPos = FindBestPos(a3, a4, v73, v57, (struct tagRECT *)v79, v56, (unsigned int ***)v71, v55, v52);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 )
  {
    v61 = 25165824LL;
    v59 = *(_QWORD *)v71[0];
    if ( (**(_DWORD **)v71[0] & 0x1800000) != 0 )
    {
      v59 = *(_QWORD *)v71[0];
      **(_DWORD **)v71[0] ^= 0x1800000u;
    }
  }
  if ( (((**(_DWORD **)v71[0] & 0xF800000) != 0) & !_bittest((const signed __int32 *)&v77, 0xEu)) != 0 )
    **(_DWORD **)v71[0] |= 0x8000000u;
  xxxPlayEventSound(5LL, v59, v61, v62);
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((*(_DWORD *)(v11 + 8) & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*(_DWORD *)(v11 + 8) >> 4) & 0x10 | 0x241);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v63 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v63 )
      {
        if ( gpqForeground == *(_QWORD *)(v78 + 432) )
        {
          v64 = 33;
          if ( *(_QWORD *)(v63 + 16) == v78 )
            v63 = (__int64)Window;
          else
            v64 = 49;
          xxxWindowEvent(0x80000004, v63, 0, 1, v64);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64)Window, -4, 0, 0);
  *(_DWORD *)(v11 + 8) = (8 * v74) | *(_DWORD *)(v11 + 8) & 0xFFFFFFF7;
  v67 = xxxMNLoop((__int64 **)v71, v11, 0LL, 0);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    v68 = v75;
LABEL_139:
    if ( ThreadUnlock1(v66, v65) && *(char *)(*((_QWORD *)Window + 5) + 19LL) >= 0 )
      xxxDestroyWindow(Window);
    if ( v11 )
      xxxMNEndMenuState(v11);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_145;
  }
  ThreadUnlock1(v66, v65);
  v68 = v75;
LABEL_145:
  if ( v68 )
    v14 = v67;
  if ( v34 )
    xxxUnlockMenuStateInternal(v34, 0);
LABEL_8:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v71, v13);
  return v14;
}
