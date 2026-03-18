/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C01E7B08
 * Callers:
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C01E58A4 (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     MNClearCachedPopupSizes @ 0x1C0006BE0 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0006C6C (MNRefreshUAHCachedSizes.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E7EC8 (xxxEnableChildWindowDpiMessageX.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     MNMarkDelayedFreePopup @ 0x1C01D5278 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C01E2838 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C01E51B4 (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C01F9918 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
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
  __int64 v13; // r8
  __int128 **v14; // r14
  __int128 *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rcx
  __int32 v24; // esi
  __int64 v25; // rcx
  BOOL v26; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v28; // rax
  _DWORD *Window; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  ULONG_PTR v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  int v54; // r15d
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // rdx
  _DWORD *v58; // rdx
  int v59; // r12d
  unsigned int v60; // r8d
  int v61; // r14d
  int v62; // ecx
  __int64 *v63; // rax
  __int64 v64; // rdx
  int v65; // ebx
  MenuHelpers *v66; // rcx
  int v67; // r14d
  unsigned int *v68; // rcx
  unsigned int v69; // eax
  __int64 *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  int v92; // [rsp+20h] [rbp-F0h]
  _QWORD *v93[2]; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v94; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-60h]
  int v97; // [rsp+C0h] [rbp-50h] BYREF
  int v98; // [rsp+C4h] [rbp-4Ch]
  int v99; // [rsp+C8h] [rbp-48h]
  int v100; // [rsp+CCh] [rbp-44h]
  __int64 v101; // [rsp+D0h] [rbp-40h]
  int v102[4]; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v103; // [rsp+E8h] [rbp-28h] BYREF
  _QWORD v104[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v105; // [rsp+110h] [rbp+0h] BYREF
  __int64 v106; // [rsp+118h] [rbp+8h] BYREF
  __int64 v107; // [rsp+120h] [rbp+10h]
  __int64 v108[3]; // [rsp+128h] [rbp+18h] BYREF
  __int128 v109; // [rsp+140h] [rbp+30h]
  __int128 v110; // [rsp+150h] [rbp+40h]
  __int128 v111; // [rsp+160h] [rbp+50h]
  __int128 v112; // [rsp+170h] [rbp+60h]
  _QWORD v113[3]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v114[3]; // [rsp+198h] [rbp+88h] BYREF
  __int128 v115; // [rsp+1B0h] [rbp+A0h] BYREF
  __int128 v116; // [rsp+1C0h] [rbp+B0h] BYREF
  __int128 v117; // [rsp+1D0h] [rbp+C0h] BYREF
  int **v118[2]; // [rsp+1E0h] [rbp+D0h] BYREF
  __int128 v119; // [rsp+1F0h] [rbp+E0h] BYREF
  _QWORD v120[3]; // [rsp+200h] [rbp+F0h] BYREF
  _QWORD v121[3]; // [rsp+218h] [rbp+108h] BYREF
  __int128 v122; // [rsp+230h] [rbp+120h]
  __int128 v123; // [rsp+270h] [rbp+160h]
  int v124; // [rsp+2E0h] [rbp+1D0h] BYREF
  int v125; // [rsp+2F0h] [rbp+1E0h]
  __int32 v126; // [rsp+2F8h] [rbp+1E8h]

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v93, 0LL);
  v125 = 0;
  v101 = 0LL;
  v126 = 0;
  v6 = *a1;
  v107 = gptiCurrent;
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
          v95 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v95;
          v96 = v9;
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v101 = **(_QWORD **)(v8 + 16);
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v12, v11, v13);
          v125 = 1;
        }
        if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
        {
          v5 = **a1;
          if ( *(_DWORD *)(v5 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL) )
          {
            v5 = **a1;
            v14 = (__int128 **)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL) + 96LL * *(int *)(v5 + 80));
            v15 = *v14;
            if ( (*((_DWORD *)*v14 + 1) & 3) == 0 )
            {
              v16 = (__int64)v14[2];
              if ( v16 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v16 + 40) + 44LL) )
                {
                  v122 = *v15;
                  v123 = v15[4];
                  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
                  v120[0] = *(_QWORD *)(v17 + 408);
                  *(_QWORD *)(v17 + 408) = v120;
                  v120[1] = v16;
                  _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
                  v20 = **a1;
                  if ( *(_QWORD *)(v20 + 8) )
                  {
                    v21 = *(_QWORD *)(**a1 + 8);
                    v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
                    v95 = *(_QWORD *)(v22 + 408);
                    *(_QWORD *)(v22 + 408) = &v95;
                    v96 = v21;
                    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
                    v23 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
                    if ( (v23[72] & 0xF) == 2 )
                    {
                      v23 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL))
                                       + 40);
                      v24 = v23[7];
                      v126 = v23[8];
                    }
                    else
                    {
                      v24 = 0;
                    }
                    v26 = 0;
                    if ( PsGetCurrentProcessWin32Process(v23) )
                    {
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
                      v26 = IsImmersiveAppRestricted(CurrentProcessWin32Process) != 0;
                    }
                    SmartObjStackRefBase<tagMENU>::Init(v113, 0LL);
                    v28 = *a1;
                    v113[2] = 0LL;
                    Window = xxxCreateWindowEx(
                               385,
                               0x8000LL,
                               0x8000LL,
                               0LL,
                               0x80800000,
                               v24,
                               v126,
                               100,
                               100,
                               *(struct tagWND **)(**a1 + 8),
                               (__int64)v113,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v28 + 8) + 40LL) + 32LL),
                               0LL,
                               0,
                               0xA00u,
                               v26,
                               0LL);
                    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v113, v30);
                    ThreadUnlock1(v32, v31, v33);
                  }
                  else
                  {
                    Window = 0LL;
                  }
                  if ( Window )
                  {
                    v35 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                    if ( v35 )
                    {
                      SetOrClrWF(0, (__int64)Window, 1032, 1);
                      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v93, *(_QWORD *)(v35 + 8));
                      if ( *v93[0] )
                      {
                        SmartObjStackRefBase<tagPOPUPMENU>::Init(v108, *(_QWORD *)(**a1 + 64));
                        MNMarkDelayedFreePopup(v93, v108);
                        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v108, v36);
                        SetOrClrWF(
                          (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                          (__int64)Window,
                          2624,
                          1);
                        v37 = *(_QWORD *)(**a1 + 8);
                        *(_QWORD *)&v109 = *v93[0] + 8LL;
                        *((_QWORD *)&v109 + 1) = v37;
                        v115 = v109;
                        HMAssignmentLock(&v115);
                        SmartObjStackRefBase<tagMENU>::Init(v114, v16);
                        v114[2] = 0LL;
                        LockPopupMenu((__int64)v93, (__int64 *)(*v93[0] + 40LL), (__int64)v114);
                        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v114, v38);
                        v39 = *a1;
                        *((_QWORD *)&v110 + 1) = Window;
                        *(_QWORD *)&v110 = *v39 + 24;
                        v116 = v110;
                        HMAssignmentLock(&v116);
                        *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                        v40 = *(_QWORD *)(**a1 + 16);
                        *(_QWORD *)&v111 = *v93[0] + 32LL;
                        *((_QWORD *)&v111 + 1) = v40;
                        v117 = v111;
                        HMAssignmentLock(&v117);
                        *(_QWORD *)(*v93[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                        v41 = (_DWORD *)*v93[0];
                        v42 = *(_DWORD *)**a1;
                        v125 = 0;
                        *v41 ^= ((unsigned __int8)v42 ^ (unsigned __int8)*v41) & 2;
                        **(_DWORD **)v93[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v93[0]) & 4;
                        **(_DWORD **)v93[0] ^= (**(_DWORD **)v93[0] ^ *(_DWORD *)**a1) & 0x800;
                        **(_DWORD **)v93[0] |= 0x200000u;
                        **(_DWORD **)v93[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v93[0]) & 0x400000;
                        **(_DWORD **)v93[0] ^= (**(_DWORD **)v93[0] ^ *(_DWORD *)**a1) & 0x10;
                        **(_DWORD **)v93[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v93[0]) & 0x7FFFFFFF;
                        v43 = *(_QWORD *)(*(_QWORD *)(*v93[0] + 40LL) + 40LL);
                        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                          *(_DWORD *)(v43 + 40) |= 4u;
                        else
                          *(_DWORD *)(v43 + 40) &= ~4u;
                        **(_DWORD **)v93[0] &= ~0x1000u;
                        if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v93[0] + 40LL))
                          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v93[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                        {
                          MNRefreshUAHCachedSizes(*(_QWORD **)(*v93[0] + 40LL));
                        }
                        v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44);
                        v121[0] = *(_QWORD *)(v45 + 408);
                        *(_QWORD *)(v45 + 408) = v121;
                        v121[1] = Window;
                        _InterlockedIncrement(Window + 2);
                        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 416LL) + 812LL) & 0x80000) != 0
                          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                          && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                           || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                           && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                        {
                          SmartObjStackRefBase<tagMENU>::Init(v104, *(_QWORD *)(*v93[0] + 40LL));
                          v46 = 0LL;
                          v104[2] = 0LL;
                          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v104[0] + 40LL) + 44LL) )
                          {
                            while ( (**(_DWORD **)(96LL * (int)v46 + *(_QWORD *)(*(_QWORD *)v104[0] + 88LL)) & 0x100) == 0
                                 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v104[0] + 88LL) + 96LL * (int)v46)
                                              + 96LL) != -1LL )
                            {
                              v46 = (unsigned int)(v46 + 1);
                              if ( (unsigned int)v46 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v104[0] + 40LL) + 44LL) )
                                goto LABEL_48;
                            }
                          }
                          else
                          {
LABEL_48:
                            xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                          }
                          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v104, v46);
                        }
                        v47 = *((_QWORD *)Window + 5);
                        if ( (*(_DWORD *)(v47 + 232) & 0x8000000) != 0 )
                        {
                          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
                        }
                        else if ( (*(_DWORD *)(v47 + 288) & 0xF) == 0
                               && (v49 = *(_QWORD *)(*((_QWORD *)Window + 2) + 448LL)) != 0
                               && (*(_DWORD *)(**(_QWORD **)(v49 + 8) + 52LL) & 1) != 0 )
                        {
                          WindowDpiLastNotify = 96;
                        }
                        else
                        {
                          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 416LL) + 284LL);
                        }
                        if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v93[0] + 40LL) + 76LL) )
                        {
                          *(_WORD *)(*(_QWORD *)(*v93[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                          MNClearCachedPopupSizes(*(_QWORD *)(*v93[0] + 40LL));
                        }
                        if ( (unsigned int)xxxSendMessage((ULONG_PTR)Window)
                          && (v51 = *a1, v50 = **a1, *(_QWORD *)(v50 + 40))
                          && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v14) != -1 )
                        {
                          v54 = (unsigned __int16)v53 + 6;
                          *(_DWORD *)**a1 |= 0x20u;
                          v55 = xxxMNPositionHierarchy(
                                  a1,
                                  (__int64)v14,
                                  v54,
                                  (unsigned int)HIWORD(v53) + 6,
                                  &v124,
                                  (LONG *)&v94,
                                  (__int64)&v105);
                          v57 = *v93[0];
                          **(_DWORD **)v93[0] ^= (**(_DWORD **)v93[0] ^ (v55 << 23)) & 0xF800000;
                          if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v57, v56) & 0x8000u) != 0LL )
                          {
                            v58 = (_DWORD *)*((_QWORD *)Window + 5);
                            v59 = v123;
                            v60 = v94 - v58[23];
                            v61 = DWORD2(v123);
                            v103 = 0uLL;
                            v102[2] = v58[24] + v124 - v58[22];
                            v62 = v60 + v58[23];
                            v102[0] = v124;
                            v63 = *a1;
                            v102[1] = v62;
                            v102[3] = v60 + v58[25];
                            v97 = v123 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v63 + 16) + 40LL) + 88LL);
                            v64 = **a1;
                            v98 = DWORD1(v123) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 16) + 40LL) + 92LL);
                            v99 = DWORD2(v123) + v97;
                            v100 = v98 + HIDWORD(v123);
                            SmartObjStackRefBase<tagPOPUPMENU>::Init(v118, v64);
                            MNGetPopupBoundsRect(v118, v105, &v103, 0);
                            if ( (unsigned int)IntersectRect(v102, v102, &v97) )
                            {
                              v65 = v54 + v59 + v61 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              if ( v65 > SDWORD2(v103) )
                                v65 = 0;
                              v66 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                              v67 = v59 + *((_DWORD *)v66 + 22) - v54;
                              if ( v67 < (int)v103 )
                                v67 = 0;
                              if ( (MenuHelpers::GetMenuRightAlignHint(v66) || (v122 & 0x2000) != 0) && v67 || !v65 )
                              {
                                v124 = v59 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v54;
                                v68 = (unsigned int *)*v93[0];
                                v69 = **(_DWORD **)v93[0] & 0xF07FFFFF | 0x1000000;
                              }
                              else
                              {
                                v124 = v59
                                     + DWORD2(v123)
                                     + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                                v68 = (unsigned int *)*v93[0];
                                v69 = **(_DWORD **)v93[0] & 0xF07FFFFF | 0x800000;
                              }
                              *v68 = v69;
                              if ( v124 <= (int)v103 )
                              {
                                v124 = v99;
                                **(_DWORD **)v93[0] = **(_DWORD **)v93[0] & 0xF07FFFFF | 0x1000000;
                              }
                            }
                          }
                          if ( (*(_DWORD *)**a1 & 1) != 0 )
                          {
                            if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                              **(_DWORD **)v93[0] |= 0x8000000u;
                            if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v93[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v93[0] |= 0x10u;
                            *(_DWORD *)**a1 |= 0x400u;
                          }
                          else
                          {
                            **(_DWORD **)v93[0] |= 0x8000000u;
                            if ( (**(_DWORD **)v93[0] & 0xF800000) == 0x1000000 )
                              **(_DWORD **)v93[0] |= 0x10u;
                          }
                          v70 = *a1;
                          *((_QWORD *)&v112 + 1) = Window;
                          *(_QWORD *)&v112 = *(_QWORD *)(*v70 + 64) + 56LL;
                          v119 = v112;
                          HMAssignmentLock(&v119);
                          if ( *(_QWORD *)(*v93[0] + 8LL) )
                          {
                            v74 = *(_QWORD *)(*v93[0] + 8LL);
                            v75 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71);
                            v95 = *(_QWORD *)(v75 + 408);
                            *(_QWORD *)(v75 + 408) = &v95;
                            v96 = v74;
                            _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
                            xxxInternalUpdateWindow(*(struct tagWND **)(*v93[0] + 8LL), 1u);
                            ThreadUnlock1(v77, v76, v78);
                          }
                          if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                          {
                            v106 = *(_QWORD *)Window;
                            xxxUserModeCallback(100LL, (__int64)&v106, 8LL, v73, v92);
                          }
                          xxxPlayEventSound(5LL, v71, v72, v73);
                          if ( (W32GetCurrentThreadDpiAwarenessContext(v80, v79) & 0xF) == 2 )
                            *(_DWORD *)(*((_QWORD *)Window + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                                 + 40LL)
                                                                                     + 288LL);
                          xxxSetWindowPos(
                            (struct tagWND *)Window,
                            ((*(_DWORD *)(a2 + 8) >> 8) & 1) - 1LL,
                            (unsigned int)v124,
                            v94,
                            0,
                            0,
                            (16 * !(*(_DWORD *)(a2 + 8) & 0x100)) | 0x241);
                          xxxInheritWindowMonitor((struct tagWND *)Window, *(struct tagWND **)(**a1 + 16), 1);
                          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                          {
                            if ( gpqForeground )
                            {
                              v81 = *(_QWORD *)(gpqForeground + 112LL);
                              if ( v81 )
                              {
                                if ( gpqForeground == *(_QWORD *)(v107 + 424) )
                                {
                                  v82 = 33;
                                  if ( *(_QWORD *)(v81 + 16) == v107 )
                                    v81 = (__int64)Window;
                                  else
                                    v82 = 49;
                                  xxxWindowEvent(0x80000004, v81, 0, 1, v82);
                                }
                              }
                            }
                          }
                          xxxWindowEvent(6u, (__int64)Window, -4, 0, 0);
                          if ( *(_DWORD *)(a2 + 20) == 1 )
                            xxxSendMessage((ULONG_PTR)Window);
                          xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                          v4 = (__int64)Window;
                          ThreadUnlock1(v84, v83, v85);
                        }
                        else
                        {
                          if ( ThreadUnlock1(v51, v50, v52) )
                            xxxDestroyWindow((ULONG_PTR)Window);
                          HMAssignmentUnlock(**a1 + 24);
                        }
                      }
                      else
                      {
                        xxxDestroyWindow((ULONG_PTR)Window);
                      }
                    }
                    else
                    {
                      xxxDestroyWindow(v34);
                    }
                  }
                  ThreadUnlock1(v20, v18, v19);
                }
              }
            }
          }
        }
        else
        {
          v4 = -1LL;
        }
        if ( v125 && *(_QWORD *)(**a1 + 8) )
        {
          v86 = *(_QWORD *)(**a1 + 8);
          v87 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
          v95 = *(_QWORD *)(v87 + 408);
          *(_QWORD *)(v87 + 408) = &v95;
          v96 = v86;
          _InterlockedIncrement((volatile signed __int32 *)(v86 + 8));
          xxxSendMessage(*(_QWORD *)(**a1 + 8));
          ThreadUnlock1(v89, v88, v90);
        }
      }
    }
  }
LABEL_110:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v93, v5);
  return v4;
}
