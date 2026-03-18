/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C02250D0
 * Callers:
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0222DDC (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C003B1B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00CBB90 (xxxEnableChildWindowDpiMessageX.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C010FBC8 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C010FC54 (MNRefreshUAHCachedSizes.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     MNMarkDelayedFreePopup @ 0x1C02105EC (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C021FB04 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     LockPopupMenu @ 0x1C02226BC (LockPopupMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0239B8C (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r12d
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r14
  __int128 *v17; // rcx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v33; // bl
  __int64 *v34; // rax
  __int64 Window; // rsi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // rax
  _DWORD *v50; // rdx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int16 WindowDpiLastNotify; // dx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  int v65; // r15d
  int v66; // eax
  __int64 v67; // r8
  __int64 v68; // rdx
  _DWORD *v69; // r9
  int v70; // edx
  int v71; // ecx
  __int64 *v72; // rax
  __int64 *v73; // rdx
  __int64 v74; // rdx
  int v75; // r8d
  int v76; // ebx
  MenuHelpers *v77; // rcx
  int v78; // r14d
  unsigned int *v79; // rcx
  unsigned int v80; // eax
  __int64 *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  _QWORD *v102[2]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-68h]
  __int64 v105; // [rsp+B0h] [rbp-60h]
  int v106[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v107; // [rsp+C8h] [rbp-48h]
  int v108; // [rsp+CCh] [rbp-44h]
  __int64 v109; // [rsp+D0h] [rbp-40h]
  int v110[4]; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v111; // [rsp+E8h] [rbp-28h] BYREF
  _QWORD v112[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v113; // [rsp+110h] [rbp+0h] BYREF
  __int64 v114; // [rsp+118h] [rbp+8h] BYREF
  __int64 v115; // [rsp+120h] [rbp+10h] BYREF
  __int64 v116; // [rsp+128h] [rbp+18h]
  __int64 v117; // [rsp+130h] [rbp+20h]
  __int64 v118; // [rsp+138h] [rbp+28h] BYREF
  __int64 v119; // [rsp+140h] [rbp+30h]
  __int64 v120; // [rsp+148h] [rbp+38h]
  __int64 v121[2]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v122; // [rsp+160h] [rbp+50h]
  __int128 v123; // [rsp+170h] [rbp+60h]
  __int128 v124; // [rsp+180h] [rbp+70h]
  __int128 v125; // [rsp+190h] [rbp+80h]
  __int128 v126; // [rsp+1A0h] [rbp+90h]
  __int64 v127; // [rsp+1B0h] [rbp+A0h]
  __int64 v128; // [rsp+1B8h] [rbp+A8h]
  __int128 v129; // [rsp+1E0h] [rbp+D0h]
  __int64 v130[3]; // [rsp+210h] [rbp+100h] BYREF
  _QWORD v131[3]; // [rsp+228h] [rbp+118h] BYREF
  __int128 v132; // [rsp+240h] [rbp+130h] BYREF
  __int128 v133; // [rsp+250h] [rbp+140h] BYREF
  __int128 v134; // [rsp+260h] [rbp+150h] BYREF
  int **v135[2]; // [rsp+270h] [rbp+160h] BYREF
  _OWORD v136[4]; // [rsp+280h] [rbp+170h] BYREF
  int v137; // [rsp+2D0h] [rbp+1C0h] BYREF
  int v138; // [rsp+2E0h] [rbp+1D0h]
  unsigned int v139; // [rsp+2E8h] [rbp+1D8h] BYREF

  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v102, 0LL);
  v138 = 0;
  v103 = 0LL;
  v7 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v8 = *a1;
  v109 = 0LL;
  if ( *(_DWORD *)(*v8 + 80) != -1 )
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
      v9 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v10 = v9;
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 16) )
        {
          v5 = **a1;
          if ( (*(_DWORD *)v5 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
          {
            v11 = *(_QWORD *)(**a1 + 8);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
            v103 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v103;
            v104 = v11;
            HMLockObject(v11);
            v109 = **(_QWORD **)(v10 + 16);
            xxxSendMessage(*(_QWORD *)(**a1 + 8));
            ThreadUnlock1(v14, v13, v15);
            v138 = 1;
          }
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
          {
            v4 = -1LL;
            goto LABEL_103;
          }
          v5 = **a1;
          if ( *(_DWORD *)(v5 + 80) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 40LL) + 44LL)
            || (v5 = **a1,
                v16 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL) + 96LL * *(int *)(v5 + 80)),
                v17 = (__int128 *)*v16,
                (*(_DWORD *)(*v16 + 4) & 3) != 0)
            || (v18 = v16[2]) == 0
            || !*(_DWORD *)(*(_QWORD *)(v18 + 40) + 44LL) )
          {
LABEL_103:
            if ( v138 && *(_QWORD *)(**a1 + 8) )
            {
              v96 = *(_QWORD *)(**a1 + 8);
              v97 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
              v103 = *(_QWORD *)(v97 + 408);
              *(_QWORD *)(v97 + 408) = &v103;
              v104 = v96;
              HMLockObject(v96);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v99, v98, v100);
            }
            goto LABEL_106;
          }
          v19 = v17[1];
          v126 = *v17;
          v20 = v17[4];
          v128 = *((_QWORD *)&v19 + 1);
          v129 = v20;
          v127 = v18;
          v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
          v115 = *(_QWORD *)(v21 + 408);
          *(_QWORD *)(v21 + 408) = &v115;
          v116 = v18;
          HMLockObject(v18);
          v24 = **a1;
          if ( *(_QWORD *)(v24 + 8) )
          {
            v25 = *(_QWORD *)(**a1 + 8);
            v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23);
            v103 = *(_QWORD *)(v26 + 408);
            *(_QWORD *)(v26 + 408) = &v103;
            v104 = v25;
            HMLockObject(v25);
            v28 = *(_DWORD **)(*(_QWORD *)(**a1 + 16) + 40LL);
            if ( (v28[72] & 0xF) == 2 )
            {
              v28 = *(_DWORD **)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL)) + 40);
              v7 = v28[7];
              v29 = v28[8];
            }
            else
            {
              v29 = 0;
            }
            v33 = 0;
            if ( PsGetCurrentProcessWin32Process(v28, v27) )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30);
              if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
                v33 = 1;
            }
            SmartObjStackRefBase<tagMENU>::Init(v130, 0LL);
            v34 = *a1;
            v130[2] = 0LL;
            Window = xxxCreateWindowEx(
                       385,
                       0x8000LL,
                       0x8000LL,
                       0LL,
                       -2139095040,
                       v7,
                       v29,
                       0x64u,
                       0x64u,
                       *(struct tagWND **)(**a1 + 8),
                       (__int64 **)v130,
                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v34 + 8) + 40LL) + 32LL),
                       0LL,
                       0,
                       0xA00u,
                       v33,
                       0LL);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v130, v36, v37);
            ThreadUnlock1(v39, v38, v40);
          }
          else
          {
            Window = 0LL;
          }
          if ( Window )
          {
            v42 = safe_cast_fnid_to_PMENUWND(Window);
            if ( v42 )
            {
              SetOrClrWF(0, Window, 0x408u, 1);
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v102, *(_QWORD *)(v42 + 8));
              if ( *v102[0] )
              {
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v121, *(_QWORD *)(**a1 + 64));
                MNMarkDelayedFreePopup(v102, v121);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v121, v43, v44);
                SetOrClrWF(
                  (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                  Window,
                  0xA40u,
                  1);
                v45 = *(_QWORD *)(**a1 + 8);
                *(_QWORD *)&v122 = *v102[0] + 8LL;
                *((_QWORD *)&v122 + 1) = v45;
                v132 = v122;
                HMAssignmentLock(&v132);
                SmartObjStackRefBase<tagMENU>::Init(v131, v127);
                v131[2] = 0LL;
                LockPopupMenu((__int64)v102, (__int64 *)(*v102[0] + 40LL), (__int64)v131);
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v131, v46, v47);
                v48 = *a1;
                *((_QWORD *)&v123 + 1) = Window;
                *(_QWORD *)&v123 = *v48 + 24;
                v133 = v123;
                HMAssignmentLock(&v133);
                *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                v49 = *(_QWORD *)(**a1 + 16);
                *(_QWORD *)&v124 = *v102[0] + 32LL;
                *((_QWORD *)&v124 + 1) = v49;
                v134 = v124;
                HMAssignmentLock(&v134);
                *(_QWORD *)(*v102[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                v50 = (_DWORD *)*v102[0];
                v51 = *(_DWORD *)**a1;
                v138 = 0;
                *v50 ^= ((unsigned __int8)v51 ^ (unsigned __int8)*v50) & 2;
                **(_DWORD **)v102[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v102[0]) & 4;
                **(_DWORD **)v102[0] ^= ((unsigned __int16)*(_DWORD *)**a1 ^ (unsigned __int16)**(_DWORD **)v102[0]) & 0x800;
                **(_DWORD **)v102[0] |= 0x200000u;
                **(_DWORD **)v102[0] ^= (**(_DWORD **)v102[0] ^ *(_DWORD *)**a1) & 0x400000;
                **(_DWORD **)v102[0] ^= (**(_DWORD **)v102[0] ^ *(_DWORD *)**a1) & 0x10;
                **(_DWORD **)v102[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v102[0]) & 0x7FFFFFFF;
                v52 = *(_QWORD *)(*(_QWORD *)(*v102[0] + 40LL) + 40LL);
                if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                  *(_DWORD *)(v52 + 40) |= 4u;
                else
                  *(_DWORD *)(v52 + 40) &= ~4u;
                **(_DWORD **)v102[0] &= ~0x1000u;
                if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*v102[0] + 40LL))
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v102[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                {
                  MNRefreshUAHCachedSizes(*(_QWORD **)(*v102[0] + 40LL));
                }
                v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54);
                v118 = *(_QWORD *)(v55 + 408);
                *(_QWORD *)(v55 + 408) = &v118;
                v119 = Window;
                HMLockObject(Window);
                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 812LL) & 0x100000) != 0
                  || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                  && ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x20000000) != 0
                   || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                   && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 232LL) & 0x10000000) != 0) )
                {
                  SmartObjStackRefBase<tagMENU>::Init(v112, *(_QWORD *)(*v102[0] + 40LL));
                  v56 = 0LL;
                  v112[2] = 0LL;
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v112[0] + 40LL) + 44LL) )
                  {
                    while ( 1 )
                    {
                      v57 = 96LL * (int)v56;
                      if ( (**(_DWORD **)(v57 + *(_QWORD *)(*(_QWORD *)v112[0] + 88LL)) & 0x100) != 0
                        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v112[0] + 88LL) + 96LL * (int)v56) + 96LL) == -1LL )
                      {
                        break;
                      }
                      v56 = (unsigned int)(v56 + 1);
                      if ( (unsigned int)v56 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v112[0] + 40LL) + 44LL) )
                        goto LABEL_52;
                    }
                  }
                  else
                  {
LABEL_52:
                    xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                  }
                  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v112, v56, v57);
                }
                v58 = *(_QWORD *)(Window + 40);
                if ( (*(_DWORD *)(v58 + 232) & 0x8000000) != 0 )
                {
                  WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
                }
                else if ( (*(_DWORD *)(v58 + 288) & 0xF) == 0
                       && (v60 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 448LL)) != 0
                       && (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) != 0 )
                {
                  WindowDpiLastNotify = 96;
                }
                else
                {
                  WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 416LL) + 284LL);
                }
                if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v102[0] + 40LL) + 76LL) )
                {
                  *(_WORD *)(*(_QWORD *)(*v102[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                  MNClearCachedPopupSizes(*(_QWORD *)(*v102[0] + 40LL));
                }
                if ( (unsigned int)xxxSendMessage(Window)
                  && (v62 = *a1, v61 = **a1, *(_QWORD *)(v61 + 40))
                  && (unsigned int)MNGetpItemIndex(*(_QWORD *)(**a1 + 40), (__int64)v16) != -1 )
                {
                  v65 = (unsigned __int16)v64 + 6;
                  *(_DWORD *)**a1 |= 0x20u;
                  v66 = xxxMNPositionHierarchy(
                          a1,
                          v16,
                          v65,
                          (unsigned int)HIWORD(v64) + 6,
                          &v137,
                          (LONG *)&v139,
                          (__int64)&v113);
                  v68 = *v102[0];
                  **(_DWORD **)v102[0] ^= (**(_DWORD **)v102[0] ^ (v66 << 23)) & 0xF800000;
                  if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL, v68, v67) & 0x8000u) != 0LL )
                  {
                    v69 = *(_DWORD **)(Window + 40);
                    v111 = 0uLL;
                    v70 = v69[23];
                    v110[2] = v69[24] + v137 - v69[22];
                    v71 = v139 - v70 + v69[25];
                    v110[0] = v137;
                    v110[3] = v71;
                    v110[1] = v139;
                    v72 = *a1;
                    v73 = *a1;
                    v106[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v129;
                    v74 = *v73;
                    v75 = DWORD1(v129) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v72 + 16) + 40LL) + 92LL);
                    v107 = DWORD2(v129) + v106[0];
                    v106[1] = v75;
                    v108 = v75 + HIDWORD(v129);
                    SmartObjStackRefBase<tagPOPUPMENU>::Init(v135, v74);
                    MNGetPopupBoundsRect(v135, v113, &v111, 0);
                    if ( (unsigned int)IntersectRect(v110, v110, v106) )
                    {
                      v76 = v65 + v129 + DWORD2(v129) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                      if ( v76 > SDWORD2(v111) )
                        v76 = 0;
                      v77 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 16) + 40LL);
                      v78 = v129 + *((_DWORD *)v77 + 22) - v65;
                      if ( v78 < (int)v111 )
                        v78 = 0;
                      if ( (MenuHelpers::GetMenuRightAlignHint(v77) || (v126 & 0x2000) != 0) && v78 || !v76 )
                      {
                        v137 = v129 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v65;
                        v79 = (unsigned int *)*v102[0];
                        v80 = **(_DWORD **)v102[0] & 0xF07FFFFF | 0x1000000;
                      }
                      else
                      {
                        v137 = v129 + DWORD2(v129) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                        v79 = (unsigned int *)*v102[0];
                        v80 = **(_DWORD **)v102[0] & 0xF07FFFFF | 0x800000;
                      }
                      *v79 = v80;
                      if ( v137 <= (int)v111 )
                      {
                        v137 = v107;
                        **(_DWORD **)v102[0] = **(_DWORD **)v102[0] & 0xF07FFFFF | 0x1000000;
                      }
                    }
                  }
                  if ( (*(_DWORD *)**a1 & 1) != 0 )
                  {
                    if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                      **(_DWORD **)v102[0] |= 0x8000000u;
                    if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v102[0] & 0xF800000) == 0x1000000 )
                      **(_DWORD **)v102[0] |= 0x10u;
                    *(_DWORD *)**a1 |= 0x400u;
                  }
                  else
                  {
                    **(_DWORD **)v102[0] |= 0x8000000u;
                    if ( (**(_DWORD **)v102[0] & 0xF800000) == 0x1000000 )
                      **(_DWORD **)v102[0] |= 0x10u;
                  }
                  v81 = *a1;
                  *((_QWORD *)&v125 + 1) = Window;
                  *(_QWORD *)&v125 = *(_QWORD *)(*v81 + 64) + 56LL;
                  v136[0] = v125;
                  HMAssignmentLock(v136);
                  if ( *(_QWORD *)(*v102[0] + 8LL) )
                  {
                    v85 = *(_QWORD *)(*v102[0] + 8LL);
                    v86 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v82, v83);
                    v103 = *(_QWORD *)(v86 + 408);
                    *(_QWORD *)(v86 + 408) = &v103;
                    v104 = v85;
                    HMLockObject(v85);
                    xxxInternalUpdateWindow(*(struct tagWND **)(*v102[0] + 8LL), 1u);
                    ThreadUnlock1(v88, v87, v89);
                  }
                  if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                  {
                    v114 = *(_QWORD *)Window;
                    xxxUserModeCallback(0x64u, (__int64)&v114, 8u, v84);
                  }
                  xxxPlayEventSound(5LL);
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v91, v90, v92) & 0xF) == 2 )
                    *(_DWORD *)(*(_QWORD *)(Window + 40) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL)
                                                                              + 288LL);
                  xxxSetWindowPos(
                    (struct tagWND *)Window,
                    ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                    (unsigned int)v137,
                    v139,
                    0,
                    0,
                    ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                  xxxInheritWindowMonitor((struct tagWND *)Window, *(__int64 **)(**a1 + 16), 1);
                  xxxWindowEvent(6u, (struct tagWND *)Window, 4294967292LL, 0, 0);
                  if ( *(_DWORD *)(a2 + 20) == 1 )
                    xxxSendMessage(Window);
                  xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                  v4 = Window;
                  ThreadUnlock1(v94, v93, v95);
                }
                else
                {
                  if ( ThreadUnlock1(v62, v61, v63) )
                    xxxDestroyWindow((__int64 *)Window);
                  HMAssignmentUnlock(**a1 + 24);
                }
                goto LABEL_102;
              }
              v41 = (__int64 *)Window;
            }
            xxxDestroyWindow(v41);
          }
LABEL_102:
          ThreadUnlock1(v24, v22, v23);
          goto LABEL_103;
        }
      }
    }
  }
LABEL_106:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v102, v5, v6);
  return v4;
}
