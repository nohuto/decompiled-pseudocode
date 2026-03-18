/*
 * XREFs of xxxMinMaximizeEx @ 0x1C0065CDC
 * Callers:
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0065C9C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C3FB4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C01F3090 (NtUserMinMaximize.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0034F94 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C0035160 (InternalBeginDeferWindowPos.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0056ED0 (DwmSyncNotifyMinimizing.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0066D1C (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0066D7C (DwmAsyncNotifyAnimationChange.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0066E74 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C0066FAC (ParkIcon.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C00F0FB4 (ClrFTrueVis.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxFlushPalette @ 0x1C01E3D30 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C01FB950 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(
        struct tagWND *a1,
        unsigned int a2,
        int a3,
        struct tagMONITOR *a4,
        _OWORD *a5,
        unsigned __int64 a6)
{
  __int64 v7; // rdi
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // r8d
  _OWORD *Prop; // rax
  _OWORD *v16; // rdi
  __int64 v17; // rdx
  __int128 v18; // xmm7
  __int128 v19; // xmm6
  unsigned int v20; // r14d
  unsigned __int64 *v21; // rax
  int v22; // edx
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r12d
  __int64 v29; // r8
  __int64 i; // rcx
  __int64 v31; // rcx
  char v32; // dl
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // rcx
  int v36; // r15d
  char v37; // dl
  unsigned int v38; // r13d
  __int64 j; // rdi
  __int64 DesktopWindow; // rax
  BOOL v41; // edi
  int v42; // eax
  __int64 v43; // rdx
  void *v44; // rdi
  unsigned __int64 v45; // r8
  __int64 *v46; // r8
  unsigned __int16 v47; // si
  __int64 v48; // rdx
  unsigned __int8 v49; // cl
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int8 v53; // dl
  int v54; // ecx
  int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  void *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  void *v64; // rax
  __int64 v65; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v67; // r10
  __int64 v68; // rdi
  unsigned __int64 v69; // xmm0_8
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  void *v73; // r14
  char v74; // r9
  __int64 v75; // r10
  int v76; // r11d
  int v77; // edx
  int v78; // eax
  char v79; // cl
  __int64 v80; // r8
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // edi
  __int64 v95; // rdi
  char v96; // cl
  __int64 v97; // rax
  __int64 v98; // rcx
  __int128 v99; // xmm6
  __int64 v100; // rcx
  int v101; // edx
  struct tagWND *v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rax
  struct tagRECT *v106; // rdi
  __int64 v107; // rax
  int v108; // ecx
  __int64 v109; // r8
  __int64 v110; // rdx
  BOOL v111; // [rsp+50h] [rbp-B0h]
  char v113; // [rsp+58h] [rbp-A8h]
  __int128 v114; // [rsp+60h] [rbp-A0h]
  unsigned int v115; // [rsp+70h] [rbp-90h]
  int v116; // [rsp+78h] [rbp-88h]
  BOOL v117; // [rsp+80h] [rbp-80h]
  int v118; // [rsp+88h] [rbp-78h]
  int v119; // [rsp+8Ch] [rbp-74h]
  int v120; // [rsp+90h] [rbp-70h]
  int v121; // [rsp+94h] [rbp-6Ch]
  int v122; // [rsp+98h] [rbp-68h]
  int v123; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h]
  _QWORD v125[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v126[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v127; // [rsp+F0h] [rbp-10h] BYREF
  int v128; // [rsp+100h] [rbp+0h] BYREF
  int v129; // [rsp+108h] [rbp+8h]
  struct tagRECT v130; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v131[5]; // [rsp+120h] [rbp+20h] BYREF

  v7 = a2;
  v124 = a6;
  v115 = a2;
  v114 = 0uLL;
  v120 = 0;
  v119 = 0;
  v117 = 0;
  v116 = 0;
  v121 = 0;
  v111 = 0;
  memset(v131, 0, sizeof(v131));
  v9 = *((_QWORD *)a1 + 10);
  v10 = a3 & 0x20;
  v118 = 0;
  v11 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL);
  v122 = 1;
  v113 = v11 & 1;
  v123 = (v11 >> 5) & 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
      0x17u,
      (__int64)a1,
      0,
      v7,
      a3 & 0xFFFDFFFF,
      0LL);
    return 0LL;
  }
  v12 = ((a3 & 0x80) << 14) | 0x10;
  if ( (a3 & 0x40) == 0 )
    v12 = (a3 & 0x80) << 14;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    LOBYTE(a3) = v14;
    v122 = v14 & 0x10000;
    if ( (v14 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v60 = (void *)ReferenceDwmApiPort(v58, v57, v59);
        DwmAsyncNotifyAnimationChange(v60);
      }
    }
  }
  GetRect((__int64)a1, &v128, 66);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
  else
    Prop = (_OWORD *)CkptRestore(a1, &v128);
  v16 = Prop;
  if ( !Prop )
    goto LABEL_80;
  if ( a5 && (a3 & 8) != 0 )
    *Prop = *a5;
  v17 = *(_QWORD *)(v9 + 40);
  if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    v77 = *(_DWORD *)(v17 + 96);
    v78 = v77 - v129;
    v129 = v77 - v128;
    v128 = v78;
    v118 = 1;
  }
  v18 = *v16;
  if ( v10 )
    v19 = *a5;
  else
    v19 = v16[1];
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0 )
  {
    v20 = v115;
    if ( (unsigned int)xxxCallHook(1, *(_QWORD *)a1, v115, 5) )
      goto LABEL_80;
  }
  else
  {
    v20 = v115;
  }
  if ( v20 == 204 )
  {
    v13 |= 0x14u;
    v20 = ((v16[3] & 4) != 0) + 1;
    v115 = v20;
  }
  switch ( v20 )
  {
    case 3u:
    case 1u:
      goto LABEL_82;
    case 2u:
      goto LABEL_31;
    case 4u:
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
        v13 |= 0x10u;
LABEL_141:
      v79 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v79 & 0x20) != 0 || (v79 & 1) != 0 && v10 )
      {
        v81 = *((_DWORD *)v16 + 12);
        if ( (v81 & 2) != 0 )
        {
          v20 = 3;
          goto LABEL_82;
        }
        if ( (v81 & 0x18) == 0x18 )
        {
          v20 = 12;
          goto LABEL_82;
        }
        if ( (v81 & 8) != 0 )
        {
          v20 = 14;
          goto LABEL_82;
        }
        if ( (v81 & 0x10) != 0 )
        {
          v20 = 13;
          goto LABEL_82;
        }
        v20 = 1;
        SetOrClrWF(0LL, a1, 55553LL, 1LL);
        v80 = 55554LL;
      }
      else
      {
        v20 = 1;
        SetOrClrWF(0LL, a1, 55553LL, 1LL);
        SetOrClrWF(0LL, a1, 55554LL, 1LL);
        v80 = 55936LL;
      }
      SetOrClrWF(0LL, a1, v80, 1LL);
LABEL_82:
      v51 = *((_QWORD *)a1 + 5);
      if ( v20 == 3 )
      {
        v52 = ValidateHmonitorNoRip(*(_QWORD *)(v51 + 256));
        v53 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v53 & 1) != 0 && (!a4 || (struct tagMONITOR *)v52 == a4) && (((a3 & 2) == 0) & (v53 >> 4)) != 0 )
          goto LABEL_80;
        v54 = v13 | 0x8000;
        v116 = 1;
        v55 = v13 | 0x8010;
        if ( (a3 & 1) == 0 )
          v55 = v54;
        if ( (v53 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v131, a4, 0);
      }
      else
      {
        v91 = v13 | 0x8000;
        if ( (*(_BYTE *)(v51 + 31) & 0x21) == 0 )
          v91 = v13;
        v55 = v91;
        if ( (*(_BYTE *)(v51 + 31) & 1) != 0 )
          v116 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage((ULONG_PTR)a1) )
          goto LABEL_80;
        v119 = 1;
        v28 = 1;
        if ( (v55 & 0x10) == 0 )
        {
          v120 = 1;
          v117 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v55 |= 0x100u;
      }
      else
      {
        v28 = 3;
      }
      if ( v20 == 3 )
      {
        *(_QWORD *)&v114 = v131[2];
        DWORD2(v114) = LODWORD(v131[1]) + LODWORD(v131[2]);
        HIDWORD(v114) = HIDWORD(v131[2]) + HIDWORD(v131[1]);
        SetOrClrWF(1LL, a1, 3841LL, 1LL);
        SetOrClrWF(0LL, a1, 55553LL, 1LL);
        SetOrClrWF(0LL, a1, 55554LL, 1LL);
        SetOrClrWF(0LL, a1, 55936LL, 1LL);
        if ( (a3 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
        goto LABEL_95;
      }
      if ( v20 == 12 )
      {
        v114 = v19;
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        v92 = 1LL;
      }
      else
      {
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        if ( v20 == 14 )
        {
          v114 = v19;
          SetOrClrWF(1LL, a1, 55553LL, 1LL);
          v93 = 0LL;
LABEL_191:
          SetOrClrWF(v93, a1, 55554LL, 1LL);
          v55 |= 0x100000u;
LABEL_95:
          v56 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v56 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v56 + 21) & 2) != 0 )
              v94 = 0;
            else
              v94 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v38 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v94 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v95 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2LL, v95);
            }
            v96 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v96 & 0xC0) != 0x40 && (v96 & 0x10) != 0 )
            {
              v97 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v97 + 888) == 1 )
              {
                v98 = *(_QWORD *)(v97 + 424);
                if ( v98 != gpqForeground && ((v55 & 0x10) == 0 || *(struct tagWND **)(v98 + 120) == a1) )
                {
                  CheckForegroundRight(a1);
                  xxxSetForegroundWindow2(a1, *((_QWORD *)a1 + 2), 1u, 0);
                }
              }
            }
          }
          else
          {
            v38 = 0;
          }
          v22 = 0;
          v13 = v55 | 0x20;
          v41 = 0;
LABEL_53:
          if ( (a3 & 1) != 0 )
            goto LABEL_56;
          v42 = v13 | 0x40;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
          {
            v13 |= 0x40u;
LABEL_56:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v41 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v103 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(1LL, v103);
            }
            v44 = InternalBeginDeferWindowPos(1u);
            if ( v44 )
            {
              if ( v124 )
              {
                LOBYTE(v43) = 1;
                v46 = (__int64 *)HMValidateHandleNoSecure(v124, v43);
              }
              else
              {
                v46 = 0LL;
              }
              v45 = _DeferWindowPos(
                      (__int64)v44,
                      a1,
                      v46,
                      v114,
                      SDWORD1(v114),
                      DWORD2(v114) - (int)v114,
                      HIDWORD(v114) - DWORD1(v114),
                      v13,
                      0);
              if ( v45 )
              {
                if ( v116 && *(_DWORD *)*gpDispInfo > 1u )
                {
                  v104 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v104 + 31) & 1) != 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v45 + 40) + 112LL) = 2LL;
                  }
                  else if ( (*(_BYTE *)(v104 + 21) & 8) != 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v45 + 40) + 112LL) = 1LL;
                  }
                }
                xxxEndDeferWindowPosEx((struct tagSMWP *)v45, 0);
                if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
                {
                  v47 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
                  if ( v47 )
                  {
                    SetDeferredDpiStateForWindowAndChildren(a1, 0LL);
                    v105 = *((_QWORD *)a1 + 5);
                    if ( v47 == *(_WORD *)(v105 + 284) )
                    {
                      *(_DWORD *)(v105 + 232) &= ~0x4000000u;
                    }
                    else
                    {
                      v106 = 0LL;
                      v107 = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
                      if ( v107 )
                      {
                        v108 = *(_DWORD *)(v107 + 48);
                        if ( (v108 & 0x80u) != 0 )
                        {
                          v106 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
                          *(_DWORD *)(v107 + 48) = v108 & 0xFFFFFF7F;
                        }
                      }
                      xxxNotifyMonitorChanged(a1, v106, 0LL, v47);
                    }
                  }
                }
              }
            }
            if ( v38 )
              xxxWindowEvent(v38, (__int64)a1, 0, 0, 1);
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
            v48 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v48 + 31) & 1) != 0 )
            {
              v65 = ValidateHmonitorNoRip(*(_QWORD *)(v48 + 256));
              MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v127, v65, a1);
              v67 = *((_QWORD *)a1 + 5);
              v48 = v67;
              v68 = *(_QWORD *)(v67 + 88);
              v45 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
              v69 = _mm_srli_si128(*(__m128i *)(v67 + 88), 8).m128i_u64[0];
              if ( (int)v69 - (int)v68 < (int)(v45 - MonitorWorkRectForWindow->m128i_i64[0]) )
              {
                v45 = (unsigned int)(HIDWORD(v45) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                if ( HIDWORD(v69) - HIDWORD(v68) < (int)v45 )
                {
                  *(_DWORD *)(v67 + 232) |= 0x40000000u;
                  v48 = *((_QWORD *)a1 + 5);
                }
              }
            }
            if ( v20 == 2
              && (*(_BYTE *)(v48 + 21) & 2) == 0
              && (*(_BYTE *)(v48 + 31) & 0x10) != 0
              && (*(_BYTE *)(v48 + 30) & 0x40) != 0 )
            {
              if ( *(_QWORD *)(*((_QWORD *)a1 + 14) + 80LL) )
              {
                v109 = 1LL;
                v110 = 38LL;
              }
              else
              {
                v109 = 0LL;
                v110 = 15LL;
              }
              PostMessage(a1, v110, v109, 0LL);
            }
            if ( v119 )
              xxxShowOwnedWindows(a1, 3LL, 0LL);
            if ( v20 == 6
              && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1)
              && !(unsigned int)xxxActivateOnMinimize(a1) )
            {
              xxxActivateWindow(a1);
            }
            if ( v120 )
              xxxSetFocus(a1, 0LL, v45);
            if ( v117 )
              xxxSendMessage((ULONG_PTR)a1);
            if ( v121 )
              xxxFlushPalette(a1, v48, v45);
            v49 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( v113 != (v49 & 1) || v123 != ((v49 >> 5) & 1) )
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 40LL, *(_QWORD *)a1);
            goto LABEL_80;
          }
          if ( !v22 )
            v42 = v13;
          v13 = v42;
          if ( !(unsigned int)IsVisible((__int64)a1)
            || (v76 & 0x10000) == 0
            || !v28
            || (v74 & 0x40) != 0 && (*(_BYTE *)(v75 + 23) & 0x10) != 0 )
          {
            goto LABEL_56;
          }
          if ( v118 )
          {
            v99 = v114;
            v100 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL);
            v101 = *(_DWORD *)(v100 + 96) - v114;
            LODWORD(v114) = *(_DWORD *)(v100 + 96) - DWORD2(v114);
            DWORD2(v114) = v101;
          }
          else
          {
            v99 = 0uLL;
          }
          if ( v28 == 3 || !(unsigned int)IsTrayWindow(a1) )
          {
            v102 = a1;
          }
          else
          {
            *(_QWORD *)&v130.left = 0LL;
            *(_QWORD *)&v130.right = 0LL;
            xxxSendMinRectMessages(a1, &v130);
            if ( (unsigned int)IsRectEmptyInl(&v130) )
              goto LABEL_222;
            v102 = a1;
          }
          xxxDrawAnimatedRects(v102);
LABEL_222:
          if ( v118 )
            v114 = v99;
          goto LABEL_56;
        }
        if ( v20 != 13 )
        {
          v114 = v18;
          goto LABEL_95;
        }
        v114 = v19;
        v92 = 0LL;
      }
      SetOrClrWF(v92, a1, 55553LL, 1LL);
      v93 = 1LL;
      goto LABEL_191;
  }
  if ( v20 <= 5 )
  {
LABEL_137:
    v28 = 0;
    v22 = 0;
    v38 = 0;
    v41 = 0;
    goto LABEL_53;
  }
  if ( v20 > 7 )
  {
    if ( v20 != 9 )
      goto LABEL_137;
    goto LABEL_141;
  }
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    v13 |= 0x10u;
  v21 = (unsigned __int64 *)CalcMinZOrder(a1);
  if ( v21 )
  {
    if ( !a6 )
      v124 = *v21;
  }
  else
  {
    v13 |= 4u;
  }
LABEL_31:
  v22 = 1;
  v23 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v23 & 0x20) != 0 )
  {
    if ( (v23 & 0x10) == 0 )
    {
      v28 = 0;
      v13 |= 0x17u;
      v41 = 0;
      v38 = 0;
      goto LABEL_53;
    }
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    {
      v73 = (void *)ReferenceDwmApiPort(v25, v24, v26);
      if ( v73 )
      {
        if ( gdwInAtomicOperation )
        {
          v70 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v70, gdwInAtomicOperation, v71, v72);
        DwmSyncNotifyMinimizing(v73, *(_QWORD *)a1);
        EnterCrit(0LL, 1LL);
      }
      v20 = v115;
    }
    v27 = *((_DWORD *)v16 + 12);
    v28 = 2;
    if ( (v27 & 1) == 0 )
    {
      v27 &= ~0x20u;
      *((_DWORD *)v16 + 12) = v27;
    }
    if ( (v27 & 0x20) == 0 )
    {
      ParkIcon(a1, v16 + 2);
      *((_DWORD *)v16 + 12) |= 0x20u;
    }
    *(_QWORD *)&v114 = *((_QWORD *)v16 + 4);
    DWORD2(v114) = *(_DWORD *)(gpsi + 2124LL) + v114;
    HIDWORD(v114) = DWORD1(v114) + *(_DWORD *)(gpsi + 2128LL);
    xxxShowOwnedWindows(a1, 1LL, 0LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL); i; i = *(_QWORD *)(i + 80) )
    {
      if ( (struct tagWND *)i == a1 )
      {
        v125[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v125;
        v125[1] = i;
        _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v82 = *((_QWORD *)a1 + 10);
          v126[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v126;
          v126[1] = v82;
          if ( v82 )
            _InterlockedAdd((volatile signed __int32 *)(v82 + 8), 1u);
          xxxSetFocus(*((struct tagWND **)a1 + 10), 0LL, v29);
          ThreadUnlock1(v84, v83, v85);
        }
        else
        {
          xxxSetFocus(0LL, 0LL, v29);
        }
        ThreadUnlock1(v87, v86, v88);
        break;
      }
    }
    v31 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v31 + 31) & 1) != 0 )
    {
      v89 = *((_DWORD *)v16 + 12) | 2;
      v116 = 1;
      *((_DWORD *)v16 + 12) = v89;
      v34 = v89 & 0xFFFFFFE7;
    }
    else
    {
      v32 = *(_BYTE *)(v31 + 233);
      v33 = v16[3] & 0xFFFFFFFD;
      *((_DWORD *)v16 + 12) = v33;
      if ( (v32 & 3) == 3 )
      {
        v34 = v33 | 0x18;
      }
      else if ( (v32 & 1) != 0 )
      {
        v34 = v33 & 0xFFFFFFE7 | 8;
      }
      else if ( (v32 & 2) != 0 )
      {
        v34 = v33 & 0xFFFFFFE7 | 0x10;
      }
      else
      {
        v34 = v33 & 0xFFFFFFE7;
      }
    }
    *((_DWORD *)v16 + 12) = v34;
    v35 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v35 + 21) & 2) != 0 )
    {
      v36 = 0;
    }
    else
    {
      v90 = IsTrayWindow(a1);
      v35 = *((_QWORD *)a1 + 5);
      v36 = v90;
      v111 = v90;
    }
    v37 = *(_BYTE *)(v35 + 31);
    if ( (v37 & 0x20) == 0 )
    {
      SetMinimize(a1, 1LL);
      SetOrClrWF(0LL, a1, 3841LL, 1LL);
      v38 = 22;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        v111 = v36 != IsTrayWindow(a1);
      for ( j = *((_QWORD *)a1 + 11); j; j = *(_QWORD *)(j + 64) )
        ClrFTrueVis(j);
      v13 |= 0x8120u;
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v41 = v111;
      v22 = 1;
      if ( *((_QWORD *)a1 + 10) == DesktopWindow )
        v121 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
      goto LABEL_53;
    }
    if ( (v37 & 0x10) == 0 )
    {
      v41 = v111;
      v13 |= 0x17u;
      v22 = 1;
      v114 = 0uLL;
      v38 = 0;
      goto LABEL_53;
    }
  }
LABEL_80:
  if ( !v122 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v64 = (void *)ReferenceDwmApiPort(v62, v61, v63);
    DwmAsyncNotifyAnimationChange(v64);
  }
  return 0LL;
}
