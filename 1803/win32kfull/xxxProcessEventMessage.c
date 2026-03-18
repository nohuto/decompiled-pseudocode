/*
 * XREFs of xxxProcessEventMessage @ 0x1C003C798
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     RtlInitLargeUnicodeString @ 0x1C0022154 (RtlInitLargeUnicodeString.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxCancelTracking @ 0x1C00597BC (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     xxxUpdateTray @ 0x1C005AAD0 (xxxUpdateTray.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendNCActivateMessage @ 0x1C005E010 (xxxSendNCActivateMessage.c)
 *     xxxCancelMouseMoveTracking @ 0x1C005E57C (xxxCancelMouseMoveTracking.c)
 *     xxxApplyGlobalInputSettings @ 0x1C005EF88 (xxxApplyGlobalInputSettings.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0062DC4 (xxxEndGetWidnowTrackInfoAsync.c)
 *     GetMouseKeyFlags @ 0x1C006343C (GetMouseKeyFlags.c)
 *     xxxResetTooltip @ 0x1C0064938 (xxxResetTooltip.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00C08AC (ProcessUpdateKeyStateEvent.c)
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D772C (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D7A80 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E4AF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0101650 (xxxProcessSetWindowPosEvent.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0104A3C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z @ 0x1C0105650 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1C010A83C (xxxClientBroadcastThemeChange.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     xxxProcessShowWindowEvent @ 0x1C0111D1C (xxxProcessShowWindowEvent.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCloneWindowPosAndArrangement @ 0x1C019EF98 (xxxCloneWindowPosAndArrangement.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01ABEC0 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01AC63C (zzzActiveCursorTracking.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01BAE44 (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C01E254C (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C01E264C (xxxSendShutdownData.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // r14
  __int64 v4; // rsi
  struct _KTHREAD **v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r13
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // esi
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int DLT; // eax
  __int64 v40; // r15
  __int64 v41; // r10
  int v42; // eax
  _QWORD *v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  unsigned int v52; // r12d
  unsigned __int16 v53; // r15
  _BYTE *v54; // rbx
  struct _KTHREAD *v55; // r13
  __int64 v56; // r9
  __int64 v57; // r8
  unsigned __int64 v58; // rsi
  char *v59; // r15
  __int64 v60; // r13
  __int64 v61; // r15
  __int64 v62; // r13
  __int64 *v63; // rax
  unsigned __int16 v64; // si
  __int64 v65; // r11
  __int64 v66; // rcx
  unsigned __int64 MouseKeyFlags; // rdx
  unsigned __int16 v68; // ax
  __int64 v69; // r11
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // r15d
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // r9
  struct tagWND *v88; // r10
  CMoveSizeRequest *v89; // rcx
  __int64 v90; // rax
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rax
  CMoveSizeRequest *v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  struct _KTHREAD *v108; // rbx
  __int64 *v109; // rax
  __int64 result; // rax
  __int64 v111; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v112; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v113; // [rsp+58h] [rbp-A8h]
  tagObjLock *v114; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+68h] [rbp-98h]
  _BYTE v116[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v117[3]; // [rsp+80h] [rbp-80h] BYREF
  tagObjLock *v118[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v119[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v120[4]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v121[264]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v117[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v117;
  v9 = *(unsigned int *)(a2 + 96);
  v10 = *(_QWORD **)(a1 + 424);
  v117[2] = CleanEventMessage;
  v117[1] = a2;
  if ( (int)v9 <= 15 )
  {
    if ( (_DWORD)v9 == 15 )
    {
      v65 = v10[14];
      if ( v65 || (v65 = v10[15]) != 0 )
      {
        v66 = *(_QWORD *)(v65 + 16);
        if ( a1 == v66 )
        {
          MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v66 + 424));
          v68 = *(_WORD *)(a2 + 40) - 165;
          v112 = v69;
          v70 = (v68 << 16) | MouseKeyFlags;
          v71 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v70;
          *(_DWORD *)(a1 + 1200) |= 0x800u;
          *(_QWORD *)(a1 + 1208) = v71;
          v111 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v111;
          _InterlockedAdd((volatile signed __int32 *)(v69 + 8), 1u);
          xxxSendMessage(v69, 793LL, *(_QWORD *)v69, *(_QWORD *)(a2 + 40));
          ThreadUnlock1(v73, v72, v74);
          *(_DWORD *)(a1 + 1200) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v66,
            *(_QWORD *)(v66 + 424),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            a2 + 120);
        }
      }
      goto LABEL_174;
    }
    if ( (int)v9 <= 8 )
    {
      if ( (_DWORD)v9 == 8 )
      {
        LOBYTE(v7) = 1;
        v28 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), (__int64)v7);
        if ( v28 )
        {
          if ( *(char *)(*(_QWORD *)(v28 + 40) + 19LL) < 0 )
          {
            v111 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v111;
            v112 = v28;
            _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
            xxxFreeWindow((struct tagWND *)v28, (struct tagSwitchWndInfo *)&v111, v28, v29);
          }
          else
          {
            xxxDestroyWindow(v28);
          }
        }
        goto LABEL_174;
      }
      v11 = v9 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v9 = v10[13];
          if ( v9 )
          {
            v111 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v111;
            v112 = v9;
            _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
            xxxSendMessage(v10[13], 31LL, 0LL, 0LL);
            ThreadUnlock1(v25, v24, v26);
            SetWakeBit(a1, 2u);
          }
          goto LABEL_174;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
          goto LABEL_174;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          ProcessUpdateKeyStateEvent(v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          goto LABEL_174;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
          goto LABEL_174;
        }
        v9 = (unsigned int)(v15 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == 1 )
          {
            LOBYTE(v7) = 1;
            v16 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
            if ( v16 )
              PostTransformableMessage(v16, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
          }
          goto LABEL_174;
        }
        v17 = *(_QWORD *)(a2 + 40);
        if ( !v17 )
        {
          xxxCancelTracking();
          CCursorClip::ClearClip(gpCursorClip);
          zzzLockWindowUpdate2(0LL);
          v9 = *(_QWORD *)(a1 + 424);
          if ( *(_QWORD *)(a2 + 32) )
          {
            v18 = *(_QWORD *)(v9 + 120);
            if ( v18 )
            {
              if ( v9 == gpqForeground )
              {
                v111 = *(_QWORD *)(a1 + 408);
                *(_QWORD *)(a1 + 408) = &v111;
                v112 = v18;
                _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
                if ( *(_QWORD *)(v9 + 112) )
                  zzzInputFocusReceivedWindowEvent(7LL);
                xxxSendNCActivateMessage((struct tagWND *)v18);
                xxxUpdateTray(v18);
                xxxSetWindowPos((struct tagWND *)v18, 0LL, 0LL, 0LL, 0, 0, 3);
                goto LABEL_173;
              }
            }
          }
          if ( v9 != gpqForeground )
          {
            v21 = *(_QWORD *)(a1 + 416);
            *(_DWORD *)(a1 + 480) &= ~0x20u;
            *(_DWORD *)(v21 + 12) &= ~0x100u;
          }
          goto LABEL_174;
        }
        LOBYTE(v7) = 1;
        v22 = HMValidateHandleNoSecure(v17, (__int64)v7);
        if ( !v22 )
          goto LABEL_174;
        v111 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v111;
        v112 = v22;
        _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
        if ( gpqForeground )
        {
          if ( v22 == v10[15] )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 424LL);
            xxxSendNCActivateMessage((struct tagWND *)v22);
            if ( v23 == gpqForeground )
            {
              xxxUpdateTray(v22);
              if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                xxxSetWindowPos((struct tagWND *)v22, 0LL, 0LL, 0LL, 0, 0, 3);
            }
          }
          else if ( (unsigned int)xxxActivateThisWindow((struct tagWND *)v22) )
          {
            v19 = (unsigned int)gpdwCPUserPreferencesMask;
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking((struct tagWND *)v22);
          }
        }
        else
        {
          xxxSetForegroundWindow2((struct tagWND *)v22);
        }
        if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v22, 274LL, 61728LL, 0LL);
      }
      else
      {
        LOBYTE(v7) = 1;
        v27 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
        if ( !v27 )
          goto LABEL_174;
        v9 = *(_QWORD *)(v27 + 40);
        if ( *(char *)(v9 + 20) < 0 )
          goto LABEL_174;
        v111 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v111;
        v112 = v27;
        _InterlockedAdd((volatile signed __int32 *)(v27 + 8), 1u);
        xxxProcessShowWindowEvent(v27, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      }
LABEL_173:
      ThreadUnlock1(v19, v7, v20);
      goto LABEL_174;
    }
    v30 = (unsigned int)(v9 - 9);
    if ( !(_DWORD)v30 )
    {
      v51 = *(_QWORD *)(a2 + 16);
      v52 = *(_DWORD *)(a2 + 24);
      v53 = v51;
      v54 = *(_BYTE **)(a2 + 40);
      v55 = KeGetCurrentThread();
      v115 = *(_QWORD *)(a2 + 32);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v7) && PsGetThreadWin32Thread(v55) )
        v53 = v51;
      v57 = v53;
      v9 = gpsi;
      if ( (unsigned __int64)v53 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_174;
      v58 = v51 >> 16;
      v7 = (struct _KTHREAD **)gSharedInfo[1];
      v59 = (char *)v7 + (unsigned int)v53 * LODWORD(gSharedInfo[2]);
      v60 = 3 * ((__int64)(unsigned int)(v57 * LODWORD(gSharedInfo[2])) >> 5);
      v9 = gpKernelHandleTable;
      v113 = (struct _KTHREAD *)gpKernelHandleTable;
      if ( (_WORD)v58 != *((_WORD *)v59 + 13) && (_WORD)v58 != 0xFFFF )
      {
        if ( (_WORD)v58 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable, v7, v57, v56) )
          goto LABEL_174;
        v9 = (__int64)v113;
      }
      if ( (v59[25] & 1) != 0 )
        goto LABEL_174;
      if ( v59[24] != 1 )
        goto LABEL_174;
      v61 = *(_QWORD *)(v9 + 8 * v60);
      if ( !v61 )
        goto LABEL_174;
      v62 = 0LL;
      v113 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v7) )
      {
        v63 = (__int64 *)PsGetThreadWin32Thread(v113);
        if ( v63 )
          v62 = *v63;
      }
      v120[0] = *(_QWORD *)(v62 + 408);
      *(_QWORD *)(v62 + 408) = v120;
      v120[1] = v61;
      _InterlockedAdd((volatile signed __int32 *)(v61 + 8), 1u);
      if ( v52 >= 0x1A )
      {
        if ( v52 <= 0x1B )
        {
          if ( v54 )
          {
            if ( v54 == (_BYTE *)-1LL )
            {
              v121[0] = 0;
              RtlInitLargeUnicodeString((__int64)v116, (__int64)v121);
              v54 = v116;
            }
            else
            {
              v64 = (unsigned __int16)v54;
              if ( (unsigned int)UserGetAtomName((unsigned __int16)v54, v121, 260LL) )
              {
                RtlInitLargeUnicodeString((__int64)v116, (__int64)v121);
                v54 = v116;
              }
              else
              {
                v54 = 0LL;
              }
              UserDeleteAtom(v64);
            }
          }
          *(_QWORD *)(a2 + 40) = 0LL;
        }
        else if ( v52 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync(v61);
          goto LABEL_173;
        }
      }
      xxxSendMessage(v61, v52, v115, v54);
      goto LABEL_173;
    }
    v31 = v30 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v9 = (unsigned int)(v33 - 1);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 == 1 )
            {
              v34 = *(_DWORD *)(a2 + 24);
              if ( v34 == 5 )
              {
                v35 = *(_DWORD *)(a2 + 40);
                v34 = *(_DWORD *)(a2 + 32);
                if ( v35 > 5 )
                  v35 = 5;
              }
              else
              {
                v35 = 1;
              }
              if ( v35 )
              {
                v36 = (unsigned __int16)v34 | 0x10000;
                do
                {
                  CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v36);
                  --v35;
                }
                while ( v35 );
              }
              xxxSoundSentry();
            }
          }
          else
          {
            if ( ((*(_DWORD *)(a1 + 672) | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x800) != 0 )
              xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
            PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
          }
        }
        else
        {
          CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v118, a1 + 384);
          CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v114);
          v38 = *(_QWORD *)(a2 + 40);
          if ( *(_DWORD *)(v38 + 16) )
            xxxProcessTSFEvent((struct tagNOTIFY *)v38);
          else
            xxxProcessNotifyWinEvent(v38, v37);
          tagObjLock::UnLock(v114);
          DLT = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(DLT);
          tagObjLock::UnLock(v118[1]);
          tagObjLock::UnLock(v118[0]);
        }
        goto LABEL_174;
      }
      v40 = *(_QWORD *)(a1 + 448);
      LOBYTE(v7) = 1;
      v41 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
      v42 = *(_DWORD *)(v40 + 48);
      if ( (v42 & 0x5C0) != 0 )
      {
        v7 = *(struct _KTHREAD ***)(v40 + 184);
        v9 = *(_QWORD *)(a2 + 16);
        if ( *v7 == (struct _KTHREAD *)v9 )
        {
          v9 = *(unsigned int *)(a2 + 32);
          if ( *(_DWORD *)(v40 + 192) == (_DWORD)v9 )
            goto LABEL_174;
        }
      }
      if ( (v42 & 0x100) != 0 )
        *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
      if ( v41 )
      {
        v111 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v111;
        v112 = v41;
        _InterlockedAdd((volatile signed __int32 *)(v41 + 8), 1u);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(a2 + 24),
          v41,
          *(unsigned int *)(a2 + 32),
          *(unsigned int *)(a2 + 40));
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
          goto LABEL_174;
        if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
          goto LABEL_174;
        v43 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v40 + 112));
        v44 = v43;
        if ( !v43 )
          goto LABEL_174;
        v45 = *v43;
        if ( !*v43 )
          goto LABEL_174;
        v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v7);
        v119[0] = *(_QWORD *)(v46 + 408);
        *(_QWORD *)(v46 + 408) = v119;
        v119[1] = v45;
        _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
        xxxResetTooltip(v44);
      }
      goto LABEL_173;
    }
    LOBYTE(v7) = 1;
    v47 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
    if ( !v47 )
      goto LABEL_174;
    v111 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v111;
    v112 = v47;
    _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
    v19 = *(_QWORD *)(v47 + 40);
    if ( (*(_BYTE *)(v19 + 31) & 0x10) != 0 )
      goto LABEL_173;
    SetVisible((struct tagWND *)v47);
    if ( (*(_BYTE *)(*(_QWORD *)(v47 + 40) + 31LL) & 0x20) != 0 )
      goto LABEL_173;
    v48 = 1LL;
    v49 = 7LL;
    v50 = v47;
LABEL_172:
    xxxMinMaximize(v50, v49, v48);
    goto LABEL_173;
  }
  if ( (int)v9 > 22 )
  {
    v91 = v9 - 23;
    if ( v91 )
    {
      v92 = v91 - 1;
      if ( !v92 )
      {
        xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        goto LABEL_174;
      }
      v93 = v92 - 1;
      if ( !v93 )
      {
        xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_174;
      }
      v94 = v93 - 1;
      if ( v94 )
      {
        v9 = (unsigned int)(v94 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 != 1 )
            goto LABEL_174;
          LOBYTE(v7) = 1;
          v95 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
          if ( v95 )
          {
            v111 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v111;
            v112 = v95;
            _InterlockedAdd((volatile signed __int32 *)(v95 + 8), 1u);
            xxxProcessUpdateFrameMargins((struct tagWND *)v95, *(struct tagUPDATEFRAMEMARGINS **)(a2 + 32));
            ThreadUnlock1(v97, v96, v98);
          }
          v89 = *(CMoveSizeRequest **)(a2 + 32);
          goto LABEL_147;
        }
        LOBYTE(v7) = 1;
        v99 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
        v100 = *(CMoveSizeRequest **)(a2 + 40);
        if ( v99 )
        {
          v111 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v111;
          v112 = v99;
          _InterlockedAdd((volatile signed __int32 *)(v99 + 8), 1u);
          xxxCloneWindowPosAndArrangement((struct tagWND *)v99);
          ThreadUnlock1(v102, v101, v103);
        }
      }
      else
      {
        LOBYTE(v7) = 1;
        v104 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
        v100 = *(CMoveSizeRequest **)(a2 + 40);
        if ( v104 )
        {
          v111 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v111;
          v112 = v104;
          _InterlockedAdd((volatile signed __int32 *)(v104 + 8), 1u);
          CMoveSizeRequest::xxxHandleMoveSizeRequest(v100, (struct tagWND *)v104);
          ThreadUnlock1(v106, v105, v107);
        }
        if ( !v100 )
          goto LABEL_174;
      }
      v89 = v100;
LABEL_147:
      Win32FreePool(v89);
      goto LABEL_174;
    }
    LOBYTE(v7) = 1;
    v90 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
    if ( !v90 )
      goto LABEL_174;
    v111 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v111;
    v112 = v90;
    _InterlockedAdd((volatile signed __int32 *)(v90 + 8), 1u);
    v48 = *(unsigned int *)(a2 + 40);
    v49 = *(unsigned int *)(a2 + 32);
LABEL_171:
    v50 = v90;
    goto LABEL_172;
  }
  if ( (_DWORD)v9 == 22 )
  {
    xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
    goto LABEL_174;
  }
  v75 = v9 - 16;
  if ( !v75 )
  {
    LOBYTE(v7) = 1;
    v90 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
    if ( !v90 )
      goto LABEL_174;
    v9 = *(_QWORD *)(v90 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 )
      goto LABEL_174;
    v111 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v111;
    v112 = v90;
    _InterlockedAdd((volatile signed __int32 *)(v90 + 8), 1u);
    v49 = 3LL;
    v48 = 3LL;
    goto LABEL_171;
  }
  v76 = v75 - 1;
  if ( v76 )
  {
    v9 = (unsigned int)(v76 - 1);
    if ( (_DWORD)v9 )
    {
      v77 = v9 - 1;
      if ( v77 )
      {
        v9 = (unsigned int)(v77 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 == 1 )
          {
            LOBYTE(v7) = 1;
            v78 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v7);
            LOBYTE(v79) = 1;
            v80 = v78;
            v81 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v79);
            PostMousePointerLeaveAndCleanup(v80, v81);
          }
        }
        else
        {
          xxxDoDeferredPointerActivate(a2);
          CleanEventMessage((struct tagQMSG *)a2);
        }
      }
      else if ( *(_DWORD *)(a2 + 24) == 809 )
      {
        PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      }
      else
      {
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      }
    }
    else if ( gpqForeground )
    {
      v82 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v82 )
      {
        if ( *(_QWORD *)(v82 + 16) == a1 )
        {
          v9 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v9 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_174;
  }
  v83 = *(_DWORD *)(a2 + 32);
  LOBYTE(v7) = 1;
  v84 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
  if ( v84 )
  {
    v86 = *(_QWORD *)(a1 + 408);
    v111 = v86;
    *(_QWORD *)(a1 + 408) = &v111;
    v112 = v84;
    _InterlockedAdd((volatile signed __int32 *)(v84 + 8), 1u);
    if ( v83 )
    {
      if ( v83 == 1 )
      {
        IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        xxxEndSetWindowArrangement(v88, (struct tagRECT *)(v87 + 4));
      }
    }
    else
    {
      xxxArrangeWindow(v84, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v86, v7, v85);
  }
  if ( v83 == 1 )
  {
    v89 = *(CMoveSizeRequest **)(a2 + 40);
    goto LABEL_147;
  }
LABEL_174:
  v108 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v7) )
  {
    v109 = (__int64 *)PsGetThreadWin32Thread(v108);
    if ( v109 )
      v3 = *v109;
  }
  result = v117[0];
  *(_QWORD *)(v3 + 16) = v117[0];
  return result;
}
