/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C020DA04
 * Callers:
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020B7E8 (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0104E20 (xxxEnableChildWindowDpiMessageX.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C01297A0 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C012982C (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F9E68 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C0208688 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C020A024 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C020B0D8 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0221A78 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int128 *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  int v22; // esi
  __int64 v23; // rcx
  BOOL v24; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v26; // rax
  _DWORD *Window; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  _DWORD *v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 *v48; // rcx
  int v49; // r9d
  int v50; // r15d
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  _DWORD *v54; // r9
  int v55; // r12d
  int v56; // edx
  int v57; // r14d
  int v58; // ecx
  __int64 v59; // rdx
  int v60; // ebx
  MenuHelpers *v61; // rcx
  int v62; // r14d
  unsigned int *v63; // rcx
  unsigned int v64; // eax
  __int64 *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v84; // [rsp+20h] [rbp-F0h]
  _QWORD *v85[2]; // [rsp+90h] [rbp-80h] BYREF
  LONG v86[4]; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v87; // [rsp+B0h] [rbp-60h]
  __int64 v88; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-40h]
  int v90; // [rsp+E0h] [rbp-30h] BYREF
  int v91; // [rsp+E4h] [rbp-2Ch]
  int v92; // [rsp+E8h] [rbp-28h]
  int v93; // [rsp+ECh] [rbp-24h]
  __int64 v94; // [rsp+F0h] [rbp-20h]
  int v95[4]; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v96; // [rsp+108h] [rbp-8h] BYREF
  _QWORD v97[3]; // [rsp+118h] [rbp+8h] BYREF
  __int64 v98; // [rsp+130h] [rbp+20h] BYREF
  __int64 v99; // [rsp+138h] [rbp+28h] BYREF
  __int64 v100; // [rsp+140h] [rbp+30h]
  __int64 v101[2]; // [rsp+148h] [rbp+38h] BYREF
  __int64 v102[3]; // [rsp+158h] [rbp+48h] BYREF
  _QWORD v103[4]; // [rsp+170h] [rbp+60h] BYREF
  __int128 v104; // [rsp+190h] [rbp+80h] BYREF
  __int128 v105; // [rsp+1A0h] [rbp+90h] BYREF
  __int128 v106; // [rsp+1B0h] [rbp+A0h] BYREF
  int **v107[2]; // [rsp+1C0h] [rbp+B0h] BYREF
  __int128 v108; // [rsp+1D0h] [rbp+C0h] BYREF
  _QWORD v109[3]; // [rsp+1E0h] [rbp+D0h] BYREF
  _QWORD v110[3]; // [rsp+1F8h] [rbp+E8h] BYREF
  __int128 v111; // [rsp+210h] [rbp+100h]
  __int128 v112; // [rsp+250h] [rbp+140h]
  int v113; // [rsp+2C0h] [rbp+1B0h] BYREF
  int v114; // [rsp+2D0h] [rbp+1C0h]
  int v115; // [rsp+2D8h] [rbp+1C8h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v85, 0LL);
  v114 = 0;
  v94 = 0LL;
  v115 = 0;
  v6 = *a1;
  v100 = gptiCurrent;
  if ( *(_DWORD *)(*v6 + 80) != -1 )
  {
    v5 = **a1;
    if ( *(_DWORD *)(v5 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL) )
    {
      if ( (*(_DWORD *)**a1 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
          goto LABEL_110;
        xxxMNCloseHierarchy(**a1, a2);
      }
      if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
        *(_DWORD *)**a1 &= ~0x2000u;
      }
      v7 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v8 = v7;
      if ( v7 && *(_QWORD *)(v7 + 16) )
      {
        v5 = **a1;
        if ( (*(_DWORD *)v5 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
        {
          v9 = *(_QWORD *)(**a1 + 8);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
          v88 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v88;
          v89 = v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v94 = **(_QWORD **)(v8 + 16);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v12, v11);
          v114 = 1;
        }
        if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
        {
          v5 = **a1;
          if ( *(_DWORD *)(v5 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL) )
          {
            v5 = **a1;
            v13 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL) + 96LL * *(int *)(v5 + 80));
            v14 = (__int128 *)*v13;
            if ( (*(_DWORD *)(*v13 + 4) & 3) == 0 )
            {
              v15 = v13[2];
              if ( v15 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v15 + 40) + 44LL) )
                {
                  v111 = *v14;
                  v112 = v14[4];
                  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
                  v109[0] = *(_QWORD *)(v16 + 416);
                  *(_QWORD *)(v16 + 416) = v109;
                  v109[1] = v15;
                  _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
                  v18 = **a1;
                  if ( *(_QWORD *)(v18 + 8) )
                  {
                    v19 = *(_QWORD *)(**a1 + 8);
                    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
                    v88 = *(_QWORD *)(v20 + 416);
                    *(_QWORD *)(v20 + 416) = &v88;
                    v89 = v19;
                    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
                    v21 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
                    if ( (v21[72] & 0xF) == 2 )
                    {
                      v21 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL))
                                       + 40);
                      v22 = v21[7];
                      v115 = v21[8];
                    }
                    else
                    {
                      v22 = 0;
                    }
                    v24 = 0;
                    if ( PsGetCurrentProcessWin32Process(v21) )
                    {
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
                      v24 = IsImmersiveAppRestricted(CurrentProcessWin32Process) != 0;
                    }
                    SmartObjStackRefBase<tagMENU>::Init(v102, 0LL);
                    v26 = *a1;
                    v102[2] = 0LL;
                    Window = xxxCreateWindowEx(
                               385,
                               (wchar_t *)0x8000,
                               0x8000LL,
                               0LL,
                               0x80800000,
                               v22,
                               v115,
                               0x64u,
                               0x64u,
                               *(struct tagWND **)(**a1 + 8),
                               (__int64)v102,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v26 + 8) + 40LL) + 32LL),
                               0LL,
                               0,
                               0xA00u,
                               v24,
                               0LL);
                    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v102, v28);
                    ThreadUnlock1(v30, v29);
                  }
                  else
                  {
                    Window = 0LL;
                  }
                  if ( Window )
                  {
                    v32 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                    if ( v32 )
                    {
                      SetOrClrWF(0, (__int64)Window, 0x408u, 1);
                      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v85, *(_QWORD *)(v32 + 8));
                      if ( *v85[0] )
                      {
                        SmartObjStackRefBase<tagPOPUPMENU>::Init(v101, *(_QWORD *)(**a1 + 64));
                        MNMarkDelayedFreePopup(v85, v101);
                        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v101, v33);
                        SetOrClrWF(
                          (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                          (__int64)Window,
                          0xA40u,
                          1);
                        v34 = *(_QWORD *)(**a1 + 8);
                        *(_QWORD *)&v87 = *v85[0] + 8LL;
                        *((_QWORD *)&v87 + 1) = v34;
                        v104 = v87;
                        HMAssignmentLock(&v104);
                        SmartObjStackRefBase<tagMENU>::Init(v103, v15);
                        v103[2] = 0LL;
                        LockPopupMenu((__int64)v85, (__int64 *)(*v85[0] + 40LL), (__int64)v103);
                        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v103, v35);
                        v36 = *a1;
                        *((_QWORD *)&v87 + 1) = Window;
                        *(_QWORD *)&v87 = *v36 + 24;
                        v105 = v87;
                        HMAssignmentLock(&v105);
                        *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                        v37 = *(_QWORD *)(**a1 + 16);
                        *(_QWORD *)&v87 = *v85[0] + 32LL;
                        *((_QWORD *)&v87 + 1) = v37;
                        v106 = v87;
                        HMAssignmentLock(&v106);
                        *(_QWORD *)(*v85[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                        v38 = *(_DWORD *)**a1;
                        v39 = (_DWORD *)*v85[0];
                        v114 = 0;
                        *v39 ^= (*v39 ^ v38) & 2;
                        **(_DWORD **)v85[0] ^= (**(_DWORD **)v85[0] ^ *(_DWORD *)**a1) & 4;
                        **(_DWORD **)v85[0] ^= ((unsigned __int16)*(_DWORD *)**a1 ^ (unsigned __int16)**(_DWORD **)v85[0]) & 0x800;
                        **(_DWORD **)v85[0] |= 0x200000u;
                        **(_DWORD **)v85[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v85[0]) & 0x400000;
                        **(_DWORD **)v85[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v85[0]) & 0x10;
                        **(_DWORD **)v85[0] = *(_DWORD *)**a1 ^ (**(_DWORD **)v85[0] ^ *(_DWORD *)**a1) & 0x7FFFFFFF;
                        v40 = *(_QWORD *)(*(_QWORD *)(*v85[0] + 40LL) + 40LL);
                        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                          *(_DWORD *)(v40 + 40) |= 4u;
                        else
                          *(_DWORD *)(v40 + 40) &= ~4u;
                        **(_DWORD **)v85[0] &= ~0x1000u;
                        if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v85[0] + 40LL))
                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v85[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                        {
                          MNRefreshUAHCachedSizes(*(_QWORD **)(*v85[0] + 40LL));
                        }
                        v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
                        v110[0] = *(_QWORD *)(v42 + 416);
                        *(_QWORD *)(v42 + 416) = v110;
                        v110[1] = Window;
                        _InterlockedIncrement(Window + 2);
                        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 424LL) + 820LL) & 0x80000) != 0
                          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                          && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                           || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                           && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                        {
                          SmartObjStackRefBase<tagMENU>::Init(v97, *(_QWORD *)(*v85[0] + 40LL));
                          v43 = 0LL;
                          v97[2] = 0LL;
                          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v97[0] + 40LL) + 44LL) )
                          {
                            while ( (**(_DWORD **)(96LL * (int)v43 + *(_QWORD *)(*(_QWORD *)v97[0] + 88LL)) & 0x100) == 0
                                 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97[0] + 88LL) + 96LL * (int)v43)
                                              + 96LL) != -1LL )
                            {
                              v43 = (unsigned int)(v43 + 1);
                              if ( (unsigned int)v43 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v97[0] + 40LL) + 44LL) )
                                goto LABEL_48;
                            }
                          }
                          else
                          {
LABEL_48:
                            xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                          }
                          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v97, v43);
                        }
                        v44 = *((_QWORD *)Window + 5);
                        if ( (*(_DWORD *)(v44 + 232) & 0x8000000) != 0 )
                        {
                          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
                        }
                        else if ( (*(_DWORD *)(v44 + 288) & 0xF) == 0
                               && (v46 = *(_QWORD *)(*((_QWORD *)Window + 2) + 456LL)) != 0
                               && (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 64LL) & 1) != 0 )
                        {
                          WindowDpiLastNotify = 96;
                        }
                        else
                        {
                          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 424LL) + 284LL);
                        }
                        if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v85[0] + 40LL) + 76LL) )
                        {
                          *(_WORD *)(*(_QWORD *)(*v85[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                          MNClearCachedPopupSizes(*(_QWORD *)(*v85[0] + 40LL));
                        }
                        if ( (unsigned int)xxxSendMessage((ULONG_PTR)Window)
                          && (v48 = *a1, v47 = **a1, *(_QWORD *)(v47 + 40))
                          && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v13) != -1 )
                        {
                          v50 = (unsigned __int16)v49 + 6;
                          *(_DWORD *)**a1 |= 0x20u;
                          v51 = xxxMNPositionHierarchy(
                                  a1,
                                  v13,
                                  v50,
                                  (unsigned int)HIWORD(v49) + 6,
                                  &v113,
                                  v86,
                                  (__int64)&v98);
                          v53 = *v85[0];
                          **(_DWORD **)v85[0] ^= (**(_DWORD **)v85[0] ^ (v51 << 23)) & 0xF800000;
                          if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v53, v52) & 0x8000u) != 0LL )
                          {
                            v54 = (_DWORD *)*((_QWORD *)Window + 5);
                            v55 = v112;
                            v56 = v54[23];
                            v57 = DWORD2(v112);
                            v96 = 0uLL;
                            v95[2] = v54[24] + v113 - v54[22];
                            v58 = v86[0] - v56 + v54[25];
                            v95[0] = v113;
                            v95[3] = v58;
                            v95[1] = v86[0];
                            v90 = v112 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                            v59 = **a1;
                            v91 = DWORD1(v112) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 16) + 40LL) + 92LL);
                            v92 = DWORD2(v112) + v90;
                            v93 = v91 + HIDWORD(v112);
                            SmartObjStackRefBase<tagPOPUPMENU>::Init(v107, v59);
                            MNGetPopupBoundsRect(v107, v98, &v96, 0);
                            if ( (unsigned int)IntersectRect(v95, v95, &v90) )
                            {
                              v60 = v50 + v55 + v57 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              if ( v60 > SDWORD2(v96) )
                                v60 = 0;
                              v61 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                              v62 = v55 + *((_DWORD *)v61 + 22) - v50;
                              if ( v62 < (int)v96 )
                                v62 = 0;
                              if ( (MenuHelpers::GetMenuRightAlignHint(v61) || (v111 & 0x2000) != 0) && v62 || !v60 )
                              {
                                v113 = v55 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v50;
                                v63 = (unsigned int *)*v85[0];
                                v64 = **(_DWORD **)v85[0] & 0xF07FFFFF | 0x1000000;
                              }
                              else
                              {
                                v113 = v55
                                     + DWORD2(v112)
                                     + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                                v63 = (unsigned int *)*v85[0];
                                v64 = **(_DWORD **)v85[0] & 0xF07FFFFF | 0x800000;
                              }
                              *v63 = v64;
                              if ( v113 <= (int)v96 )
                              {
                                v113 = v92;
                                **(_DWORD **)v85[0] = **(_DWORD **)v85[0] & 0xF07FFFFF | 0x1000000;
                              }
                            }
                          }
                          if ( (*(_DWORD *)**a1 & 1) != 0 )
                          {
                            if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                              **(_DWORD **)v85[0] |= 0x8000000u;
                            if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v85[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v85[0] |= 0x10u;
                            *(_DWORD *)**a1 |= 0x400u;
                          }
                          else
                          {
                            **(_DWORD **)v85[0] |= 0x8000000u;
                            if ( (**(_DWORD **)v85[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v85[0] |= 0x10u;
                          }
                          v65 = *a1;
                          *((_QWORD *)&v87 + 1) = Window;
                          *(_QWORD *)&v87 = *(_QWORD *)(*v65 + 64) + 56LL;
                          v108 = v87;
                          HMAssignmentLock(&v108);
                          if ( *(_QWORD *)(*v85[0] + 8LL) )
                          {
                            v69 = *(_QWORD *)(*v85[0] + 8LL);
                            v70 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66);
                            v88 = *(_QWORD *)(v70 + 416);
                            *(_QWORD *)(v70 + 416) = &v88;
                            v89 = v69;
                            _InterlockedIncrement((volatile signed __int32 *)(v69 + 8));
                            xxxInternalUpdateWindow(*(struct tagWND **)(*v85[0] + 8LL), 1u);
                            ThreadUnlock1(v72, v71);
                          }
                          if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                          {
                            v99 = *(_QWORD *)Window;
                            xxxUserModeCallback(100LL, (__int64)&v99, 8LL, v68, v84);
                          }
                          xxxPlayEventSound(5LL, v66, v67, v68);
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v74, v73) & 0xF) == 2 )
                            *(_DWORD *)(*((_QWORD *)Window + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                                 + 40LL)
                                                                                     + 288LL);
                          xxxSetWindowPos(
                            (struct tagWND *)Window,
                            ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                            (unsigned int)v113,
                            (unsigned int)v86[0],
                            0,
                            0,
                            ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                          xxxInheritWindowMonitor((struct tagWND *)Window, *(struct tagWND **)(**a1 + 16), 1);
                          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                          {
                            if ( gpqForeground )
                            {
                              v75 = *(_QWORD *)(gpqForeground + 112LL);
                              if ( v75 )
                              {
                                if ( gpqForeground == *(_QWORD *)(v100 + 432) )
                                {
                                  v76 = 33;
                                  if ( *(_QWORD *)(v75 + 16) == v100 )
                                    v75 = (__int64)Window;
                                  else
                                    v76 = 49;
                                  xxxWindowEvent(0x80000004, v75, 0, 1, v76);
                                }
                              }
                            }
                          }
                          xxxWindowEvent(6u, (__int64)Window, -4, 0, 0);
                          if ( *(_DWORD *)(a2 + 20) == 1 )
                            xxxSendMessage((ULONG_PTR)Window);
                          xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                          v4 = (__int64)Window;
                          ThreadUnlock1(v78, v77);
                        }
                        else
                        {
                          if ( ThreadUnlock1(v48, v47) )
                            xxxDestroyWindow(Window);
                          HMAssignmentUnlock(**a1 + 24);
                        }
                      }
                      else
                      {
                        xxxDestroyWindow(Window);
                      }
                    }
                    else
                    {
                      xxxDestroyWindow(v31);
                    }
                  }
                  ThreadUnlock1(v18, v17);
                }
              }
            }
          }
        }
        else
        {
          v4 = -1LL;
        }
        if ( v114 && *(_QWORD *)(**a1 + 8) )
        {
          v79 = *(_QWORD *)(**a1 + 8);
          v80 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
          v88 = *(_QWORD *)(v80 + 416);
          *(_QWORD *)(v80 + 416) = &v88;
          v89 = v79;
          _InterlockedIncrement((volatile signed __int32 *)(v79 + 8));
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v82, v81);
        }
      }
    }
  }
LABEL_110:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v85, v5);
  return v4;
}
