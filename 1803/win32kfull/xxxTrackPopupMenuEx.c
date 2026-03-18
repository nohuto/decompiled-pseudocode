/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C020ABF4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01F6A80 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 * Callees:
 *     MNClearCachedPopupSizes @ 0x1C0006BE0 (MNClearCachedPopupSizes.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     IsWindowShellCloaked @ 0x1C00C1194 (IsWindowShellCloaked.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E7EC8 (xxxEnableChildWindowDpiMessageX.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     SubtractRect @ 0x1C00EE444 (SubtractRect.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00F069C (IsWindowBroadcastingDpiToChildrenX.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01AF5E8 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01AF648 (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01D4E78 (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C01D5278 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C01E2838 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C01E51B4 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C01E8950 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C01F9918 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 *     GetMonitorMenuRectForWindow @ 0x1C022B078 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 **a1, unsigned int a2, LONG a3, LONG a4, ULONG_PTR a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r15
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int32 v22; // r14d
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v25; // edi
  __int64 *v26; // rax
  _DWORD *Window; // r14
  __int64 v28; // rdx
  __int64 v29; // rdx
  ULONG_PTR v30; // rcx
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
  __int64 v47; // r8
  int v48; // edx
  __int64 v49; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  unsigned __int64 v54; // rbx
  struct tagMONITOR *v55; // r10
  unsigned int v56; // r9d
  int v57; // r12d
  __int64 v58; // rcx
  __int64 v59; // rdx
  int BestPos; // ebx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int v67; // ebx
  __int64 v68; // r8
  int v69; // r12d
  __int64 v70; // rdx
  int v71; // [rsp+28h] [rbp-F0h]
  __int64 v72[2]; // [rsp+98h] [rbp-80h] BYREF
  int v73; // [rsp+A8h] [rbp-70h]
  int v74; // [rsp+ACh] [rbp-6Ch]
  int v75; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-60h]
  __int64 v77; // [rsp+C0h] [rbp-58h]
  __int64 v78; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-48h]
  __int64 v80[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-30h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-20h]
  __int128 v83; // [rsp+108h] [rbp-10h]
  __int64 v84[2]; // [rsp+118h] [rbp+0h] BYREF
  _QWORD v85[4]; // [rsp+128h] [rbp+10h] BYREF
  __int128 v86; // [rsp+148h] [rbp+30h] BYREF
  __int128 v87; // [rsp+158h] [rbp+40h] BYREF
  __int128 v88; // [rsp+168h] [rbp+50h] BYREF
  __int128 v89; // [rsp+178h] [rbp+60h] BYREF
  _QWORD v90[3]; // [rsp+188h] [rbp+70h] BYREF
  _QWORD v91[3]; // [rsp+1A0h] [rbp+88h] BYREF
  __int128 v92; // [rsp+1B8h] [rbp+A0h] BYREF
  _BYTE v93[64]; // [rsp+1C8h] [rbp+B0h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v72, 0LL);
  v9 = 0LL;
  LODWORD(v76) = 0;
  v74 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v11 = 87LL;
LABEL_6:
      UserSetLastError(v11, v8);
LABEL_7:
      v13 = 0;
      goto LABEL_8;
    }
    *(_OWORD *)v80 = *(_OWORD *)(a6 + 4);
  }
  v10 = a5;
  v79 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v15 = *(_QWORD *)(gptiCurrent + 600LL);
  v13 = 1;
  if ( v15 )
  {
    if ( (a2 & 1) == 0 )
    {
      v11 = 1446LL;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v72, *(_QWORD *)v15);
    v12 = *(_QWORD *)(*(_QWORD *)v72[0] + 8LL);
    if ( (*(_DWORD *)(v15 + 8) & 4) == 0
      || (**(_DWORD **)v72[0] & 0x8000) != 0
      || !v12
      || v12 != a5
      || *(_QWORD *)(v15 + 32) != *(_QWORD *)(v12 + 16) )
    {
      goto LABEL_7;
    }
    MNAnimate(v15, 0);
    v16 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v72[0] + 56LL));
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 8);
    else
      v17 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v72, v17);
    if ( *(_QWORD *)v72[0] && (**(_DWORD **)v72[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v72[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v72[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v15 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
  }
  v73 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v75 = (unsigned __int16)GetKeyState(2u, v8) >> 15;
  else
    v75 = (unsigned __int16)GetKeyState(1u, v8) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v18) & 0xF) == 2 )
  {
    v76 = __PAIR64__(a4, a3);
    v20 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0LL, v21) + 40);
    v22 = *(_DWORD *)(v20 + 28);
    v74 = *(_DWORD *)(v20 + 32);
  }
  else
  {
    v22 = v76;
  }
  v25 = 0;
  if ( PsGetCurrentProcessWin32Process(v20) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v25 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v85, 0LL);
  v26 = *a1;
  v85[2] = 0LL;
  Window = xxxCreateWindowEx(
             385,
             0x8000LL,
             0x8000LL,
             0LL,
             0x80800000,
             v22,
             v74,
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(*v26 + 40) + 40LL) & 0x40000000) != 0)),
             (__int64)v85,
             *(_QWORD *)(*(_QWORD *)(a5 + 40) + 32LL),
             0LL,
             *(_DWORD *)(*(_QWORD *)(a5 + 40) + 236LL),
             0xA00u,
             v25,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v85, v28);
  if ( !Window )
    goto LABEL_7;
  v77 = safe_cast_fnid_to_PMENUWND((__int64)Window);
  if ( !v77 )
  {
    xxxDestroyWindow(v30);
    goto LABEL_7;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29);
  v90[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v90;
  v90[1] = Window;
  _InterlockedAdd(Window + 2, 1u);
  if ( (W32GetCurrentThreadDpiAwarenessContext(ThreadWin32Thread, v32) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v79 + 416) + 812LL) & 0x80000) != 0
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
  else if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
  }
  v34 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)Window, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak((__int64)Window, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    SetOrClrWF(1, (__int64)Window, 2624, 1);
  SetOrClrWF(0, (__int64)Window, 1032, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v72, *(_QWORD *)(v77 + 8));
  if ( !*(_QWORD *)v72[0] )
    goto LABEL_56;
  *((_QWORD *)&v82 + 1) = a5;
  *(_QWORD *)&v82 = *(_QWORD *)v72[0] + 8LL;
  v86 = v82;
  HMAssignmentLock(&v86);
  LockPopupMenu((__int64)v72, (__int64 *)(*(_QWORD *)v72[0] + 40LL), (__int64)a1);
  *((_QWORD *)&v83 + 1) = Window;
  *(_QWORD *)&v83 = *(_QWORD *)v72[0] + 56LL;
  v87 = v83;
  HMAssignmentLock(&v87);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v84, 0LL);
  MNMarkDelayedFreePopup((_QWORD **)v72, v84);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v84, v35);
  *(_QWORD *)(*(_QWORD *)v72[0] + 64LL) = *(_QWORD *)v72[0];
  **(_DWORD **)v72[0] |= 8u;
  v36 = *(unsigned int **)v72[0];
  v37 = (v75 << 9) | **(_DWORD **)v72[0] & 0xFFFFFDFF;
  v38 = v73 != 0;
  v73 = -v73;
  *v36 = v37;
  v39 = (MenuHelpers *)(**(_DWORD **)v72[0] & 0xFFFFFFBF | (v38 ? 0x40 : 0));
  **(_DWORD **)v72[0] = (_DWORD)v39;
  if ( MenuHelpers::GetMenuRightAlignHint(v39) || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 )
    **(_DWORD **)v72[0] |= 0x10u;
  **(_DWORD **)v72[0] ^= (**(_DWORD **)v72[0] ^ (16 * a2)) & 0x800;
  LODWORD(v76) = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v72[0] |= 0x100u;
  **(_DWORD **)v72[0] ^= (**(_DWORD **)v72[0] ^ (a2 >> 7)) & 4;
  v40 = MNAllocMenuState((_QWORD **)v72);
  v9 = (__int64)v40;
  if ( !v40 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_135:
    xxxWindowEvent(5u, v10, 0, 0, 0);
    xxxMNReleaseCapture(v9);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(v10);
    v69 = 1;
    v67 = 0;
    goto LABEL_139;
  }
  if ( gptiCurrent == *((_QWORD *)v40 + 4) )
  {
    ++*((_DWORD *)v40 + 10);
    v34 = (struct tagMENUSTATE *)v40;
  }
  if ( (**(_DWORD **)v72[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  if ( !xxxMNStartMenu(v72, v9, -1) )
    goto LABEL_150;
  if ( (*(_DWORD *)(v9 + 8) & 0x400) != 0 )
  {
    v81 = *(_QWORD *)Window;
    xxxUserModeCallback(100LL, (__int64)&v81, 8LL, v42, v71);
  }
  if ( (**(_DWORD **)v72[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v72[0] + 8LL) )
  {
    v43 = *(_QWORD *)(*(_QWORD *)v72[0] + 8LL);
    v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
    v91[0] = *(_QWORD *)(v44 + 408);
    *(_QWORD *)(v44 + 408) = v91;
    v91[1] = v43;
    _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v72[0] + 8LL));
    ThreadUnlock1(v46, v45, v47);
    v10 = a5;
    **(_DWORD **)v72[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Window + 5) + 232LL) & 0x20000000) != 0 )
  {
    v48 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      while ( (**(_DWORD **)(96LL * v48 + *(_QWORD *)(**a1 + 88)) & 0x100) == 0
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 88) + 96LL * v48) + 96LL) != -1LL )
      {
        if ( (unsigned int)++v48 >= *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
          goto LABEL_80;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
    }
  }
LABEL_80:
  v49 = *((_QWORD *)Window + 5);
  if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
  }
  else if ( (*(_DWORD *)(v49 + 288) & 0xF) == 0
         && (v51 = *(_QWORD *)(*((_QWORD *)Window + 2) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 416LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(**a1 + 76) )
  {
    *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
    v52 = (__int64)a1[2];
    if ( !v52 )
      v52 = **a1;
    MNClearCachedPopupSizes(v52);
  }
  v77 = xxxSendMessage((ULONG_PTR)Window);
  if ( !(_DWORD)v77 )
  {
LABEL_150:
    if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(v79 + 424) )
    {
      v70 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v70 )
        xxxWindowEvent(0x80000005, v70, 0, 1, 33);
    }
    goto LABEL_135;
  }
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
  {
    *(_DWORD *)(v9 + 8) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) |= 4u;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) &= ~4u;
  }
  v74 = (unsigned __int16)v77 + 6;
  v73 = WORD1(v77) + 6;
  v78 = __PAIR64__(a4, a3);
  v54 = __PAIR64__(a4, a3);
  v55 = (struct tagMONITOR *)MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0LL, v53);
  v77 = (__int64)v55;
  v56 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
    v56 = a2;
  LODWORD(v78) = v56;
  if ( (v56 & 8) != 0 )
  {
    a3 -= v74;
    **(_DWORD **)v72[0] = **(_DWORD **)v72[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v56 & 4) != 0 )
  {
    a3 -= (unsigned int)v74 >> 1;
  }
  else
  {
    **(_DWORD **)v72[0] = **(_DWORD **)v72[0] & 0xF07FFFFF | ((((**(_DWORD **)v72[0] & 0x10) != 0) + 1) << 23);
  }
  v57 = v73;
  if ( (v56 & 0x20) != 0 )
  {
    a4 -= v73;
    **(_DWORD **)v72[0] |= 0x4000000u;
  }
  else if ( (v56 & 0x10) != 0 )
  {
    a4 -= (unsigned int)v73 >> 1;
  }
  else
  {
    **(_DWORD **)v72[0] |= 0x2000000u;
  }
  if ( (v56 & 0x3C00) != 0 )
    **(_DWORD **)v72[0] = **(_DWORD **)v72[0] & 0xF07FFFFF | ((v56 & 0x3C00) << 13);
  v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72[0] + 16LL) + 40LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v58 + 236) != 1 )
      goto LABEL_116;
LABEL_115:
    **(_DWORD **)v72[0] |= 0x80000000;
    goto LABEL_116;
  }
  if ( *(_DWORD *)(v58 + 236) == 1 )
  {
    v89 = *GetMonitorRectForWindow(&v92, (__int64)v55, (const struct tagWND *)Window);
    v88 = *(_OWORD *)GetMonitorMenuRectForWindow(v93, v77, Window);
    SubtractRect((__int64)v80, (int *)&v89, (int *)&v88);
    v56 = v78;
    v55 = (struct tagMONITOR *)v77;
    goto LABEL_115;
  }
  v80[0] = 0LL;
  v80[1] = 0LL;
  **(_DWORD **)v72[0] &= ~0x80000000;
LABEL_116:
  BestPos = FindBestPos(a3, a4, v74, v57, (struct tagRECT *)v80, v56, (unsigned int ***)v72, v55, v54);
  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 )
  {
    v61 = 25165824LL;
    v59 = *(_QWORD *)v72[0];
    if ( (**(_DWORD **)v72[0] & 0x1800000) != 0 )
    {
      v59 = *(_QWORD *)v72[0];
      **(_DWORD **)v72[0] ^= 0x1800000u;
    }
  }
  if ( (((**(_DWORD **)v72[0] & 0xF800000) != 0) & !_bittest((const signed __int32 *)&v78, 0xEu)) != 0 )
    **(_DWORD **)v72[0] |= 0x8000000u;
  xxxPlayEventSound(5LL, v59, v61, v62);
  xxxSetWindowPos(
    (struct tagWND *)Window,
    ((*(_DWORD *)(v9 + 8) >> 8) & 1) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    (16 * !(*(_DWORD *)(v9 + 8) & 0x100)) | 0x241);
  if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v63 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v63 )
      {
        if ( gpqForeground == *(_QWORD *)(v79 + 424) )
        {
          v64 = 33;
          if ( *(_QWORD *)(v63 + 16) == v79 )
            v63 = (__int64)Window;
          else
            v64 = 49;
          xxxWindowEvent(0x80000004, v63, 0, 1, v64);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64)Window, -4, 0, 0);
  *(_DWORD *)(v9 + 8) = (8 * v75) | *(_DWORD *)(v9 + 8) & 0xFFFFFFF7;
  v67 = xxxMNLoop((__int64 **)v72, v9, 0LL, 0);
  if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
  {
    v69 = v76;
LABEL_139:
    if ( ThreadUnlock1(v66, v65, v68) && *(char *)(*((_QWORD *)Window + 5) + 19LL) >= 0 )
      xxxDestroyWindow((ULONG_PTR)Window);
    if ( v9 )
      xxxMNEndMenuState(v9);
    goto LABEL_144;
  }
  ThreadUnlock1(v66, v65, v68);
  v69 = v76;
LABEL_144:
  if ( v69 )
    v13 = v67;
  if ( v34 )
    xxxUnlockMenuStateInternal(v34, 0);
LABEL_8:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v72, v12);
  return v13;
}
