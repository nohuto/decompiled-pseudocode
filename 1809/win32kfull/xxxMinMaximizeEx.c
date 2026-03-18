/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00B7604
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00B81EC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMinMaximize @ 0x1C00B937C (xxxMinMaximize.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01C3538 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9430 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C021A680 (NtUserMinMaximize.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0071F34 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C007210C (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B83EC (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00B8488 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C00B8C08 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00B8C70 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00B9454 (DwmSyncNotifyMinimizing.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ClrFTrueVis @ 0x1C00F73B8 (ClrFTrueVis.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxFlushPalette @ 0x1C0209C00 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C022426C (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(
        struct tagWND *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        _OWORD *a5,
        unsigned __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  _OWORD *Prop; // rax
  _OWORD *v16; // rsi
  __int64 v17; // rdx
  __int128 v18; // xmm7
  __int128 v19; // xmm6
  unsigned __int64 *v20; // rax
  int v21; // edx
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r14d
  __int64 i; // rcx
  __int64 v28; // rcx
  char v29; // dl
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rcx
  int v33; // r15d
  char v34; // dl
  unsigned int v35; // r12d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v38; // esi
  int v39; // eax
  __int64 v40; // rdx
  void *v41; // rsi
  __int64 v42; // r8
  __int64 *v43; // r8
  __int64 v44; // rdx
  unsigned __int8 v45; // cl
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 v49; // dl
  struct tagMONITOR *v50; // rcx
  int v51; // edi
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v61; // r10
  __int64 v62; // rdi
  unsigned __int64 v63; // xmm0_8
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void *v67; // r14
  char v68; // r9
  __int64 v69; // r10
  int v70; // r11d
  int v71; // edx
  int v72; // eax
  char v73; // cl
  unsigned __int16 v74; // r8
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // ecx
  int v82; // eax
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  int v86; // esi
  __int64 v87; // rsi
  char v88; // cl
  __int64 v89; // rax
  __int64 v90; // rcx
  __int128 v91; // xmm6
  __int64 v92; // rcx
  int v93; // edx
  struct tagWND *v94; // rcx
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rdx
  BOOL v99; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+54h] [rbp-ACh]
  char v101; // [rsp+5Ch] [rbp-A4h]
  __int128 v102; // [rsp+60h] [rbp-A0h]
  int v103; // [rsp+74h] [rbp-8Ch]
  BOOL v104; // [rsp+7Ch] [rbp-84h]
  int v105; // [rsp+80h] [rbp-80h]
  int v106; // [rsp+84h] [rbp-7Ch]
  int v107; // [rsp+88h] [rbp-78h]
  int v108; // [rsp+8Ch] [rbp-74h]
  int v109; // [rsp+90h] [rbp-70h]
  int v110; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v111; // [rsp+98h] [rbp-68h]
  _QWORD v112[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v113[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v114; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v115; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v116; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v117[5]; // [rsp+110h] [rbp+10h] BYREF

  v111 = a6;
  v101 = a3;
  v8 = a2;
  *(_QWORD *)&v115.left = a4;
  v102 = 0uLL;
  v107 = 0;
  v106 = 0;
  v104 = 0;
  v103 = 0;
  v108 = 0;
  v99 = 0;
  memset(v117, 0, sizeof(v117));
  v9 = *((_QWORD *)a1 + 10);
  v10 = a3 & 0x20;
  v105 = 0;
  v11 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL);
  v109 = 1;
  v100 = v11 & 1;
  v110 = (v11 >> 5) & 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(*((struct tagTHREADINFO **)a1 + 2), 0, v8, a3 & 0xFFFDFFFF, 0LL);
    return 0LL;
  }
  v12 = ((a3 & 0x80) << 14) | 0x10;
  if ( (a3 & 0x40) == 0 )
    v12 = (a3 & 0x80) << 14;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13 | 0x80000;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v101 = a3;
    v109 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v55 = (void *)ReferenceDwmApiPort(v54, v53);
        DwmAsyncNotifyAnimationChange(v55);
      }
    }
  }
  GetRect((__int64)a1, (__int64)&v116, 66);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  else
    Prop = CkptRestore((__int64)a1, &v116);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v101 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v71 = *(_DWORD *)(v17 + 96);
      v72 = v71 - DWORD2(v116);
      DWORD2(v116) = v71 - v116;
      LODWORD(v116) = v72;
      v105 = 1;
    }
    v18 = *v16;
    v19 = v10 ? *a5 : v16[1];
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1, *(_QWORD *)a1, v8, 5) )
    {
      if ( (_DWORD)v8 == 204 )
      {
        v14 |= 0x14u;
        LODWORD(v8) = ((v16[3] & 4) != 0) + 1;
      }
      if ( (_DWORD)v8 != 3 && (_DWORD)v8 != 1 )
      {
        if ( (_DWORD)v8 == 2 )
          goto LABEL_32;
        if ( (_DWORD)v8 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v8 <= 5 )
            goto LABEL_134;
          if ( (unsigned int)v8 <= 7 )
          {
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
              v14 |= 0x10u;
            v20 = (unsigned __int64 *)CalcMinZOrder(a1);
            if ( v20 )
            {
              if ( !a6 )
                v111 = *v20;
            }
            else
            {
              v14 |= 4u;
            }
LABEL_32:
            v21 = 1;
            v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v22 & 0x20) != 0 )
            {
              if ( (v22 & 0x10) != 0 )
                goto LABEL_81;
              v26 = 0;
              v14 |= 0x17u;
              v38 = 0;
              v35 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
              {
                v67 = (void *)ReferenceDwmApiPort(v24, v23);
                if ( v67 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v64 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v64, gdwInAtomicOperation, v65, v66);
                  DwmSyncNotifyMinimizing(v67);
                  EnterCrit(0LL, 1LL);
                }
              }
              v25 = *((_DWORD *)v16 + 12);
              v26 = 2;
              if ( (v25 & 1) == 0 )
              {
                v25 &= ~0x20u;
                *((_DWORD *)v16 + 12) = v25;
              }
              if ( (v25 & 0x20) == 0 )
              {
                ParkIcon(a1, v16 + 2);
                *((_DWORD *)v16 + 12) |= 0x20u;
              }
              *(_QWORD *)&v102 = *((_QWORD *)v16 + 4);
              DWORD2(v102) = *(_DWORD *)(gpsi + 2124LL) + v102;
              HIDWORD(v102) = DWORD1(v102) + *(_DWORD *)(gpsi + 2128LL);
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL); i; i = *(_QWORD *)(i + 80) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  v112[0] = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = v112;
                  v112[1] = i;
                  _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v76 = *((_QWORD *)a1 + 10);
                    v113[0] = *(_QWORD *)(gptiCurrent + 416LL);
                    *(_QWORD *)(gptiCurrent + 416LL) = v113;
                    v113[1] = v76;
                    if ( v76 )
                      _InterlockedAdd((volatile signed __int32 *)(v76 + 8), 1u);
                    xxxSetFocus(*((struct tagWND **)a1 + 10));
                    ThreadUnlock1(v78, v77);
                  }
                  else
                  {
                    xxxSetFocus(0LL);
                  }
                  ThreadUnlock1(v80, v79);
                  break;
                }
              }
              v28 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v28 + 31) & 1) != 0 )
              {
                v81 = *((_DWORD *)v16 + 12) | 2;
                v103 = 1;
                *((_DWORD *)v16 + 12) = v81;
                v31 = v81 & 0xFFFFFFE7;
              }
              else
              {
                v29 = *(_BYTE *)(v28 + 233);
                v30 = v16[3] & 0xFFFFFFFD;
                *((_DWORD *)v16 + 12) = v30;
                if ( (v29 & 3) == 3 )
                {
                  v31 = v30 | 0x18;
                }
                else if ( (v29 & 1) != 0 )
                {
                  v31 = v30 & 0xFFFFFFE7 | 8;
                }
                else if ( (v29 & 2) != 0 )
                {
                  v31 = v30 & 0xFFFFFFE7 | 0x10;
                }
                else
                {
                  v31 = v30 & 0xFFFFFFE7;
                }
              }
              *((_DWORD *)v16 + 12) = v31;
              v32 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v32 + 21) & 2) != 0 )
              {
                v33 = 0;
              }
              else
              {
                v82 = IsTrayWindow(a1);
                v32 = *((_QWORD *)a1 + 5);
                v33 = v82;
                v99 = v82;
              }
              v34 = *(_BYTE *)(v32 + 31);
              if ( (v34 & 0x20) != 0 )
              {
                if ( (v34 & 0x10) != 0 )
                  goto LABEL_81;
                v38 = v99;
                v14 |= 0x17u;
                v21 = 1;
                v102 = 0uLL;
                v35 = 0;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
                v35 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v99 = v33 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 11); j; j = *(_QWORD *)(j + 64) )
                  ClrFTrueVis(j);
                v14 |= 0x8120u;
                DesktopWindow = GetDesktopWindow((__int64)a1);
                v38 = v99;
                v21 = 1;
                if ( *((_QWORD *)a1 + 10) == DesktopWindow )
                  v108 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_54:
            if ( (v101 & 1) != 0 )
              goto LABEL_57;
            v39 = v14 | 0x40;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
            {
              v14 |= 0x40u;
LABEL_57:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v38 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v95 = *(_QWORD *)a1;
                if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                  PostShellHookMessages(1uLL, v95);
              }
              v41 = InternalBeginDeferWindowPos(1u);
              if ( v41 )
              {
                if ( v111 )
                {
                  LOBYTE(v40) = 1;
                  v43 = (__int64 *)HMValidateHandleNoSecure(v111, v40);
                }
                else
                {
                  v43 = 0LL;
                }
                v42 = _DeferWindowPos(
                        (__int64)v41,
                        a1,
                        v43,
                        v102,
                        SDWORD1(v102),
                        DWORD2(v102) - (int)v102,
                        HIDWORD(v102) - DWORD1(v102),
                        v14,
                        0);
                if ( v42 )
                {
                  if ( v103 && *(_DWORD *)*gpDispInfo > 1u )
                  {
                    v96 = *((_QWORD *)a1 + 5);
                    if ( (*(_BYTE *)(v96 + 31) & 1) != 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v42 + 40) + 112LL) = 2LL;
                    }
                    else if ( (*(_BYTE *)(v96 + 21) & 8) != 0 )
                    {
                      *(_QWORD *)(*(_QWORD *)(v42 + 40) + 112LL) = 1LL;
                    }
                  }
                  xxxEndDeferWindowPosEx((struct tagSMWP *)v42, 0);
                  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
                    xxxRestoreWindowFromDeferredStateIfNeeded(a1);
                }
              }
              if ( v35 )
                xxxWindowEvent(v35, (__int64)a1, 0, 0, 1u);
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
              v44 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v44 + 31) & 1) != 0 )
              {
                v59 = ValidateHmonitorNoRip(*(_QWORD *)(v44 + 256));
                MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v114, v59, a1);
                v61 = *((_QWORD *)a1 + 5);
                v44 = v61;
                v62 = *(_QWORD *)(v61 + 88);
                v42 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
                v63 = _mm_srli_si128(*(__m128i *)(v61 + 88), 8).m128i_u64[0];
                if ( (int)v63 - (int)v62 < (int)(v42 - MonitorWorkRectForWindow->m128i_i64[0]) )
                {
                  v42 = (unsigned int)(HIDWORD(v42) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                  if ( HIDWORD(v63) - HIDWORD(v62) < (int)v42 )
                  {
                    *(_DWORD *)(v61 + 232) |= 0x40000000u;
                    v44 = *((_QWORD *)a1 + 5);
                  }
                }
              }
              if ( (_DWORD)v8 == 2
                && (*(_BYTE *)(v44 + 21) & 2) == 0
                && (*(_BYTE *)(v44 + 31) & 0x10) != 0
                && (*(_BYTE *)(v44 + 30) & 0x40) != 0 )
              {
                if ( *(_QWORD *)(*((_QWORD *)a1 + 14) + 80LL) )
                {
                  v97 = 1LL;
                  v98 = 38LL;
                }
                else
                {
                  v97 = 0LL;
                  v98 = 15LL;
                }
                PostMessage(a1, v98, v97, 0LL);
              }
              if ( v106 )
                xxxShowOwnedWindows(a1, 3LL, 0LL);
              if ( (_DWORD)v8 == 6
                && *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1)
                && !(unsigned int)xxxActivateOnMinimize(a1) )
              {
                xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
              }
              if ( v107 )
                xxxSetFocus(a1);
              if ( v104 )
                xxxSendMessage((ULONG_PTR)a1);
              if ( v108 )
                xxxFlushPalette(a1, v44, v42);
              v45 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
              if ( v100 != (v45 & 1) || v110 != ((v45 >> 5) & 1) )
                PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 40LL, *(_QWORD *)a1);
              goto LABEL_81;
            }
            if ( !v21 )
              v39 = v14;
            v14 = v39;
            if ( !(unsigned int)IsVisible((__int64)a1)
              || (v70 & 0x10000) == 0
              || !v26
              || (v68 & 0x40) != 0 && (*(_BYTE *)(v69 + 23) & 0x10) != 0 )
            {
              goto LABEL_57;
            }
            if ( v105 )
            {
              v91 = v102;
              v92 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL);
              v93 = *(_DWORD *)(v92 + 96) - v102;
              LODWORD(v102) = *(_DWORD *)(v92 + 96) - DWORD2(v102);
              DWORD2(v102) = v93;
            }
            else
            {
              v91 = 0uLL;
            }
            if ( v26 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v94 = a1;
            }
            else
            {
              *(_QWORD *)&v115.left = 0LL;
              *(_QWORD *)&v115.right = 0LL;
              xxxSendMinRectMessages(a1, &v115);
              if ( IsRectEmptyInl(&v115) )
                goto LABEL_219;
              v94 = a1;
            }
            xxxDrawAnimatedRects(v94);
LABEL_219:
            if ( v105 )
              v102 = v91;
            goto LABEL_57;
          }
          if ( (_DWORD)v8 != 9 )
          {
LABEL_134:
            v26 = 0;
            v21 = 0;
            v35 = 0;
            v38 = 0;
            goto LABEL_54;
          }
        }
        v73 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v73 & 0x20) != 0 || (v73 & 1) != 0 && v10 )
        {
          v75 = *((_DWORD *)v16 + 12);
          if ( (v75 & 2) != 0 )
          {
            LODWORD(v8) = 3;
            goto LABEL_83;
          }
          if ( (v75 & 0x18) == 0x18 )
          {
            LODWORD(v8) = 12;
            goto LABEL_83;
          }
          if ( (v75 & 8) != 0 )
          {
            LODWORD(v8) = 14;
            goto LABEL_83;
          }
          if ( (v75 & 0x10) != 0 )
          {
            LODWORD(v8) = 13;
            goto LABEL_83;
          }
          LODWORD(v8) = 1;
          SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
          v74 = -9982;
        }
        else
        {
          LODWORD(v8) = 1;
          SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
          SetOrClrWF(0, (__int64)a1, 0xD902u, 1);
          v74 = -9600;
        }
        SetOrClrWF(0, (__int64)a1, v74, 1);
      }
LABEL_83:
      v47 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v8 == 3 )
      {
        v48 = ValidateHmonitorNoRip(*(_QWORD *)(v47 + 256));
        v49 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        v50 = *(struct tagMONITOR **)&v115.left;
        if ( (v49 & 1) != 0 && (!*(_QWORD *)&v115.left || v48 == *(_QWORD *)&v115.left) )
        {
          if ( (((v101 & 2) == 0) & (v49 >> 4)) != 0 )
            goto LABEL_81;
          v50 = *(struct tagMONITOR **)&v115.left;
        }
        v103 = 1;
        v51 = v14 | (16 * ((v101 & 1) + 2048));
        if ( (v49 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v117, v50, 0);
      }
      else
      {
        v83 = v14 | 0x8000;
        if ( (*(_BYTE *)(v47 + 31) & 0x21) == 0 )
          v83 = v14;
        v51 = v83;
        if ( (*(_BYTE *)(v47 + 31) & 1) != 0 )
          v103 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage((ULONG_PTR)a1) )
          goto LABEL_81;
        v106 = 1;
        v26 = 1;
        if ( (v51 & 0x10) == 0 )
        {
          v107 = 1;
          v104 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v51 |= 0x100u;
      }
      else
      {
        v26 = 3;
      }
      if ( (_DWORD)v8 == 3 )
      {
        *(_QWORD *)&v102 = v117[2];
        DWORD2(v102) = LODWORD(v117[1]) + LODWORD(v117[2]);
        HIDWORD(v102) = HIDWORD(v117[2]) + HIDWORD(v117[1]);
        SetOrClrWF(1, (__int64)a1, 0xF01u, 1);
        SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
        SetOrClrWF(0, (__int64)a1, 0xD902u, 1);
        SetOrClrWF(0, (__int64)a1, 0xDA80u, 1);
        if ( (v101 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
        goto LABEL_94;
      }
      if ( (_DWORD)v8 == 12 )
      {
        v102 = v19;
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
        v84 = 1;
      }
      else
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
        if ( (_DWORD)v8 == 14 )
        {
          v102 = v19;
          SetOrClrWF(1, (__int64)a1, 0xD901u, 1);
          v85 = 0;
LABEL_187:
          SetOrClrWF(v85, (__int64)a1, 0xD902u, 1);
          v51 |= 0x100000u;
LABEL_94:
          v52 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v52 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v52 + 21) & 2) != 0 )
              v86 = 0;
            else
              v86 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v35 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v86 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v87 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2uLL, v87);
            }
            v88 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v88 & 0xC0) != 0x40 && (v88 & 0x10) != 0 )
            {
              v89 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v89 + 896) == 1 )
              {
                v90 = *(_QWORD *)(v89 + 432);
                if ( v90 != gpqForeground
                  && ((v51 & 0x10) == 0 || *(struct tagWND **)(v90 + 120) == a1)
                  && (unsigned int)CanSetForegroundWindow(a1) != 1 )
                {
                  xxxSetForegroundWindow2(a1, *((struct tagTHREADINFO **)a1 + 2), 1u);
                }
              }
            }
          }
          else
          {
            v35 = 0;
          }
          v14 = v51 | 0x20;
          v38 = 0;
          v21 = 0;
          goto LABEL_54;
        }
        if ( (_DWORD)v8 != 13 )
        {
          v102 = v18;
          goto LABEL_94;
        }
        v102 = v19;
        v84 = 0;
      }
      SetOrClrWF(v84, (__int64)a1, 0xD901u, 1);
      v85 = 1;
      goto LABEL_187;
    }
  }
LABEL_81:
  if ( !v109 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v58 = (void *)ReferenceDwmApiPort(v57, v56);
    DwmAsyncNotifyAnimationChange(v58);
  }
  return 0LL;
}
