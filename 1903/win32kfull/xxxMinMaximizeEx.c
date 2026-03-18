/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00841D4
 * Callers:
 *     xxxMinMaximize @ 0x1C0084170 (xxxMinMaximize.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0084194 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D680C (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEE04 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C0232610 (NtUserMinMaximize.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0084ADC (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0084B2C (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0084BC8 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C0084DD8 (ParkIcon.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0084FC4 (DwmSyncNotifyMinimizing.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     IsThreadDesktopComposed @ 0x1C00C94A0 (IsThreadDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     InternalBeginDeferWindowPos @ 0x1C00CAE84 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C00CAF18 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ClrFTrueVis @ 0x1C0114A74 (ClrFTrueVis.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxFlushPalette @ 0x1C0221690 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023C6E0 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(
        struct tagWND *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        struct tagRECT *a5,
        __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  struct tagRECT *Prop; // rax
  struct tagRECT *v16; // r14
  __int64 v17; // rdx
  struct tagRECT v18; // xmm7
  struct tagRECT v19; // xmm6
  struct tagWND *v20; // rax
  __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  LONG left; // eax
  int v27; // r12d
  __int64 i; // rcx
  __int64 v29; // rcx
  char v30; // dl
  unsigned int v31; // ecx
  __int64 v32; // rcx
  int v33; // r14d
  char v34; // dl
  unsigned int v35; // r15d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v38; // esi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // rdx
  unsigned __int8 v45; // cl
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 v49; // dl
  int v50; // edi
  __int64 v51; // rcx
  __int64 v52; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v54; // r10
  __int64 v55; // rdi
  unsigned __int64 v56; // xmm0_8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  void *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  void *v64; // rax
  __int64 v65; // rcx
  void *v66; // rsi
  char v67; // r9
  __int64 v68; // r10
  int v69; // r11d
  int v70; // edx
  int v71; // eax
  char v72; // cl
  unsigned __int16 v73; // r8
  LONG v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // esi
  __int64 v89; // rsi
  char v90; // cl
  __int64 v91; // rax
  __int64 v92; // rcx
  struct tagRECT v93; // xmm6
  __int64 v94; // rcx
  LONG v95; // edx
  struct tagWND *v96; // rcx
  __int64 v97; // rsi
  __int64 v98; // rdx
  int v99; // r8d
  int v100; // edx
  BOOL v101; // [rsp+58h] [rbp-B0h]
  char v102; // [rsp+5Ch] [rbp-ACh]
  char v103; // [rsp+64h] [rbp-A4h]
  struct tagRECT v104; // [rsp+68h] [rbp-A0h]
  int v105; // [rsp+7Ch] [rbp-8Ch]
  BOOL v106; // [rsp+84h] [rbp-84h]
  int v107; // [rsp+88h] [rbp-80h]
  int v108; // [rsp+8Ch] [rbp-7Ch]
  int v109; // [rsp+90h] [rbp-78h]
  int v110; // [rsp+94h] [rbp-74h]
  int v111; // [rsp+98h] [rbp-70h]
  int v112; // [rsp+9Ch] [rbp-6Ch]
  __int64 v113; // [rsp+A0h] [rbp-68h]
  __int64 v114; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v115; // [rsp+B0h] [rbp-58h]
  __int64 v116; // [rsp+B8h] [rbp-50h]
  __int64 v117; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v118; // [rsp+C8h] [rbp-40h]
  __int64 v119; // [rsp+D0h] [rbp-38h]
  struct tagRECT v120; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v122; // [rsp+F0h] [rbp-18h]
  _QWORD v123[5]; // [rsp+F8h] [rbp-10h] BYREF

  v113 = a6;
  v103 = a3;
  v8 = a2;
  *(_QWORD *)&v120.left = a4;
  v104 = (struct tagRECT)0LL;
  v121 = 0LL;
  v122 = 0LL;
  v109 = 0;
  v108 = 0;
  v106 = 0;
  v105 = 0;
  v110 = 0;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v101 = 0;
  memset(v123, 0, sizeof(v123));
  v9 = *((_QWORD *)a1 + 13);
  v10 = a3 & 0x20;
  v107 = 0;
  v11 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL);
  v111 = 1;
  v102 = v11 & 1;
  v112 = (v11 >> 5) & 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
      0x17u,
      (__int64)a1,
      0,
      v8,
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
  v14 = v13 | 0x80000;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v103 = a3;
    v111 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v60 = (void *)ReferenceDwmApiPort(v58, v57, v59);
        DwmAsyncNotifyAnimationChange(v60);
      }
    }
  }
  GetRect(a1, &v121, 66LL);
  if ( (a3 & 4) != 0 )
    Prop = (struct tagRECT *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  else
    Prop = (struct tagRECT *)CkptRestore(a1, &v121);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v103 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v70 = *(_DWORD *)(v17 + 96);
      v71 = v70 - v122;
      LODWORD(v122) = v70 - v121;
      LODWORD(v121) = v71;
      v107 = 1;
    }
    v18 = *v16;
    if ( v10 )
      v19 = *a5;
    else
      v19 = v16[1];
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1, *(_QWORD *)a1, v8, 5) )
    {
      if ( (_DWORD)v8 == 204 )
      {
        v14 |= 0x14u;
        LODWORD(v8) = ((v16[3].left & 4) != 0) + 1;
      }
      if ( (_DWORD)v8 != 3 && (_DWORD)v8 != 1 )
      {
        if ( (_DWORD)v8 == 2 )
          goto LABEL_32;
        if ( (_DWORD)v8 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v8 <= 5 )
            goto LABEL_135;
          if ( (unsigned int)v8 <= 7 )
          {
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
              v14 |= 0x10u;
            v20 = CalcMinZOrder(a1);
            if ( v20 )
            {
              if ( !a6 )
                v113 = *(_QWORD *)v20;
            }
            else
            {
              v14 |= 4u;
            }
LABEL_32:
            v21 = 1LL;
            v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v22 & 0x20) != 0 )
            {
              if ( (v22 & 0x10) != 0 )
                goto LABEL_81;
              v27 = 0;
              v14 |= 0x17u;
              v38 = 0;
              v35 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
              {
                v66 = (void *)ReferenceDwmApiPort(v24, v23, v25);
                if ( v66 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v65 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v65);
                  DwmSyncNotifyMinimizing(v66);
                  EnterCrit(0LL, 1LL);
                }
              }
              left = v16[3].left;
              v27 = 2;
              if ( (left & 1) == 0 )
              {
                left &= ~0x20u;
                v16[3].left = left;
              }
              if ( (left & 0x20) == 0 )
              {
                ParkIcon(a1, &v16[2]);
                v16[3].left |= 0x20u;
              }
              *(_QWORD *)&v104.left = *(_QWORD *)&v16[2].left;
              v104.right = *(_DWORD *)(gpsi + 2124LL) + v104.left;
              v104.bottom = v104.top + *(_DWORD *)(gpsi + 2128LL);
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL); i; i = *(_QWORD *)(i + 104) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  v114 = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = &v114;
                  v115 = i;
                  HMLockObject(i);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v77 = *((_QWORD *)a1 + 13);
                    v117 = *(_QWORD *)(gptiCurrent + 408LL);
                    *(_QWORD *)(gptiCurrent + 408LL) = &v117;
                    v118 = v77;
                    if ( v77 )
                      HMLockObject(v77);
                    xxxSetFocus(*((struct tagWND **)a1 + 13), v75, v76);
                    ThreadUnlock1(v79, v78, v80);
                  }
                  else
                  {
                    xxxSetFocus(0LL, v75, v76);
                  }
                  ThreadUnlock1(v82, v81, v83);
                  break;
                }
              }
              v29 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v29 + 31) & 1) != 0 )
              {
                v105 = 1;
                v31 = v16[3].left & 0xFFFFFFE5 | 2;
              }
              else
              {
                v30 = *(_BYTE *)(v29 + 233);
                if ( (v30 & 3) == 3 )
                {
                  v31 = v16[3].left & 0xFFFFFFE5 | 0x18;
                }
                else if ( (v30 & 1) != 0 )
                {
                  v31 = v16[3].left & 0xFFFFFFE5 | 8;
                }
                else if ( (v30 & 2) != 0 )
                {
                  v31 = v16[3].left & 0xFFFFFFE5 | 0x10;
                }
                else
                {
                  v31 = v16[3].left & 0xFFFFFFE5;
                }
              }
              v16[3].left = v31;
              v32 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v32 + 21) & 2) != 0 )
              {
                v33 = 0;
              }
              else
              {
                v84 = IsTrayWindow(a1);
                v32 = *((_QWORD *)a1 + 5);
                v33 = v84;
                v101 = v84;
              }
              v34 = *(_BYTE *)(v32 + 31);
              if ( (v34 & 0x20) != 0 )
              {
                if ( (v34 & 0x10) != 0 )
                  goto LABEL_81;
                v38 = v101;
                v14 |= 0x17u;
                v21 = 1LL;
                v104 = (struct tagRECT)0LL;
                v35 = 0;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
                v35 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v101 = v33 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                  ClrFTrueVis(j);
                v14 |= 0x8120u;
                DesktopWindow = GetDesktopWindow(a1);
                v38 = v101;
                v21 = 1LL;
                if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                  v110 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_54:
            if ( (v103 & 1) != 0 )
              goto LABEL_57;
            v39 = v14 | 0x40;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
            {
              v14 |= 0x40u;
LABEL_57:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v38 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v97 = *(_QWORD *)a1;
                v21 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL)
                                                                                  + 16LL));
                if ( ((*(_WORD *)(gptiCurrent + 672LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                  PostShellHookMessages(1uLL, v97);
              }
              v41 = InternalBeginDeferWindowPos(1LL, v21);
              if ( v41 )
              {
                if ( v113 )
                {
                  LOBYTE(v40) = 1;
                  v43 = HMValidateHandleNoSecure(v113, v40);
                }
                else
                {
                  v43 = 0LL;
                }
                v42 = _DeferWindowPos(
                        v41,
                        a1,
                        v43,
                        (unsigned int)v104.left,
                        v104.top,
                        v104.right - v104.left,
                        v104.bottom - v104.top,
                        v14,
                        0);
                if ( v42 )
                {
                  if ( v105 && *(_DWORD *)*gpDispInfo > 1u )
                  {
                    v98 = *((_QWORD *)a1 + 5);
                    if ( (*(_BYTE *)(v98 + 31) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v42 + 40) + 112LL) = 2LL;
                    }
                    else if ( (*(_BYTE *)(v98 + 21) & 8) != 0 )
                    {
                      *(_QWORD *)(*(_QWORD *)(v42 + 40) + 112LL) = 1LL;
                    }
                  }
                  xxxEndDeferWindowPosEx((struct tagSMWP *)v42);
                  if ( (unsigned int)IsTopLevelWindow(a1) )
                    xxxRestoreWindowFromDeferredStateIfNeeded(a1);
                }
              }
              if ( v35 )
                xxxWindowEvent(v35, 1);
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
              v44 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v44 + 31) & 1) != 0 )
              {
                v52 = ValidateHmonitorNoRip(*(_QWORD *)(v44 + 256));
                MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v121, v52, a1);
                v54 = *((_QWORD *)a1 + 5);
                v44 = v54;
                v55 = *(_QWORD *)(v54 + 88);
                v42 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
                v56 = _mm_srli_si128(*(__m128i *)(v54 + 88), 8).m128i_u64[0];
                if ( (int)v56 - (int)v55 < (int)(v42 - MonitorWorkRectForWindow->m128i_i64[0]) )
                {
                  v42 = (unsigned int)(HIDWORD(v42) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                  if ( HIDWORD(v56) - HIDWORD(v55) < (int)v42 )
                  {
                    *(_DWORD *)(v54 + 232) |= 0x40000000u;
                    v44 = *((_QWORD *)a1 + 5);
                  }
                }
              }
              if ( (_DWORD)v8 == 2
                && (*(_BYTE *)(v44 + 21) & 2) == 0
                && (*(_BYTE *)(v44 + 31) & 0x10) != 0
                && (*(_BYTE *)(v44 + 30) & 0x40) != 0 )
              {
                if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
                {
                  v99 = 1;
                  v100 = 38;
                }
                else
                {
                  v99 = 0;
                  v100 = 15;
                }
                PostMessage((int)a1, v100, v99, 0);
              }
              if ( v108 )
                xxxShowOwnedWindows(a1, 3LL, 0LL);
              if ( (_DWORD)v8 == 6
                && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
                && !(unsigned int)xxxActivateOnMinimize(a1) )
              {
                xxxActivateWindowWithOptions((__int64)a1, 2LL, 57LL, 1);
              }
              if ( v109 )
                xxxSetFocus(a1, v44, v42);
              if ( v106 )
                xxxSendMessage(a1, 6LL, 1LL, 0LL);
              if ( v110 )
                xxxFlushPalette(a1, v44, v42);
              v45 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
              if ( v102 != (v45 & 1) || v112 != ((v45 >> 5) & 1) )
                PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x28u, *(_QWORD *)a1);
              goto LABEL_81;
            }
            if ( !(_DWORD)v21 )
              v39 = v14;
            v14 = v39;
            if ( !(unsigned int)IsVisible((__int64)a1)
              || (v69 & 0x10000) == 0
              || !v27
              || (v67 & 0x40) != 0 && (*(_BYTE *)(v68 + 23) & 0x10) != 0 )
            {
              goto LABEL_57;
            }
            *(_QWORD *)&v120.left = 0LL;
            *(_QWORD *)&v120.right = 0LL;
            if ( v107 )
            {
              v93 = v104;
              v94 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
              v95 = *(_DWORD *)(v94 + 96) - v104.left;
              v104.left = *(_DWORD *)(v94 + 96) - v104.right;
              v104.right = v95;
            }
            else
            {
              v93 = v120;
            }
            if ( v27 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v96 = a1;
            }
            else
            {
              *(_QWORD *)&v120.left = 0LL;
              *(_QWORD *)&v120.right = 0LL;
              xxxSendMinRectMessages(a1, &v120);
              if ( (unsigned int)IsRectEmptyInl(&v120) )
                goto LABEL_220;
              v96 = a1;
            }
            xxxDrawAnimatedRects(v96);
LABEL_220:
            if ( v107 )
              v104 = v93;
            goto LABEL_57;
          }
          if ( (_DWORD)v8 != 9 )
          {
LABEL_135:
            v27 = 0;
            v21 = 0LL;
            v35 = 0;
            v38 = 0;
            goto LABEL_54;
          }
        }
        v72 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v72 & 0x20) != 0 || (v72 & 1) != 0 && v10 )
        {
          v74 = v16[3].left;
          if ( (v74 & 2) != 0 )
          {
            LODWORD(v8) = 3;
            goto LABEL_83;
          }
          if ( (v74 & 0x18) == 0x18 )
          {
            LODWORD(v8) = 12;
            goto LABEL_83;
          }
          if ( (v74 & 8) != 0 )
          {
            LODWORD(v8) = 14;
            goto LABEL_83;
          }
          if ( (v74 & 0x10) != 0 )
          {
            LODWORD(v8) = 13;
            goto LABEL_83;
          }
          LODWORD(v8) = 1;
          SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
          v73 = -9982;
        }
        else
        {
          LODWORD(v8) = 1;
          SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
          SetOrClrWF(0, (__int64)a1, 0xD902u, 1);
          v73 = -9600;
        }
        SetOrClrWF(0, (__int64)a1, v73, 1);
      }
LABEL_83:
      v47 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v8 == 3 )
      {
        v48 = ValidateHmonitorNoRip(*(_QWORD *)(v47 + 256));
        v49 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v49 & 1) != 0
          && (!*(_QWORD *)&v120.left || v48 == *(_QWORD *)&v120.left)
          && (((v103 & 2) == 0) & (v49 >> 4)) != 0 )
        {
          goto LABEL_81;
        }
        v105 = 1;
        v50 = v14 | (16 * ((v103 & 1) + 2048));
        if ( (v49 & 0x20) != 0 )
          v16[3].left |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v85 = v14 | 0x8000;
        if ( (*(_BYTE *)(v47 + 31) & 0x21) == 0 )
          v85 = v14;
        v50 = v85;
        if ( (*(_BYTE *)(v47 + 31) & 1) != 0 )
          v105 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
          goto LABEL_81;
        v108 = 1;
        v27 = 1;
        if ( (v50 & 0x10) == 0 )
        {
          v109 = 1;
          v106 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v50 |= 0x100u;
      }
      else
      {
        v27 = 3;
      }
      if ( (_DWORD)v8 == 3 )
      {
        *(_QWORD *)&v104.left = v123[2];
        v104.right = LODWORD(v123[1]) + LODWORD(v123[2]);
        v104.bottom = HIDWORD(v123[2]) + HIDWORD(v123[1]);
        SetOrClrWF(1, (__int64)a1, 0xF01u, 1);
        SetOrClrWF(0, (__int64)a1, 0xD901u, 1);
        SetOrClrWF(0, (__int64)a1, 0xD902u, 1);
        SetOrClrWF(0, (__int64)a1, 0xDA80u, 1);
        if ( (v103 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
        goto LABEL_94;
      }
      if ( (_DWORD)v8 == 12 )
      {
        v104 = v19;
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
        v86 = 1;
      }
      else
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
        if ( (_DWORD)v8 == 14 )
        {
          v104 = v19;
          SetOrClrWF(1, (__int64)a1, 0xD901u, 1);
          v87 = 0;
LABEL_189:
          SetOrClrWF(v87, (__int64)a1, 0xD902u, 1);
          v50 |= 0x100000u;
LABEL_94:
          v51 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v51 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v51 + 21) & 2) != 0 )
              v88 = 0;
            else
              v88 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v35 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v88 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v89 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2uLL, v89);
            }
            v90 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v90 & 0xC0) != 0x40 && (v90 & 0x10) != 0 )
            {
              v91 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v91 + 896) == 1 )
              {
                v92 = *(_QWORD *)(v91 + 424);
                if ( v92 != gpqForeground && ((v50 & 0x10) == 0 || *(struct tagWND **)(v92 + 128) == a1) )
                  xxxSetForegroundWindowWithOptions((__int64)a1, 6u, 4097, 0);
              }
            }
          }
          else
          {
            v35 = 0;
          }
          v14 = v50 | 0x20;
          v38 = 0;
          v21 = 0LL;
          goto LABEL_54;
        }
        if ( (_DWORD)v8 != 13 )
        {
          v104 = v18;
          goto LABEL_94;
        }
        v104 = v19;
        v86 = 0;
      }
      SetOrClrWF(v86, (__int64)a1, 0xD901u, 1);
      v87 = 1;
      goto LABEL_189;
    }
  }
LABEL_81:
  if ( !v111 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v64 = (void *)ReferenceDwmApiPort(v62, v61, v63);
    DwmAsyncNotifyAnimationChange(v64);
  }
  return 0LL;
}
