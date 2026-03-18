/*
 * XREFs of xxxProcessEventMessage @ 0x1C00712F4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     _PostThreadMessage @ 0x1C000E5C8 (_PostThreadMessage.c)
 *     GetMouseKeyFlags @ 0x1C00117BC (GetMouseKeyFlags.c)
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0016B30 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0056214 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0056644 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056698 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E31E0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00E9B58 (xxxCancelMouseMoveTracking.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00EA580 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00EF3D0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0108FB8 (xxxProcessSetWindowPosEvent.c)
 *     xxxClientBroadcastThemeChange @ 0x1C011234C (xxxClientBroadcastThemeChange.c)
 *     xxxProcessShowWindowEvent @ 0x1C011A840 (xxxProcessShowWindowEvent.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C012E644 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0132E60 (xxxApplyGlobalInputSettings.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C01373D8 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0138AA8 (ProcessUpdateKeyStateEvent.c)
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D6698 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E3810 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3688 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FC7CC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C021F7FC (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C021F914 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023E62C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023E808 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v8; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // r8
  ULONG_PTR v11; // rcx
  ULONG_PTR *v12; // r15
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rax
  struct tagWND *v28; // rdi
  struct tagSwitchWndInfo *v29; // rdx
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r14d
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // r14
  int v44; // eax
  _QWORD *v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  struct tagWND *v49; // rdi
  unsigned int v50; // r12d
  unsigned __int64 v51; // r14
  __int64 v52; // rbx
  struct _KTHREAD *v53; // r15
  __int64 v54; // r15
  unsigned __int64 v55; // r14
  struct tagWND **v56; // r13
  struct tagWND *v57; // r14
  struct _KTHREAD *v58; // r13
  __int64 v59; // r15
  __int64 *v60; // rax
  ULONG_PTR v61; // r14
  __int64 v62; // rcx
  __int64 MouseKeyFlags; // rdx
  unsigned __int16 v64; // ax
  __int64 v65; // rcx
  __int64 *v66; // r11
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // r12d
  struct tagWND *v81; // r15
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  BOOL v85; // eax
  struct tagRECT *v86; // rcx
  unsigned int *v87; // r9
  struct tagRECT *v88; // rdx
  unsigned int v89; // r9d
  struct tagRECT *v90; // r8
  const struct FRAME_MARGIN *v91; // rcx
  __int64 v92; // rax
  struct tagWND *v93; // rdi
  unsigned int v94; // edx
  struct tagWND *v95; // rcx
  int v96; // r8d
  __int64 v97; // r14
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  struct tagWND *v102; // rdi
  const struct FRAME_MARGIN *v103; // r15
  struct tagWND *v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  const struct WINDOWPOSANDCHECKPOINT *v109; // rdi
  struct tagWND *v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rax
  struct tagWND *v115; // r14
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  struct _KTHREAD *v119; // rbx
  __int64 *v120; // rax
  __int64 result; // rax
  __int64 v122; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v123; // [rsp+48h] [rbp-B8h]
  __int64 v124; // [rsp+50h] [rbp-B0h]
  _QWORD v125[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v126; // [rsp+68h] [rbp-98h] BYREF
  __int64 v127; // [rsp+70h] [rbp-90h]
  void (__fastcall *v128)(struct tagQMSG *); // [rsp+78h] [rbp-88h]
  tagDomLock *v129[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v130; // [rsp+90h] [rbp-70h] BYREF
  __int64 v131; // [rsp+98h] [rbp-68h]
  __int64 v132; // [rsp+A0h] [rbp-60h]
  __int64 v133; // [rsp+A8h] [rbp-58h] BYREF
  struct tagWND *v134; // [rsp+B0h] [rbp-50h]
  __int64 v135; // [rsp+B8h] [rbp-48h]
  tagDomLock *v136[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v137[264]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v6 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v10 = 15LL;
  v126 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = &v126;
  v11 = *(unsigned int *)(a2 + 96);
  v12 = *(ULONG_PTR **)(a1 + 424);
  v128 = CleanEventMessage;
  v127 = a2;
  if ( (int)v11 <= 15 )
  {
    if ( (_DWORD)v11 == 15 )
    {
      v61 = v12[15];
      if ( v61 || (v61 = v12[16]) != 0 )
      {
        v62 = *(_QWORD *)(v61 + 16);
        if ( a1 == v62 )
        {
          MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(unsigned __int8 **)(v62 + 424));
          v64 = *(_WORD *)(a2 + 40) - 165;
          v123 = v61;
          v65 = v64;
          v67 = *v66;
          *(_QWORD *)(a2 + 40) = (v65 << 16) | MouseKeyFlags;
          *(_DWORD *)(a1 + 1224) |= 0x800u;
          *(_QWORD *)(a1 + 1240) = v67;
          v122 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v122;
          HMLockObject(v61);
          xxxSendMessage(v61);
          ThreadUnlock1(v69, v68, v70);
          *(_DWORD *)(a1 + 1224) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v62,
            *(_QWORD *)(v62 + 424),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            a2 + 120);
        }
      }
    }
    else if ( (int)v11 > 8 )
    {
      v32 = (unsigned int)(v11 - 9);
      if ( (_DWORD)v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
        {
          v49 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          if ( !v49 )
            goto LABEL_154;
          v122 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v122;
          v123 = (ULONG_PTR)v49;
          HMLockObject(v49);
          xxxProcessMinimizeHungThreadEvent(v49);
          goto LABEL_26;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          v42 = *(_QWORD *)(a1 + 448);
          v43 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          v44 = *(_DWORD *)(v42 + 48);
          if ( (v44 & 0x5C0) != 0 )
          {
            v8 = *(_QWORD *)(v42 + 184);
            v11 = *(_QWORD *)(a2 + 16);
            if ( *(_QWORD *)v8 == v11 )
            {
              v11 = *(unsigned int *)(a2 + 32);
              if ( *(_DWORD *)(v42 + 192) == (_DWORD)v11 )
                goto LABEL_154;
            }
          }
          if ( (v44 & 0x100) != 0 )
            *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
          if ( v43 )
          {
            v122 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v122;
            v123 = v43;
            HMLockObject(v43);
            xxxCancelMouseMoveTracking(
              *(unsigned int *)(a2 + 24),
              v43,
              *(unsigned int *)(a2 + 32),
              *(unsigned int *)(a2 + 40));
          }
          else
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
              goto LABEL_154;
            if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
              goto LABEL_154;
            v45 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v42 + 112));
            v46 = v45;
            if ( !v45 )
              goto LABEL_154;
            v47 = *v45;
            if ( !*v45 )
              goto LABEL_154;
            v130 = 0LL;
            v131 = 0LL;
            v132 = 0LL;
            v48 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v130 = *(_QWORD *)(v48 + 408);
            *(_QWORD *)(v48 + 408) = &v130;
            v131 = v47;
            HMLockObject(v47);
            xxxResetTooltip(v46);
          }
          goto LABEL_26;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v11 = (unsigned int)(v35 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 1 )
            {
              v36 = *(_DWORD *)(a2 + 24);
              if ( v36 == 5 )
              {
                v37 = *(_DWORD *)(a2 + 40);
                v36 = *(_DWORD *)(a2 + 32);
                if ( v37 > 5 )
                  v37 = 5;
              }
              else
              {
                v37 = 1;
              }
              if ( v37 )
              {
                v38 = (unsigned __int16)v36 | 0x10000;
                do
                {
                  CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v38);
                  --v37;
                }
                while ( v37 );
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
          CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
            v136,
            (tagDomLock *)(a1 + 384));
          CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(v129);
          v41 = *(_QWORD *)(a2 + 40);
          if ( *(_DWORD *)(v41 + 24) )
            xxxProcessTSFEvent((struct tagNOTIFY *)v41);
          else
            xxxProcessNotifyWinEvent(v41, v39, v40);
          tagDomLock::UnLockExclusive(v129[0]);
          CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v136);
        }
      }
      else
      {
        v50 = *(_DWORD *)(a2 + 24);
        v51 = *(_QWORD *)(a2 + 16);
        v52 = *(_QWORD *)(a2 + 40);
        v129[1] = *(tagDomLock **)(a2 + 32);
        v133 = 0LL;
        v134 = 0LL;
        v135 = 0LL;
        v125[0] = 0LL;
        v125[1] = 0LL;
        v53 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v8, 15LL) )
          PsGetThreadWin32Thread(v53);
        v8 = (unsigned __int16)v51;
        v11 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v51 < *(_QWORD *)(gpsi + 8LL) )
        {
          v54 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v51 * LODWORD(gSharedInfo[2]);
          v55 = v51 >> 16;
          v56 = (struct tagWND **)HMPkheFromPhe(v54);
          if ( ((_WORD)v55 == *(_WORD *)(v54 + 26)
             || (_WORD)v55 == 0xFFFF
             || !(_WORD)v55 && PsGetCurrentProcessWow64Process(v11))
            && (*(_BYTE *)(v54 + 25) & 1) == 0
            && *(_BYTE *)(v54 + 24) == 1 )
          {
            v57 = *v56;
            if ( *v56 )
            {
              v58 = KeGetCurrentThread();
              v59 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v8, v10) )
              {
                v60 = (__int64 *)PsGetThreadWin32Thread(v58);
                if ( v60 )
                  v59 = *v60;
              }
              v133 = *(_QWORD *)(v59 + 408);
              *(_QWORD *)(v59 + 408) = &v133;
              v134 = v57;
              HMLockObject(v57);
              if ( v50 >= 0x1A )
              {
                if ( v50 <= 0x1B )
                {
                  if ( v52 )
                  {
                    if ( v52 == -1 )
                    {
                      v137[0] = 0;
                      RtlInitLargeUnicodeString((__int64)v125, (__int64)v137);
                    }
                    else
                    {
                      if ( (unsigned int)UserGetAtomName((unsigned __int16)v52, v137, 260LL) )
                        RtlInitLargeUnicodeString((__int64)v125, (__int64)v137);
                      UserDeleteAtom((unsigned __int16)v52);
                    }
                  }
                  *(_QWORD *)(a2 + 40) = 0LL;
                }
                else if ( v50 == 834 )
                {
                  xxxEndGetWidnowTrackInfoAsync(v57);
                  goto LABEL_26;
                }
              }
              xxxSendMessage((ULONG_PTR)v57);
              goto LABEL_26;
            }
          }
        }
      }
    }
    else
    {
      if ( (_DWORD)v11 != 8 )
      {
        v13 = v11 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  v11 = (unsigned int)(v17 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      LOBYTE(v8) = 1;
                      v18 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v8);
                      if ( v18 )
                        PostTransformableMessage(
                          v18,
                          *(_DWORD *)(a2 + 24),
                          *(_QWORD *)(a2 + 32),
                          *(_QWORD *)(a2 + 40),
                          1);
                    }
                  }
                  else
                  {
                    xxxProcessActivationEvent((const struct tagQMSG *)a2);
                  }
                }
                else
                {
                  xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
                }
              }
              else
              {
                ProcessUpdateKeyStateEvent(v12, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v11 = v12[14];
            if ( v11 )
            {
              v122 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v122;
              v123 = v11;
              HMLockObject(v11);
              xxxSendMessage(v12[14]);
              ThreadUnlock1(v20, v19, v21);
              SetWakeBit(a1, 2u);
            }
          }
          goto LABEL_154;
        }
        v22 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v23 = v22;
        if ( !v22 )
          goto LABEL_154;
        v11 = *(_QWORD *)(v22 + 40);
        if ( *(char *)(v11 + 20) < 0 )
          goto LABEL_154;
        v122 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v122;
        v123 = v22;
        HMLockObject(v22);
        xxxProcessShowWindowEvent(v23, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
LABEL_26:
        ThreadUnlock1(v25, v24, v26);
        goto LABEL_154;
      }
      v27 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1LL);
      v28 = (struct tagWND *)v27;
      if ( v27 )
      {
        if ( *(char *)(v27[5] + 19) < 0 )
        {
          v122 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v122;
          v123 = (ULONG_PTR)v27;
          HMLockObject(v27);
          xxxFreeWindow(v28, v29, v30, v31);
        }
        else
        {
          xxxDestroyWindow(v27);
        }
      }
    }
    goto LABEL_154;
  }
  if ( (int)v11 > 23 )
  {
    v98 = v11 - 24;
    if ( !v98 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_154;
    }
    v99 = v98 - 1;
    if ( !v99 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_154;
    }
    v100 = v99 - 1;
    if ( v100 )
    {
      v101 = v100 - 1;
      if ( v101 )
      {
        v11 = (unsigned int)(v101 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 != 1 )
            goto LABEL_154;
          v102 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          if ( !v102 )
            goto LABEL_154;
          v122 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v122;
          v123 = (ULONG_PTR)v102;
          HMLockObject(v102);
          xxxDeliverRestoreFocusMessage(v102);
          goto LABEL_26;
        }
        v103 = *(const struct FRAME_MARGIN **)(a2 + 32);
        v104 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        if ( v104 )
        {
          v122 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v122;
          v123 = (ULONG_PTR)v104;
          HMLockObject(v104);
          xxxProcessUpdateFrameMargins(v104, v103);
          ThreadUnlock1(v106, v105, v107);
        }
        v91 = v103;
LABEL_126:
        Win32FreePool(v91);
        goto LABEL_154;
      }
      v108 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v109 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v110 = (struct tagWND *)v108;
      if ( v108 )
      {
        v122 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v122;
        v123 = v108;
        HMLockObject(v108);
        xxxCloneWindowPosAndArrangement(v110, v109);
        ThreadUnlock1(v112, v111, v113);
      }
    }
    else
    {
      v114 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v109 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v115 = (struct tagWND *)v114;
      if ( v114 )
      {
        v122 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v122;
        v123 = v114;
        HMLockObject(v114);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v109, v115) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v109, v115);
        ThreadUnlock1(v117, v116, v118);
      }
      if ( !v109 )
        goto LABEL_154;
    }
    v91 = v109;
    goto LABEL_126;
  }
  if ( (_DWORD)v11 == 23 )
  {
    v97 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
    if ( !v97 )
      goto LABEL_154;
    v122 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v122;
    v123 = v97;
    HMLockObject(v97);
    v96 = *(_DWORD *)(a2 + 40);
    v95 = (struct tagWND *)v97;
    v94 = *(_DWORD *)(a2 + 32);
LABEL_130:
    xxxMinMaximizeEx(v95, v94, v96, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  v71 = v11 - 16;
  if ( !v71 )
  {
    LOBYTE(v8) = 1;
    v92 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v8);
    v93 = (struct tagWND *)v92;
    if ( !v92 )
      goto LABEL_154;
    v11 = *(_QWORD *)(v92 + 40);
    if ( (*(_BYTE *)(v11 + 31) & 1) == 0 )
      goto LABEL_154;
    v122 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v122;
    v123 = v92;
    HMLockObject(v92);
    v94 = 3;
    v95 = v93;
    v96 = 3;
    goto LABEL_130;
  }
  v72 = v71 - 1;
  if ( v72 )
  {
    v11 = (unsigned int)(v72 - 1);
    if ( (_DWORD)v11 )
    {
      v73 = v11 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          v11 = (unsigned int)(v74 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
          }
          else
          {
            LOBYTE(v8) = 1;
            v75 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), v8);
            LOBYTE(v76) = 1;
            v77 = v75;
            v78 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v76);
            PostMousePointerLeaveAndCleanup(v77, v78);
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
      v79 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v79 )
      {
        if ( *(_QWORD *)(v79 + 16) == a1 )
        {
          v11 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v11 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_154;
  }
  v80 = *(_DWORD *)(a2 + 32);
  LOBYTE(v8) = 1;
  v81 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v8);
  if ( v81 )
  {
    v122 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v122;
    v123 = (ULONG_PTR)v81;
    HMLockObject(v81);
    if ( v80 )
    {
      if ( v80 == 1 )
      {
        v85 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v88 = (struct tagRECT *)(v87 + 1);
        v89 = *v87;
        v90 = 0LL;
        if ( !v85 )
          v90 = v86;
        xxxEndSetWindowArrangement(v81, v88, v90, v89);
      }
    }
    else
    {
      xxxArrangeWindow(v81, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v83, v82, v84);
  }
  if ( v80 == 1 )
  {
    v91 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_126;
  }
LABEL_154:
  v119 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v8, v10) )
  {
    v120 = (__int64 *)PsGetThreadWin32Thread(v119);
    if ( v120 )
      v3 = *v120;
  }
  result = v126;
  *(_QWORD *)(v3 + 16) = v126;
  return result;
}
