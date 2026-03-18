/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00132A4
 * Callers:
 *     xxxMinMaximize @ 0x1C0012B9C (xxxMinMaximize.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0013264 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D6698 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEB54 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C0231FF0 (NtUserMinMaximize.c)
 * Callees:
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0014B38 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0014B88 (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0014C24 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C0014C84 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C0014E34 (ParkIcon.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0015048 (DwmSyncNotifyMinimizing.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006C5E8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C00EF728 (ClrFTrueVis.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxFlushPalette @ 0x1C0221150 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5, __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // eax
  char v12; // dl
  char v13; // cl
  char v14; // di
  _OWORD *Prop; // rax
  _OWORD *v16; // r14
  __int64 v17; // rdx
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int v25; // r12d
  __int64 i; // rcx
  __int64 v27; // rcx
  char v28; // dl
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v31; // r14d
  char v32; // dl
  unsigned int v33; // r15d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v36; // esi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rdx
  unsigned __int8 v42; // cl
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // dl
  char v47; // di
  __int64 v48; // rcx
  __int64 v49; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v51; // r10
  __int64 v52; // rdi
  unsigned __int64 v53; // xmm0_8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  void *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  void *v61; // rax
  __int64 v62; // rcx
  void *v63; // rsi
  char v64; // r9
  __int64 v65; // r10
  int v66; // r11d
  int v67; // edx
  int v68; // eax
  char v69; // cl
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // rcx
  int v73; // eax
  char v74; // cl
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // esi
  __int64 v78; // rsi
  char v79; // cl
  __int64 v80; // rax
  __int64 v81; // rcx
  struct tagWND *v82; // rcx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rdx
  BOOL v87; // [rsp+58h] [rbp-B0h]
  char v88; // [rsp+5Ch] [rbp-ACh]
  char v89; // [rsp+64h] [rbp-A4h]
  int v90; // [rsp+7Ch] [rbp-8Ch]
  BOOL v91; // [rsp+84h] [rbp-84h]
  int v92; // [rsp+8Ch] [rbp-7Ch]
  int v93; // [rsp+90h] [rbp-78h]
  int v94; // [rsp+94h] [rbp-74h]
  int v95; // [rsp+98h] [rbp-70h]
  int v96; // [rsp+9Ch] [rbp-6Ch]
  __int64 v97; // [rsp+A0h] [rbp-68h]
  __int64 v98; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-58h]
  __int64 v100; // [rsp+B8h] [rbp-50h]
  __int64 v101; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-40h]
  __int64 v103; // [rsp+D0h] [rbp-38h]
  struct tagRECT v104; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v106; // [rsp+F0h] [rbp-18h]
  _QWORD v107[5]; // [rsp+F8h] [rbp-10h] BYREF

  v97 = a6;
  v89 = a3;
  v8 = a2;
  *(_QWORD *)&v104.left = a4;
  v105 = 0LL;
  v106 = 0LL;
  v93 = 0;
  v92 = 0;
  v91 = 0;
  v90 = 0;
  v94 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v87 = 0;
  memset(v107, 0, sizeof(v107));
  v9 = *((_QWORD *)a1 + 13);
  v10 = a3 & 0x20;
  v11 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL);
  v95 = 1;
  v88 = v11 & 1;
  v96 = (v11 >> 5) & 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(*((struct tagTHREADINFO **)a1 + 2), 0, v8, a3 & 0xFFFDFFFF, 0LL);
    return 0LL;
  }
  v12 = 16;
  if ( (a3 & 0x40) == 0 )
    v12 = 0;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v89 = a3;
    v95 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v57 = (void *)ReferenceDwmApiPort(v55, v54, v56);
        DwmAsyncNotifyAnimationChange(v57);
      }
    }
  }
  GetRect(a1, &v105, 66LL);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  else
    Prop = (_OWORD *)CkptRestore(a1, &v105);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v89 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v67 = *(_DWORD *)(v17 + 96);
      v68 = v67 - v106;
      LODWORD(v106) = v67 - v105;
      LODWORD(v105) = v68;
    }
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0
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
          goto LABEL_27;
        if ( (_DWORD)v8 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v8 <= 5 )
            goto LABEL_126;
          if ( (unsigned int)v8 <= 7 )
          {
            v18 = CalcMinZOrder(a1);
            if ( v18 && !a6 )
              v97 = *(_QWORD *)v18;
LABEL_27:
            v19 = 1LL;
            v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v20 & 0x20) != 0 )
            {
              if ( (v20 & 0x10) != 0 )
                goto LABEL_75;
              v25 = 0;
              v36 = 0;
              v33 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
              {
                v63 = (void *)ReferenceDwmApiPort(v22, v21, v23);
                if ( v63 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v62 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v62);
                  DwmSyncNotifyMinimizing(v63);
                  EnterCrit(0LL, 1LL);
                }
              }
              v24 = *((_DWORD *)v16 + 12);
              v25 = 2;
              if ( (v24 & 1) == 0 )
              {
                v24 &= ~0x20u;
                *((_DWORD *)v16 + 12) = v24;
              }
              if ( (v24 & 0x20) == 0 )
              {
                ParkIcon(a1, v16 + 2);
                *((_DWORD *)v16 + 12) |= 0x20u;
              }
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL); i; i = *(_QWORD *)(i + 104) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  v98 = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = &v98;
                  v99 = i;
                  HMLockObject(i);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v72 = *((_QWORD *)a1 + 13);
                    v101 = *(_QWORD *)(gptiCurrent + 408LL);
                    *(_QWORD *)(gptiCurrent + 408LL) = &v101;
                    v102 = v72;
                    if ( v72 )
                      HMLockObject(v72);
                    xxxSetFocus(*((struct tagWND **)a1 + 13));
                    ThreadUnlock1();
                  }
                  else
                  {
                    xxxSetFocus(0LL);
                  }
                  ThreadUnlock1();
                  break;
                }
              }
              v27 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v27 + 31) & 1) != 0 )
              {
                v90 = 1;
                v29 = v16[3] & 0xFFFFFFE5 | 2;
              }
              else
              {
                v28 = *(_BYTE *)(v27 + 233);
                if ( (v28 & 3) == 3 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 0x18;
                }
                else if ( (v28 & 1) != 0 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 8;
                }
                else if ( (v28 & 2) != 0 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 0x10;
                }
                else
                {
                  v29 = v16[3] & 0xFFFFFFE5;
                }
              }
              *((_DWORD *)v16 + 12) = v29;
              v30 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v30 + 21) & 2) != 0 )
              {
                v31 = 0;
              }
              else
              {
                v73 = IsTrayWindow(a1);
                v30 = *((_QWORD *)a1 + 5);
                v31 = v73;
                v87 = v73;
              }
              v32 = *(_BYTE *)(v30 + 31);
              if ( (v32 & 0x20) != 0 )
              {
                if ( (v32 & 0x10) != 0 )
                  goto LABEL_75;
                v36 = v87;
                v19 = 1LL;
                v33 = 0;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0LL, a1, 3841LL, 1LL);
                v33 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v87 = v31 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                  ClrFTrueVis(j);
                DesktopWindow = GetDesktopWindow(a1);
                v36 = v87;
                v19 = 1LL;
                if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                  v94 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_49:
            if ( (v89 & 1) != 0
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
              || !(unsigned int)IsVisible(a1)
              || (v66 & 0x10000) == 0
              || !v25
              || (v64 & 0x40) != 0 && (*(_BYTE *)(v65 + 23) & 0x10) != 0 )
            {
              goto LABEL_51;
            }
            *(_QWORD *)&v104.left = 0LL;
            *(_QWORD *)&v104.right = 0LL;
            if ( v25 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v82 = a1;
            }
            else
            {
              *(_QWORD *)&v104.left = 0LL;
              *(_QWORD *)&v104.right = 0LL;
              xxxSendMinRectMessages(a1, &v104);
              if ( (unsigned int)IsRectEmptyInl(&v104) )
                goto LABEL_51;
              v82 = a1;
            }
            xxxDrawAnimatedRects(v82);
LABEL_51:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v36 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v83 = *(_QWORD *)a1;
              v19 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL)
                                                                                + 16LL));
              if ( ((*(_WORD *)(gptiCurrent + 672LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(1LL, v83);
            }
            v38 = InternalBeginDeferWindowPos(1LL, v19);
            if ( v38 )
            {
              if ( v97 )
              {
                LOBYTE(v37) = 1;
                v40 = HMValidateHandleNoSecure(v97, v37);
              }
              else
              {
                v40 = 0LL;
              }
              v39 = _DeferWindowPos(v38, a1, v40);
              if ( v39 )
              {
                if ( v90 && *(_DWORD *)*gpDispInfo > 1u )
                {
                  v84 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v84 + 31) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v39 + 40) + 112LL) = 2LL;
                  }
                  else if ( (*(_BYTE *)(v84 + 21) & 8) != 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v39 + 40) + 112LL) = 1LL;
                  }
                }
                xxxEndDeferWindowPosEx((struct tagSMWP *)v39);
                if ( (unsigned int)IsTopLevelWindow(a1) )
                  xxxRestoreWindowFromDeferredStateIfNeeded(a1);
              }
            }
            if ( v33 )
              xxxWindowEvent(v33, 1);
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
            v41 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v41 + 31) & 1) != 0 )
            {
              v49 = ValidateHmonitorNoRip(*(_QWORD *)(v41 + 256));
              MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v105, v49, a1);
              v51 = *((_QWORD *)a1 + 5);
              v41 = v51;
              v52 = *(_QWORD *)(v51 + 88);
              v39 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
              v53 = _mm_srli_si128(*(__m128i *)(v51 + 88), 8).m128i_u64[0];
              if ( (int)v53 - (int)v52 < (int)(v39 - MonitorWorkRectForWindow->m128i_i64[0]) )
              {
                v39 = (unsigned int)(HIDWORD(v39) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                if ( HIDWORD(v53) - HIDWORD(v52) < (int)v39 )
                {
                  *(_DWORD *)(v51 + 232) |= 0x40000000u;
                  v41 = *((_QWORD *)a1 + 5);
                }
              }
            }
            if ( (_DWORD)v8 == 2
              && (*(_BYTE *)(v41 + 21) & 2) == 0
              && (*(_BYTE *)(v41 + 31) & 0x10) != 0
              && (*(_BYTE *)(v41 + 30) & 0x40) != 0 )
            {
              if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
              {
                v85 = 1LL;
                v86 = 38LL;
              }
              else
              {
                v85 = 0LL;
                v86 = 15LL;
              }
              PostMessage(a1, v86, v85);
            }
            if ( v92 )
              xxxShowOwnedWindows(a1, 3LL, 0LL);
            if ( (_DWORD)v8 == 6
              && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
              && !(unsigned int)xxxActivateOnMinimize(a1) )
            {
              xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
            }
            if ( v93 )
              xxxSetFocus(a1);
            if ( v91 )
              xxxSendMessage(a1, 6LL, 1LL, 0LL);
            if ( v94 )
              xxxFlushPalette(a1, v41, v39);
            v42 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( v88 != (v42 & 1) || v96 != ((v42 >> 5) & 1) )
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 40LL, *(_QWORD *)a1);
            goto LABEL_75;
          }
          if ( (_DWORD)v8 != 9 )
          {
LABEL_126:
            v25 = 0;
            v19 = 0LL;
            v33 = 0;
            v36 = 0;
            goto LABEL_49;
          }
        }
        v69 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v69 & 0x20) != 0 || (v69 & 1) != 0 && v10 )
        {
          v71 = *((_DWORD *)v16 + 12);
          if ( (v71 & 2) != 0 )
          {
            LODWORD(v8) = 3;
            goto LABEL_77;
          }
          if ( (v71 & 0x18) == 0x18 )
          {
            LODWORD(v8) = 12;
            goto LABEL_77;
          }
          if ( (v71 & 8) != 0 )
          {
            LODWORD(v8) = 14;
            goto LABEL_77;
          }
          if ( (v71 & 0x10) != 0 )
          {
            LODWORD(v8) = 13;
            goto LABEL_77;
          }
          LODWORD(v8) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          v70 = 55554LL;
        }
        else
        {
          LODWORD(v8) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          v70 = 55936LL;
        }
        SetOrClrWF(0LL, a1, v70, 1LL);
      }
LABEL_77:
      v44 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v8 == 3 )
      {
        v45 = ValidateHmonitorNoRip(*(_QWORD *)(v44 + 256));
        v46 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v46 & 1) != 0
          && (!*(_QWORD *)&v104.left || v45 == *(_QWORD *)&v104.left)
          && (((v89 & 2) == 0) & (v46 >> 4)) != 0 )
        {
          goto LABEL_75;
        }
        v90 = 1;
        v47 = v14 | (16 * (v89 & 1));
        if ( (v46 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v74 = v14;
        if ( (*(_BYTE *)(v44 + 31) & 0x21) == 0 )
          v74 = v14;
        v47 = v74;
        if ( (*(_BYTE *)(v44 + 31) & 1) != 0 )
          v90 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
          goto LABEL_75;
        v92 = 1;
        v25 = 1;
        if ( (v47 & 0x10) == 0 )
        {
          v93 = 1;
          v91 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
      }
      else
      {
        v25 = 3;
      }
      if ( (_DWORD)v8 == 3 )
      {
        SetOrClrWF(1LL, a1, 3841LL, 1LL);
        SetOrClrWF(0LL, a1, 55553LL, 1LL);
        SetOrClrWF(0LL, a1, 55554LL, 1LL);
        SetOrClrWF(0LL, a1, 55936LL, 1LL);
        if ( (v89 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
        goto LABEL_88;
      }
      if ( (_DWORD)v8 == 12 )
      {
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        v75 = 1LL;
      }
      else
      {
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        if ( (_DWORD)v8 == 14 )
        {
          SetOrClrWF(1LL, a1, 55553LL, 1LL);
          v76 = 0LL;
LABEL_180:
          SetOrClrWF(v76, a1, 55554LL, 1LL);
LABEL_88:
          v48 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v48 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v48 + 21) & 2) != 0 )
              v77 = 0;
            else
              v77 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v33 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v77 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v78 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2LL, v78);
            }
            v79 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v79 & 0xC0) != 0x40 && (v79 & 0x10) != 0 )
            {
              v80 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v80 + 896) == 1 )
              {
                v81 = *(_QWORD *)(v80 + 424);
                if ( v81 != gpqForeground && ((v47 & 0x10) == 0 || *(struct tagWND **)(v81 + 128) == a1) )
                  xxxSetForegroundWindowWithOptions(a1, 6LL, 4097LL);
              }
            }
          }
          else
          {
            v33 = 0;
          }
          v36 = 0;
          v19 = 0LL;
          goto LABEL_49;
        }
        if ( (_DWORD)v8 != 13 )
          goto LABEL_88;
        v75 = 0LL;
      }
      SetOrClrWF(v75, a1, 55553LL, 1LL);
      v76 = 1LL;
      goto LABEL_180;
    }
  }
LABEL_75:
  if ( !v95 && (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v61 = (void *)ReferenceDwmApiPort(v59, v58, v60);
    DwmAsyncNotifyAnimationChange(v61);
  }
  return 0LL;
}
