/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024CB78
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0236880 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 * Callees:
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsWindowShellCloaked @ 0x1C0088160 (IsWindowShellCloaked.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00ECFB0 (xxxEnableChildWindowDpiMessageX.c)
 *     MNClearCachedPopupSizes @ 0x1C00FC7E0 (MNClearCachedPopupSizes.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     SubtractRect @ 0x1C011219C (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0113934 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E702C (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E708C (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C02106AC (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C0210B2C (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C0220044 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023A1AC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     FindBestPos @ 0x1C024C674 (FindBestPos.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0259DB4 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 **a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v31; // di
  __int64 *v32; // rax
  __int64 Window; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  struct tagMENUSTATE *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r12d
  unsigned int v52; // r15d
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int *v56; // rdx
  unsigned int v57; // ecx
  bool v58; // cf
  MenuHelpers *v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // edx
  __int64 v70; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int16 v74; // ecx^2
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  struct tagMONITOR *v78; // r9
  int v79; // r12d
  int v80; // r15d
  __int64 v81; // rcx
  int BestPos; // r15d
  __int64 v83[2]; // [rsp+98h] [rbp-80h] BYREF
  int v84; // [rsp+A8h] [rbp-70h]
  __int64 v85; // [rsp+B0h] [rbp-68h]
  int v86[2]; // [rsp+B8h] [rbp-60h]
  int v87; // [rsp+C0h] [rbp-58h]
  __int64 v88; // [rsp+C8h] [rbp-50h]
  _QWORD *v89; // [rsp+D0h] [rbp-48h]
  __int64 v90[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-20h]
  __int64 v94; // [rsp+100h] [rbp-18h]
  __int64 v95; // [rsp+108h] [rbp-10h] BYREF
  __int64 v96; // [rsp+110h] [rbp-8h]
  __int64 v97; // [rsp+118h] [rbp+0h]
  __int128 v98; // [rsp+128h] [rbp+10h]
  __int128 v99; // [rsp+138h] [rbp+20h]
  __int64 v100[2]; // [rsp+148h] [rbp+30h] BYREF
  __int64 v101[4]; // [rsp+158h] [rbp+40h] BYREF
  __int128 v102; // [rsp+178h] [rbp+60h] BYREF
  __int128 v103; // [rsp+188h] [rbp+70h] BYREF
  __int128 v104; // [rsp+198h] [rbp+80h] BYREF
  __int128 v105; // [rsp+1A8h] [rbp+90h] BYREF
  __int128 v106; // [rsp+1B8h] [rbp+A0h] BYREF
  _BYTE v107[64]; // [rsp+1C8h] [rbp+B0h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v83, 0LL);
  v10 = 0LL;
  v92 = 0LL;
  v11 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v90[0] = 0LL;
  v90[1] = 0LL;
  v88 = 0LL;
  v86[0] = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v12 = 87LL;
LABEL_6:
      UserSetLastError(v12, 0LL, v8, v9);
LABEL_7:
      v16 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v90 = *(_OWORD *)(a6 + 4);
  }
  v89 = (_QWORD *)gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v18 = *(_QWORD *)(gptiCurrent + 600LL);
  v16 = 1;
  if ( v18 )
  {
    if ( (a2 & 1) == 0 )
    {
      v12 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v83, *(_QWORD *)v18);
    v13 = *(_QWORD *)(*(_QWORD *)v83[0] + 8LL);
    if ( (*(_DWORD *)(v18 + 8) & 4) == 0
      || (**(_DWORD **)v83[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v18 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v18, 0);
    v19 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v83[0] + 56LL));
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 8);
    else
      v20 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v83, v20);
    v10 = 0LL;
    if ( *(_QWORD *)v83[0] && (**(_DWORD **)v83[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v83[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v83[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v18 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
  }
  v84 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v87 = (unsigned __int16)GetKeyState(2u, v10, v8, v9) >> 15;
  else
    v87 = (unsigned __int16)GetKeyState(1u, v10, v8, v9) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) == 2 )
  {
    v85 = __PAIR64__(a4, a3);
    v26 = *(_QWORD *)(MonitorFromPoint(__PAIR64__(a4, a3), 2u, 0) + 40);
    v27 = *(_DWORD *)(v26 + 28);
    v86[0] = *(_DWORD *)(v26 + 32);
  }
  else
  {
    v27 = 0;
  }
  v31 = 0;
  if ( PsGetCurrentProcessWin32Process(v26, v25) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29, v28);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v31 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v101, 0LL);
  v32 = *a1;
  v101[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             0x8000LL,
             0x8000LL,
             0LL,
             -2139095040,
             v27,
             v86[0],
             0x64u,
             0x64u,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v32 + 40) + 40LL) & 0x40000000) != 0)),
             (__int64 **)v101,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             0xA00u,
             v31,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v101, v34, v35, v36);
  if ( !Window )
    goto LABEL_7;
  v85 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v85 )
  {
    xxxDestroyWindow(v38);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v39, v40);
  v92 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v92;
  v93 = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(v89[52] + 812LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v46 = IsChildWindowDpiMessageEnabledX(a5))
         : (v46 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v46 = IsNonClientDpiScalingEnabledX(a5)),
          v46) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (__int64 *)a5, 0);
  }
  v47 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, Window, 0xA40u, 1);
  SetOrClrWF(0, Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v83, *(_QWORD *)(v85 + 8));
  if ( !*(_QWORD *)v83[0] )
    goto LABEL_56;
  *((_QWORD *)&v98 + 1) = a5;
  *(_QWORD *)&v98 = *(_QWORD *)v83[0] + 8LL;
  v102 = v98;
  HMAssignmentLock(&v102);
  LockPopupMenu((__int64)v83, (__int64 *)(*(_QWORD *)v83[0] + 40LL), (__int64)a1);
  *((_QWORD *)&v99 + 1) = Window;
  *(_QWORD *)&v99 = *(_QWORD *)v83[0] + 56LL;
  v103 = v99;
  HMAssignmentLock(&v103);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v100, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v83, v100);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v100, v53, v54, v55);
  *(_QWORD *)(*(_QWORD *)v83[0] + 64LL) = *(_QWORD *)v83[0];
  **(_DWORD **)v83[0] |= 8u;
  v56 = *(unsigned int **)v83[0];
  v57 = (v87 << 9) | **(_DWORD **)v83[0] & 0xFFFFFDFF;
  v58 = v84 != 0;
  v84 = -v84;
  *v56 = v57;
  v59 = (MenuHelpers *)(**(_DWORD **)v83[0] & 0xFFFFFFBF | (v58 ? 0x40 : 0));
  **(_DWORD **)v83[0] = (_DWORD)v59;
  if ( MenuHelpers::GetMenuRightAlignHint(v59) || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 )
    **(_DWORD **)v83[0] |= 0x10u;
  **(_DWORD **)v83[0] ^= (**(_DWORD **)v83[0] ^ (16 * a2)) & 0x800;
  LODWORD(v85) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v83[0] |= 0x100u;
  **(_DWORD **)v83[0] ^= (**(_DWORD **)v83[0] ^ (a2 >> 7)) & 4;
  v60 = MNAllocMenuState((_QWORD **)v83);
  v89 = v60;
  v11 = (__int64)v60;
  if ( !v60 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_57:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0LL, 0LL, 0);
    xxxMNReleaseCapture(v11);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    v51 = 1;
    v52 = 0;
    goto LABEL_127;
  }
  if ( gptiCurrent == v60[4] )
  {
    ++*((_DWORD *)v60 + 10);
    v47 = (struct tagMENUSTATE *)v60;
  }
  if ( (**(_DWORD **)v83[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  if ( !xxxMNStartMenu(v83, v11, -1) )
    goto LABEL_57;
  if ( (*(_DWORD *)(v11 + 8) & 0x400) != 0 )
  {
    v91 = *(_QWORD *)Window;
    xxxUserModeCallback(0x64u, (__int64)&v91, 8u, v63);
  }
  if ( (**(_DWORD **)v83[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v83[0] + 8LL) )
  {
    v64 = *(_QWORD *)(*(_QWORD *)v83[0] + 8LL);
    v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63);
    v95 = *(_QWORD *)(v65 + 408);
    *(_QWORD *)(v65 + 408) = &v95;
    v96 = v64;
    HMLockObject(v64);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v83[0] + 8LL));
    ThreadUnlock1(v67, v66, v68);
    v11 = (__int64)v89;
    **(_DWORD **)v83[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(Window + 40) + 232LL) & 0x20000000) != 0 )
  {
    v69 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      while ( (**(_DWORD **)(96LL * v69 + *(_QWORD *)(**a1 + 88)) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 88) + 96LL * v69) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v69 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
          goto LABEL_83;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_83:
  v70 = *(_QWORD *)(Window + 40);
  if ( (*(_DWORD *)(v70 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( (*(_DWORD *)(v70 + 288) & 0xF) == 0
         && (v72 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v72 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(**a1 + 76) )
  {
    *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
    v73 = (__int64)a1[2];
    if ( !v73 )
      v73 = **a1;
    MNClearCachedPopupSizes(v73);
  }
  *(_QWORD *)v86 = xxxSendMessage(Window);
  if ( !v86[0] )
    goto LABEL_57;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
  {
    *(_DWORD *)(v11 + 8) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) |= 4u;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) &= ~4u;
  }
  v74 = HIWORD(v86[0]);
  v86[0] = LOWORD(v86[0]) + 6;
  v84 = v74 + 6;
  v88 = __PAIR64__(a4, a3);
  v75 = __PAIR64__(a4, a3);
  v76 = MonitorFromPoint(__PAIR64__(a4, a3), 2u, 0);
  v77 = *(_QWORD *)(a5 + 40);
  v78 = (struct tagMONITOR *)v76;
  v88 = v76;
  v79 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v77 + 26) >> 6)) == 0 )
    v79 = a2;
  if ( (v79 & 8) != 0 )
  {
    a3 -= v86[0];
    **(_DWORD **)v83[0] = **(_DWORD **)v83[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v79 & 4) != 0 )
  {
    a3 -= (unsigned int)v86[0] >> 1;
  }
  else
  {
    **(_DWORD **)v83[0] = **(_DWORD **)v83[0] & 0xF07FFFFF | ((((**(_DWORD **)v83[0] & 0x10) != 0) + 1) << 23);
  }
  v80 = v84;
  if ( (v79 & 0x20) != 0 )
  {
    a4 -= v84;
    **(_DWORD **)v83[0] |= 0x4000000u;
  }
  else if ( (v79 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v84 >> 1;
  }
  else
  {
    **(_DWORD **)v83[0] |= 0x2000000u;
  }
  if ( (v79 & 0x3C00) != 0 )
    **(_DWORD **)v83[0] = **(_DWORD **)v83[0] & 0xF07FFFFF | ((v79 & 0x3C00) << 13);
  v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v83[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v81 + 236) != 1 )
      goto LABEL_119;
LABEL_118:
    **(_DWORD **)v83[0] |= 0x80000000;
    goto LABEL_119;
  }
  if ( *(_DWORD *)(v81 + 236) == 1 )
  {
    v105 = *GetMonitorRectForWindow(&v106, v76, (const struct tagWND *)Window);
    v104 = *(_OWORD *)GetMonitorMenuRectForWindow(v107, v88, Window);
    SubtractRect((__int64)v90, (int *)&v105, (int *)&v104);
    v78 = (struct tagMONITOR *)v88;
    goto LABEL_118;
  }
  v90[0] = 0LL;
  v90[1] = 0LL;
  **(_DWORD **)v83[0] &= ~0x80000000;
LABEL_119:
  BestPos = FindBestPos(a3, a4, v86[0], v80, (struct tagRECT *)v90, v79, (unsigned int ***)v83, v78, v75);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v83[0] & 0x1800000) != 0 )
    **(_DWORD **)v83[0] ^= 0x1800000u;
  if ( (**(_DWORD **)v83[0] & 0xF800000) != 0 && (v79 & 0x4000) == 0 )
    **(_DWORD **)v83[0] |= 0x8000000u;
  xxxPlayEventSound(5LL);
  v11 = (__int64)v89;
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((v89[1] & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*((_DWORD *)v89 + 2) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, 4294967292LL, 0LL, 0);
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 8) & 0xFFFFFFF7 | (8 * v87);
  v52 = xxxMNLoop((__int64 **)v83, v11, 0LL, 0);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    v51 = v85;
LABEL_127:
    if ( ThreadUnlock1(v49, v48, v50) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((__int64 *)Window);
    if ( v11 )
      xxxMNEndMenuState(v11);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_133;
  }
  ThreadUnlock1(v49, v48, v50);
  v51 = v85;
LABEL_133:
  if ( v51 )
    v16 = v52;
  if ( v47 )
    xxxUnlockMenuStateInternal(v47, 0);
LABEL_8:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v83, v13, v14, v15);
  return v16;
}
