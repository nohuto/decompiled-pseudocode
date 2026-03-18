/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C024C438
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0236260 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     IsWindowShellCloaked @ 0x1C0017094 (IsWindowShellCloaked.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00CBB90 (xxxEnableChildWindowDpiMessageX.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     SubtractRect @ 0x1C00ECF64 (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00EDC84 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C010FBC8 (MNClearCachedPopupSizes.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E6EAC (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E6F0C (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C021016C (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C02105EC (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C021FB04 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C02226BC (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0239B8C (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     FindBestPos @ 0x1C024BF34 (FindBestPos.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0259674 (GetMonitorMenuRectForWindow.c)
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
  unsigned int v15; // esi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v29; // di
  __int64 *v30; // rax
  __int64 Window; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  struct tagMENUSTATE *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r12d
  unsigned int v47; // r15d
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int *v50; // rdx
  unsigned int v51; // ecx
  bool v52; // cf
  MenuHelpers *v53; // rcx
  HDC v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // edx
  __int64 v64; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int16 v68; // ecx^2
  unsigned __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  struct tagMONITOR *v72; // r9
  int v73; // r12d
  int v74; // r15d
  __int64 v75; // rcx
  int BestPos; // r15d
  __int64 v77[2]; // [rsp+98h] [rbp-80h] BYREF
  int v78; // [rsp+A8h] [rbp-70h]
  __int64 v79; // [rsp+B0h] [rbp-68h]
  int v80[2]; // [rsp+B8h] [rbp-60h]
  int v81; // [rsp+C0h] [rbp-58h]
  __int64 v82; // [rsp+C8h] [rbp-50h]
  HDC v83; // [rsp+D0h] [rbp-48h]
  __int64 v84[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v85; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-20h]
  __int64 v88; // [rsp+100h] [rbp-18h]
  __int64 v89; // [rsp+108h] [rbp-10h] BYREF
  __int64 v90; // [rsp+110h] [rbp-8h]
  __int64 v91; // [rsp+118h] [rbp+0h]
  __int128 v92; // [rsp+128h] [rbp+10h]
  __int128 v93; // [rsp+138h] [rbp+20h]
  __int64 v94[2]; // [rsp+148h] [rbp+30h] BYREF
  __int64 v95[4]; // [rsp+158h] [rbp+40h] BYREF
  __int128 v96; // [rsp+178h] [rbp+60h] BYREF
  __int128 v97; // [rsp+188h] [rbp+70h] BYREF
  __int128 v98; // [rsp+198h] [rbp+80h] BYREF
  __int128 v99; // [rsp+1A8h] [rbp+90h] BYREF
  __int128 v100; // [rsp+1B8h] [rbp+A0h] BYREF
  _BYTE v101[64]; // [rsp+1C8h] [rbp+B0h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v77, 0LL);
  v10 = 0LL;
  v86 = 0LL;
  v11 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v84[0] = 0LL;
  v84[1] = 0LL;
  v82 = 0LL;
  v80[0] = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v12 = 87LL;
LABEL_6:
      UserSetLastError(v12, 0LL, v8, v9);
LABEL_7:
      v15 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v84 = *(_OWORD *)(a6 + 4);
  }
  v83 = (HDC)gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v17 = *(_QWORD *)(gptiCurrent + 600LL);
  v15 = 1;
  if ( v17 )
  {
    if ( (a2 & 1) == 0 )
    {
      v12 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v77, *(_QWORD *)v17);
    v13 = *(_QWORD *)(*(_QWORD *)v77[0] + 8LL);
    if ( (*(_DWORD *)(v17 + 8) & 4) == 0
      || (**(_DWORD **)v77[0] & 0x8000) != 0
      || !v13
      || v13 != a5
      || *(_QWORD *)(v17 + 32) != *(_QWORD *)(v13 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v17, 0);
    v18 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v77[0] + 56LL));
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v77, v19);
    v10 = 0LL;
    if ( *(_QWORD *)v77[0] && (**(_DWORD **)v77[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v77[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v77[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v17 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
  }
  v78 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v81 = (unsigned __int16)GetKeyState(2u, v10, v8, v9) >> 15;
  else
    v81 = (unsigned __int16)GetKeyState(1u, v10, v8, v9) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22) & 0xF) == 2 )
  {
    v79 = __PAIR64__(a4, a3);
    v24 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    v25 = *(_DWORD *)(v24 + 28);
    v80[0] = *(_DWORD *)(v24 + 32);
  }
  else
  {
    v25 = 0;
  }
  v29 = 0;
  if ( PsGetCurrentProcessWin32Process(v24, v23) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v29 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v95, 0LL);
  v30 = *a1;
  v95[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             0x8000LL,
             0x8000LL,
             0LL,
             -2139095040,
             v25,
             v80[0],
             0x64u,
             0x64u,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v30 + 40) + 40LL) & 0x40000000) != 0)),
             (__int64 **)v95,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             0xA00u,
             v29,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v95, v32, v33);
  if ( !Window )
    goto LABEL_7;
  v79 = safe_cast_fnid_to_PMENUWND(Window);
  if ( !v79 )
  {
    xxxDestroyWindow(v35);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v36);
  v86 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v86;
  v87 = Window;
  HMLockObject(Window);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v83 + 52) + 812LL) & 0x100000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v41 = IsChildWindowDpiMessageEnabledX(a5))
         : (v41 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v41 = IsNonClientDpiScalingEnabledX(a5)),
          v41) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (__int64 *)a5, 0);
  }
  v42 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, Window, 0xA40u, 1);
  SetOrClrWF(0, Window, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v77, *(_QWORD *)(v79 + 8));
  if ( !*(_QWORD *)v77[0] )
    goto LABEL_56;
  *((_QWORD *)&v92 + 1) = a5;
  *(_QWORD *)&v92 = *(_QWORD *)v77[0] + 8LL;
  v96 = v92;
  HMAssignmentLock(&v96);
  LockPopupMenu((__int64)v77, (__int64 *)(*(_QWORD *)v77[0] + 40LL), (__int64)a1);
  *((_QWORD *)&v93 + 1) = Window;
  *(_QWORD *)&v93 = *(_QWORD *)v77[0] + 56LL;
  v97 = v93;
  HMAssignmentLock(&v97);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v94, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v77, v94);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v94, v48, v49);
  *(_QWORD *)(*(_QWORD *)v77[0] + 64LL) = *(_QWORD *)v77[0];
  **(_DWORD **)v77[0] |= 8u;
  v50 = *(unsigned int **)v77[0];
  v51 = (v81 << 9) | **(_DWORD **)v77[0] & 0xFFFFFDFF;
  v52 = v78 != 0;
  v78 = -v78;
  *v50 = v51;
  v53 = (MenuHelpers *)(**(_DWORD **)v77[0] & 0xFFFFFFBF | (v52 ? 0x40 : 0));
  **(_DWORD **)v77[0] = (_DWORD)v53;
  if ( MenuHelpers::GetMenuRightAlignHint(v53) || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 )
    **(_DWORD **)v77[0] |= 0x10u;
  **(_DWORD **)v77[0] ^= (**(_DWORD **)v77[0] ^ (16 * a2)) & 0x800;
  LODWORD(v79) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v77[0] |= 0x100u;
  **(_DWORD **)v77[0] ^= (**(_DWORD **)v77[0] ^ (a2 >> 7)) & 4;
  v54 = MNAllocMenuState((_QWORD **)v77);
  v83 = v54;
  v11 = (__int64)v54;
  if ( !v54 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_57:
    xxxWindowEvent(5u, (struct tagWND *)a5, 0LL, 0, 0);
    xxxMNReleaseCapture(v11);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    v46 = 1;
    v47 = 0;
    goto LABEL_127;
  }
  if ( gptiCurrent == *((_QWORD *)v54 + 4) )
  {
    ++*((_DWORD *)v54 + 10);
    v42 = (struct tagMENUSTATE *)v54;
  }
  if ( (**(_DWORD **)v77[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  if ( !xxxMNStartMenu(v77, v11, -1) )
    goto LABEL_57;
  if ( (*(_DWORD *)(v11 + 8) & 0x400) != 0 )
  {
    v85 = *(_QWORD *)Window;
    xxxUserModeCallback(0x64u, (__int64)&v85, 8u, v57);
  }
  if ( (**(_DWORD **)v77[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v77[0] + 8LL) )
  {
    v58 = *(_QWORD *)(*(_QWORD *)v77[0] + 8LL);
    v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56);
    v89 = *(_QWORD *)(v59 + 408);
    *(_QWORD *)(v59 + 408) = &v89;
    v90 = v58;
    HMLockObject(v58);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v77[0] + 8LL));
    ThreadUnlock1(v61, v60, v62);
    v11 = (__int64)v83;
    **(_DWORD **)v77[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(Window + 40) + 232LL) & 0x20000000) != 0 )
  {
    v63 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      while ( (**(_DWORD **)(96LL * v63 + *(_QWORD *)(**a1 + 88)) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 88) + 96LL * v63) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v63 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
          goto LABEL_83;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_83:
  v64 = *(_QWORD *)(Window + 40);
  if ( (*(_DWORD *)(v64 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
  }
  else if ( (*(_DWORD *)(v64 + 288) & 0xF) == 0
         && (v66 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v66 + 8) + 64LL) & 1) != 0 )
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
    v67 = (__int64)a1[2];
    if ( !v67 )
      v67 = **a1;
    MNClearCachedPopupSizes(v67);
  }
  *(_QWORD *)v80 = xxxSendMessage(Window);
  if ( !v80[0] )
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
  v68 = HIWORD(v80[0]);
  v80[0] = LOWORD(v80[0]) + 6;
  v78 = v68 + 6;
  v82 = __PAIR64__(a4, a3);
  v69 = __PAIR64__(a4, a3);
  v70 = MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
  v71 = *(_QWORD *)(a5 + 40);
  v72 = (struct tagMONITOR *)v70;
  v82 = v70;
  v73 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(v71 + 26) >> 6)) == 0 )
    v73 = a2;
  if ( (v73 & 8) != 0 )
  {
    a3 -= v80[0];
    **(_DWORD **)v77[0] = **(_DWORD **)v77[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v73 & 4) != 0 )
  {
    a3 -= (unsigned int)v80[0] >> 1;
  }
  else
  {
    **(_DWORD **)v77[0] = **(_DWORD **)v77[0] & 0xF07FFFFF | ((((**(_DWORD **)v77[0] & 0x10) != 0) + 1) << 23);
  }
  v74 = v78;
  if ( (v73 & 0x20) != 0 )
  {
    a4 -= v78;
    **(_DWORD **)v77[0] |= 0x4000000u;
  }
  else if ( (v73 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v78 >> 1;
  }
  else
  {
    **(_DWORD **)v77[0] |= 0x2000000u;
  }
  if ( (v73 & 0x3C00) != 0 )
    **(_DWORD **)v77[0] = **(_DWORD **)v77[0] & 0xF07FFFFF | ((v73 & 0x3C00) << 13);
  v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v77[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v75 + 236) != 1 )
      goto LABEL_119;
LABEL_118:
    **(_DWORD **)v77[0] |= 0x80000000;
    goto LABEL_119;
  }
  if ( *(_DWORD *)(v75 + 236) == 1 )
  {
    v99 = *GetMonitorRectForWindow(&v100, v70, (const struct tagWND *)Window);
    v98 = *(_OWORD *)GetMonitorMenuRectForWindow(v101, v82, Window);
    SubtractRect((__int64)v84, (int *)&v99, (int *)&v98);
    v72 = (struct tagMONITOR *)v82;
    goto LABEL_118;
  }
  v84[0] = 0LL;
  v84[1] = 0LL;
  **(_DWORD **)v77[0] &= ~0x80000000;
LABEL_119:
  BestPos = FindBestPos(a3, a4, v80[0], v74, (struct tagRECT *)v84, v73, (unsigned int ***)v77, v72, v69);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v77[0] & 0x1800000) != 0 )
    **(_DWORD **)v77[0] ^= 0x1800000u;
  if ( (**(_DWORD **)v77[0] & 0xF800000) != 0 && (v73 & 0x4000) == 0 )
    **(_DWORD **)v77[0] |= 0x8000000u;
  xxxPlayEventSound(5LL);
  v11 = (__int64)v83;
  xxxSetWindowPos(
    (struct tagWND *)Window,
    (((_DWORD)v83[2] & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    ~(unsigned __int8)(*((_DWORD *)v83 + 2) >> 4) & 0x10 | 0x241);
  xxxWindowEvent(6u, (struct tagWND *)Window, 4294967292LL, 0, 0);
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 8) & 0xFFFFFFF7 | (8 * v81);
  v47 = xxxMNLoop((__int64 **)v77, v11, 0LL, 0);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    v46 = v79;
LABEL_127:
    if ( ThreadUnlock1(v44, v43, v45) && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((__int64 *)Window);
    if ( v11 )
      xxxMNEndMenuState(v11);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
    goto LABEL_133;
  }
  ThreadUnlock1(v44, v43, v45);
  v46 = v79;
LABEL_133:
  if ( v46 )
    v15 = v47;
  if ( v42 )
    xxxUnlockMenuStateInternal(v42, 0);
LABEL_8:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v77, v13, v14);
  return v15;
}
