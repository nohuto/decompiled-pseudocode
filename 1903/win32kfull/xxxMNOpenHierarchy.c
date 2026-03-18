/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C0225610
 * Callers:
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C022331C (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00ECFB0 (xxxEnableChildWindowDpiMessageX.c)
 *     MNClearCachedPopupSizes @ 0x1C00FC7E0 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C00FC86C (MNRefreshUAHCachedSizes.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     MNMarkDelayedFreePopup @ 0x1C0210B2C (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C0220044 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C023A1AC (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r12d
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // r14
  __int128 *v18; // rcx
  __int64 v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v35; // bl
  __int64 *v36; // rax
  __int64 Window; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rax
  _DWORD *v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 *v69; // rcx
  __int64 v70; // r8
  int v71; // r9d
  int v72; // r15d
  int v73; // eax
  __int64 v74; // r8
  __int64 v75; // rdx
  _DWORD *v76; // r9
  int v77; // edx
  int v78; // ecx
  __int64 *v79; // rax
  __int64 *v80; // rdx
  __int64 v81; // rdx
  int v82; // r8d
  int v83; // ebx
  MenuHelpers *v84; // rcx
  int v85; // r14d
  unsigned int *v86; // rcx
  unsigned int v87; // eax
  __int64 *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  _QWORD *v110[2]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-68h]
  __int64 v113; // [rsp+B0h] [rbp-60h]
  int v114[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v115; // [rsp+C8h] [rbp-48h]
  int v116; // [rsp+CCh] [rbp-44h]
  __int64 v117; // [rsp+D0h] [rbp-40h]
  int v118[4]; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v119; // [rsp+E8h] [rbp-28h] BYREF
  _QWORD v120[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v121; // [rsp+110h] [rbp+0h] BYREF
  __int64 v122; // [rsp+118h] [rbp+8h] BYREF
  __int64 v123; // [rsp+120h] [rbp+10h] BYREF
  __int64 v124; // [rsp+128h] [rbp+18h]
  __int64 v125; // [rsp+130h] [rbp+20h]
  __int64 v126; // [rsp+138h] [rbp+28h] BYREF
  __int64 v127; // [rsp+140h] [rbp+30h]
  __int64 v128; // [rsp+148h] [rbp+38h]
  __int64 v129[2]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v130; // [rsp+160h] [rbp+50h]
  __int128 v131; // [rsp+170h] [rbp+60h]
  __int128 v132; // [rsp+180h] [rbp+70h]
  __int128 v133; // [rsp+190h] [rbp+80h]
  __int128 v134; // [rsp+1A0h] [rbp+90h]
  __int64 v135; // [rsp+1B0h] [rbp+A0h]
  __int64 v136; // [rsp+1B8h] [rbp+A8h]
  __int128 v137; // [rsp+1E0h] [rbp+D0h]
  __int64 v138[3]; // [rsp+210h] [rbp+100h] BYREF
  _QWORD v139[3]; // [rsp+228h] [rbp+118h] BYREF
  __int128 v140; // [rsp+240h] [rbp+130h] BYREF
  __int128 v141; // [rsp+250h] [rbp+140h] BYREF
  __int128 v142; // [rsp+260h] [rbp+150h] BYREF
  int **v143[2]; // [rsp+270h] [rbp+160h] BYREF
  _OWORD v144[4]; // [rsp+280h] [rbp+170h] BYREF
  int v145; // [rsp+2D0h] [rbp+1C0h] BYREF
  int v146; // [rsp+2E0h] [rbp+1D0h]
  unsigned int v147; // [rsp+2E8h] [rbp+1D8h] BYREF

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v110, 0LL);
  v146 = 0;
  v111 = 0LL;
  v8 = 0;
  v112 = 0LL;
  v113 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v9 = *a1;
  v117 = 0LL;
  if ( *(_DWORD *)(*v9 + 80) != -1 )
  {
    v5 = **a1;
    if ( *(_DWORD *)(v5 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL) )
    {
      if ( (*(_DWORD *)**a1 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
          goto LABEL_106;
        xxxMNCloseHierarchy(**a1, a2);
      }
      if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
        *(_DWORD *)**a1 &= ~0x2000u;
      }
      v10 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v11 = v10;
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 16) )
        {
          v5 = **a1;
          if ( (*(_DWORD *)v5 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
          {
            v12 = *(_QWORD *)(**a1 + 8);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
            v111 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v111;
            v112 = v12;
            HMLockObject(v12);
            v117 = **(_QWORD **)(v11 + 16);
            xxxSendMessage(*(_QWORD *)(**a1 + 8));
            ThreadUnlock1(v15, v14, v16);
            v146 = 1;
          }
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
          {
            v4 = -1LL;
            goto LABEL_103;
          }
          v5 = **a1;
          if ( *(_DWORD *)(v5 + 80) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL)
            || (v5 = **a1,
                v17 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL) + 96LL * *(int *)(v5 + 80)),
                v18 = (__int128 *)*v17,
                (*(_DWORD *)(*v17 + 4) & 3) != 0)
            || (v19 = v17[2]) == 0
            || !*(_DWORD *)(*(_QWORD *)(v19 + 40) + 44LL) )
          {
LABEL_103:
            if ( v146 && *(_QWORD *)(**a1 + 8) )
            {
              v104 = *(_QWORD *)(**a1 + 8);
              v105 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
              v111 = *(_QWORD *)(v105 + 408);
              *(_QWORD *)(v105 + 408) = &v111;
              v112 = v104;
              HMLockObject(v104);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v107, v106, v108);
            }
            goto LABEL_106;
          }
          v20 = v18[1];
          v134 = *v18;
          v21 = v18[4];
          v136 = *((_QWORD *)&v20 + 1);
          v137 = v21;
          v135 = v19;
          v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
          v123 = *(_QWORD *)(v22 + 408);
          *(_QWORD *)(v22 + 408) = &v123;
          v124 = v19;
          HMLockObject(v19);
          v26 = **a1;
          if ( *(_QWORD *)(v26 + 8) )
          {
            v27 = *(_QWORD *)(**a1 + 8);
            v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
            v111 = *(_QWORD *)(v28 + 408);
            *(_QWORD *)(v28 + 408) = &v111;
            v112 = v27;
            HMLockObject(v27);
            v30 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
            if ( (v30[72] & 0xF) == 2 )
            {
              v30 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL)) + 40);
              v8 = v30[7];
              v31 = v30[8];
            }
            else
            {
              v31 = 0;
            }
            v35 = 0;
            if ( PsGetCurrentProcessWin32Process(v30, v29) )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32);
              if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
                v35 = 1;
            }
            SmartObjStackRefBase<tagMENU>::Init(v138, 0LL);
            v36 = *a1;
            v138[2] = 0LL;
            Window = xxxCreateWindowEx(
                       385,
                       0x8000LL,
                       0x8000LL,
                       0LL,
                       -2139095040,
                       v8,
                       v31,
                       0x64u,
                       0x64u,
                       *(struct tagWND **)(**a1 + 8),
                       (__int64 **)v138,
                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v36 + 8) + 40LL) + 32LL),
                       0LL,
                       0,
                       0xA00u,
                       v35,
                       0LL);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v138, v38, v39, v40);
            ThreadUnlock1(v42, v41, v43);
          }
          else
          {
            Window = 0LL;
          }
          if ( Window )
          {
            v45 = safe_cast_fnid_to_PMENUWND(Window);
            if ( v45 )
            {
              SetOrClrWF(0, Window, 0x408u, 1);
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v110, *(_QWORD *)(v45 + 8));
              if ( *v110[0] )
              {
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v129, *(_QWORD *)(**a1 + 64));
                MNMarkDelayedFreePopup(v110, v129);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v129, v46, v47, v48);
                SetOrClrWF(
                  (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                  Window,
                  0xA40u,
                  1);
                v49 = *(_QWORD *)(**a1 + 8);
                *(_QWORD *)&v130 = *v110[0] + 8LL;
                *((_QWORD *)&v130 + 1) = v49;
                v140 = v130;
                HMAssignmentLock(&v140);
                SmartObjStackRefBase<tagMENU>::Init(v139, v135);
                v139[2] = 0LL;
                LockPopupMenu((__int64)v110, (__int64 *)(*v110[0] + 40LL), (__int64)v139);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v139, v50, v51, v52);
                v53 = *a1;
                *((_QWORD *)&v131 + 1) = Window;
                *(_QWORD *)&v131 = *v53 + 24;
                v141 = v131;
                HMAssignmentLock(&v141);
                *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                v54 = *(_QWORD *)(**a1 + 16);
                *(_QWORD *)&v132 = *v110[0] + 32LL;
                *((_QWORD *)&v132 + 1) = v54;
                v142 = v132;
                HMAssignmentLock(&v142);
                *(_QWORD *)(*v110[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                v55 = (_DWORD *)*v110[0];
                v56 = *(_DWORD *)**a1;
                v146 = 0;
                *v55 ^= ((unsigned __int8)v56 ^ (unsigned __int8)*v55) & 2;
                **(_DWORD **)v110[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v110[0]) & 4;
                **(_DWORD **)v110[0] ^= ((unsigned __int16)*(_DWORD *)**a1 ^ (unsigned __int16)**(_DWORD **)v110[0]) & 0x800;
                **(_DWORD **)v110[0] |= 0x200000u;
                **(_DWORD **)v110[0] ^= (**(_DWORD **)v110[0] ^ *(_DWORD *)**a1) & 0x400000;
                **(_DWORD **)v110[0] ^= (**(_DWORD **)v110[0] ^ *(_DWORD *)**a1) & 0x10;
                **(_DWORD **)v110[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v110[0]) & 0x7FFFFFFF;
                v57 = *(_QWORD *)(*(_QWORD *)(*v110[0] + 40LL) + 40LL);
                if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                  *(_DWORD *)(v57 + 40) |= 4u;
                else
                  *(_DWORD *)(v57 + 40) &= ~4u;
                **(_DWORD **)v110[0] &= ~0x1000u;
                if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v110[0] + 40LL))
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v110[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                {
                  MNRefreshUAHCachedSizes(*(_QWORD **)(*v110[0] + 40LL));
                }
                v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60);
                v126 = *(_QWORD *)(v61 + 408);
                *(_QWORD *)(v61 + 408) = &v126;
                v127 = Window;
                HMLockObject(Window);
                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 812LL) & 0x100000) != 0
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                  && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                   || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                   && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                {
                  SmartObjStackRefBase<tagMENU>::Init(v120, *(_QWORD *)(*v110[0] + 40LL));
                  v63 = 0LL;
                  v120[2] = 0LL;
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v120[0] + 40LL) + 44LL) )
                  {
                    while ( 1 )
                    {
                      v64 = 96LL * (int)v63;
                      if ( (**(_DWORD **)(v64 + *(_QWORD *)(*(_QWORD *)v120[0] + 88LL)) & 0x100) != 0
                        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v120[0] + 88LL) + 96LL * (int)v63) + 96LL) == -1LL )
                      {
                        break;
                      }
                      v63 = (unsigned int)(v63 + 1);
                      if ( (unsigned int)v63 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v120[0] + 40LL) + 44LL) )
                        goto LABEL_52;
                    }
                  }
                  else
                  {
LABEL_52:
                    xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                  }
                  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v120, v63, v64, v62);
                }
                v65 = *(_QWORD *)(Window + 40);
                if ( (*(_DWORD *)(v65 + 232) & 0x8000000) != 0 )
                {
                  WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
                }
                else if ( (*(_DWORD *)(v65 + 288) & 0xF) == 0
                       && (v67 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
                       && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 64LL) & 1) != 0 )
                {
                  WindowDpiLastNotify = 96;
                }
                else
                {
                  WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 284LL);
                }
                if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v110[0] + 40LL) + 76LL) )
                {
                  *(_WORD *)(*(_QWORD *)(*v110[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                  MNClearCachedPopupSizes(*(_QWORD *)(*v110[0] + 40LL));
                }
                if ( (unsigned int)xxxSendMessage(Window)
                  && (v69 = *a1, v68 = **a1, *(_QWORD *)(v68 + 40))
                  && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v17) != -1 )
                {
                  v72 = (unsigned __int16)v71 + 6;
                  *(_DWORD *)**a1 |= 0x20u;
                  v73 = xxxMNPositionHierarchy(
                          a1,
                          v17,
                          v72,
                          (unsigned int)HIWORD(v71) + 6,
                          &v145,
                          (LONG *)&v147,
                          (__int64)&v121);
                  v75 = *v110[0];
                  **(_DWORD **)v110[0] ^= (**(_DWORD **)v110[0] ^ (v73 << 23)) & 0xF800000;
                  if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v75, v74) & 0x8000u) != 0LL )
                  {
                    v76 = *(_DWORD **)(Window + 40);
                    v119 = 0uLL;
                    v77 = v76[23];
                    v118[2] = v76[24] + v145 - v76[22];
                    v78 = v147 - v77 + v76[25];
                    v118[0] = v145;
                    v118[3] = v78;
                    v118[1] = v147;
                    v79 = *a1;
                    v80 = *a1;
                    v114[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v137;
                    v81 = *v80;
                    v82 = DWORD1(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v79 + 16) + 40LL) + 92LL);
                    v115 = DWORD2(v137) + v114[0];
                    v114[1] = v82;
                    v116 = v82 + HIDWORD(v137);
                    SmartObjStackRefBase<tagPOPUPMENU>::Init(v143, v81);
                    MNGetPopupBoundsRect(v143, v121, &v119, 0);
                    if ( (unsigned int)IntersectRect(v118, v118, v114) )
                    {
                      v83 = v72 + v137 + DWORD2(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                      if ( v83 > SDWORD2(v119) )
                        v83 = 0;
                      v84 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                      v85 = v137 + *((_DWORD *)v84 + 22) - v72;
                      if ( v85 < (int)v119 )
                        v85 = 0;
                      if ( (MenuHelpers::GetMenuRightAlignHint(v84) || (v134 & 0x2000) != 0) && v85 || !v83 )
                      {
                        v145 = v137 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v72;
                        v86 = (unsigned int *)*v110[0];
                        v87 = **(_DWORD **)v110[0] & 0xF07FFFFF | 0x1000000;
                      }
                      else
                      {
                        v145 = v137 + DWORD2(v137) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                        v86 = (unsigned int *)*v110[0];
                        v87 = **(_DWORD **)v110[0] & 0xF07FFFFF | 0x800000;
                      }
                      *v86 = v87;
                      if ( v145 <= (int)v119 )
                      {
                        v145 = v115;
                        **(_DWORD **)v110[0] = **(_DWORD **)v110[0] & 0xF07FFFFF | 0x1000000;
                      }
                    }
                  }
                  if ( (*(_DWORD *)**a1 & 1) != 0 )
                  {
                    if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                      **(_DWORD **)v110[0] |= 0x8000000u;
                    if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v110[0] & 0xF800000) == 0x1000000 )
                      **(_DWORD **)v110[0] |= 0x10u;
                    *(_DWORD *)**a1 |= 0x400u;
                  }
                  else
                  {
                    **(_DWORD **)v110[0] |= 0x8000000u;
                    if ( (**(_DWORD **)v110[0] & 0xF800000) == 0x1000000 )
                      **(_DWORD **)v110[0] |= 0x10u;
                  }
                  v88 = *a1;
                  *((_QWORD *)&v133 + 1) = Window;
                  *(_QWORD *)&v133 = *(_QWORD *)(*v88 + 64) + 56LL;
                  v144[0] = v133;
                  HMAssignmentLock(v144);
                  if ( *(_QWORD *)(*v110[0] + 8LL) )
                  {
                    v92 = *(_QWORD *)(*v110[0] + 8LL);
                    v93 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91);
                    v111 = *(_QWORD *)(v93 + 408);
                    *(_QWORD *)(v93 + 408) = &v111;
                    v112 = v92;
                    HMLockObject(v92);
                    xxxInternalUpdateWindow(*(struct tagWND **)(*v110[0] + 8LL), 1u);
                    ThreadUnlock1(v95, v94, v96);
                  }
                  if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                  {
                    v122 = *(_QWORD *)Window;
                    xxxUserModeCallback(0x64u, (__int64)&v122, 8u, v91);
                  }
                  xxxPlayEventSound(5LL);
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v98, v97, v99, v100) & 0xF) == 2 )
                    *(_DWORD *)(*(_QWORD *)(Window + 40) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL)
                                                                              + 288LL);
                  xxxSetWindowPos(
                    (struct tagWND *)Window,
                    ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                    (unsigned int)v145,
                    v147,
                    0,
                    0,
                    ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                  xxxInheritWindowMonitor((struct tagWND *)Window, *(__int64 **)(**a1 + 16), 1);
                  xxxWindowEvent(6u, (struct tagWND *)Window, 4294967292LL, 0LL, 0);
                  if ( *(_DWORD *)(a2 + 20) == 1 )
                    xxxSendMessage(Window);
                  xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                  v4 = Window;
                  ThreadUnlock1(v102, v101, v103);
                }
                else
                {
                  if ( ThreadUnlock1(v69, v68, v70) )
                    xxxDestroyWindow((__int64 *)Window);
                  HMAssignmentUnlock(**a1 + 24);
                }
                goto LABEL_102;
              }
              v44 = (__int64 *)Window;
            }
            xxxDestroyWindow(v44);
          }
LABEL_102:
          ThreadUnlock1(v26, v23, v24);
          goto LABEL_103;
        }
      }
    }
  }
LABEL_106:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v110, v5, v6, v7);
  return v4;
}
