/*
 * XREFs of xxxProcessEventMessage @ 0x1C00CFC24
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     _PostThreadMessage @ 0x1C000F6C8 (_PostThreadMessage.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0014300 (xxxApplyGlobalInputSettings.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0082CA8 (ProcessUpdateKeyStateEvent.c)
 *     GetMouseKeyFlags @ 0x1C0083C88 (GetMouseKeyFlags.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C0090188 (RtlInitLargeUnicodeString.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B5464 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B5894 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B58E8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0109130 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C012D8F0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C012E07C (xxxProcessSetWindowPosEvent.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C012FBB0 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C01300FC (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     xxxResetTooltip @ 0x1C01369EC (xxxResetTooltip.c)
 *     xxxClientBroadcastThemeChange @ 0x1C013834C (xxxClientBroadcastThemeChange.c)
 *     xxxProcessShowWindowEvent @ 0x1C0140330 (xxxProcessShowWindowEvent.c)
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D680C (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E3990 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3808 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C021FD3C (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C021FE54 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023EC4C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023EE28 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // r8
  ULONG_PTR v13; // rcx
  ULONG_PTR *v14; // r15
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  struct tagWND *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  struct tagWND *v30; // rdi
  struct tagSwitchWndInfo *v31; // rdx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // r14d
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r15
  __int64 v46; // r14
  int v47; // eax
  _QWORD *v48; // rax
  _QWORD *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rax
  struct tagWND *v52; // rdi
  unsigned int v53; // r12d
  unsigned __int64 v54; // r14
  __int64 v55; // rbx
  struct _KTHREAD *v56; // r15
  __int64 v57; // r15
  unsigned __int64 v58; // r14
  struct tagWND **v59; // r13
  struct tagWND *v60; // r14
  struct _KTHREAD *v61; // r13
  __int64 v62; // r15
  __int64 *v63; // rax
  ULONG_PTR v64; // r14
  __int64 v65; // rcx
  __int64 MouseKeyFlags; // rdx
  unsigned __int16 v67; // ax
  __int64 v68; // rcx
  __int64 *v69; // r11
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // r12d
  struct tagWND *v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  BOOL v88; // eax
  struct tagRECT *v89; // rcx
  unsigned int *v90; // r9
  struct tagRECT *v91; // rdx
  unsigned int v92; // r9d
  struct tagRECT *v93; // r8
  const struct FRAME_MARGIN *v94; // rcx
  __int64 v95; // rax
  struct tagWND *v96; // rdi
  unsigned int v97; // edx
  struct tagWND *v98; // rcx
  int v99; // r8d
  __int64 v100; // r14
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  struct tagWND *v105; // rdi
  const struct FRAME_MARGIN *v106; // r15
  struct tagWND *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  const struct WINDOWPOSANDCHECKPOINT *v112; // rdi
  struct tagWND *v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rax
  struct tagWND *v118; // r14
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct _KTHREAD *v122; // rbx
  __int64 *v123; // rax
  __int64 result; // rax
  __int64 v125; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v126; // [rsp+48h] [rbp-B8h]
  __int64 v127; // [rsp+50h] [rbp-B0h]
  _QWORD v128[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v129; // [rsp+68h] [rbp-98h] BYREF
  __int64 v130; // [rsp+70h] [rbp-90h]
  void (__fastcall *v131)(struct tagQMSG *); // [rsp+78h] [rbp-88h]
  tagDomLock *v132[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v133; // [rsp+90h] [rbp-70h] BYREF
  __int64 v134; // [rsp+98h] [rbp-68h]
  __int64 v135; // [rsp+A0h] [rbp-60h]
  __int64 v136; // [rsp+A8h] [rbp-58h] BYREF
  struct tagWND *v137; // [rsp+B0h] [rbp-50h]
  __int64 v138; // [rsp+B8h] [rbp-48h]
  tagDomLock *v139[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v140[264]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v7 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v12 = 15LL;
  v129 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = &v129;
  v13 = *(unsigned int *)(a2 + 96);
  v14 = *(ULONG_PTR **)(a1 + 424);
  v131 = CleanEventMessage;
  v130 = a2;
  if ( (int)v13 <= 15 )
  {
    if ( (_DWORD)v13 == 15 )
    {
      v64 = v14[15];
      if ( v64 || (v64 = v14[16]) != 0 )
      {
        v65 = *(_QWORD *)(v64 + 16);
        if ( a1 == v65 )
        {
          MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(unsigned __int8 **)(v65 + 424));
          v67 = *(_WORD *)(a2 + 40) - 165;
          v126 = v64;
          v68 = v67;
          v70 = *v69;
          *(_QWORD *)(a2 + 40) = (v68 << 16) | MouseKeyFlags;
          *(_DWORD *)(a1 + 1224) |= 0x800u;
          *(_QWORD *)(a1 + 1240) = v70;
          v125 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v125;
          HMLockObject(v64);
          xxxSendMessage(v64);
          ThreadUnlock1(v72, v71, v73);
          *(_DWORD *)(a1 + 1224) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v65,
            *(_QWORD *)(v65 + 424),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            a2 + 120);
        }
      }
    }
    else if ( (int)v13 > 8 )
    {
      v34 = (unsigned int)(v13 - 9);
      if ( (_DWORD)v34 )
      {
        v35 = v34 - 1;
        if ( !v35 )
        {
          v52 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          if ( !v52 )
            goto LABEL_154;
          v125 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v125;
          v126 = (ULONG_PTR)v52;
          HMLockObject(v52);
          xxxProcessMinimizeHungThreadEvent(v52);
          goto LABEL_26;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v45 = *(_QWORD *)(a1 + 448);
          v46 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          v47 = *(_DWORD *)(v45 + 48);
          if ( (v47 & 0x5C0) != 0 )
          {
            v9 = *(_QWORD *)(v45 + 184);
            v13 = *(_QWORD *)(a2 + 16);
            if ( *(_QWORD *)v9 == v13 )
            {
              v13 = *(unsigned int *)(a2 + 32);
              if ( *(_DWORD *)(v45 + 192) == (_DWORD)v13 )
                goto LABEL_154;
            }
          }
          if ( (v47 & 0x100) != 0 )
            *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
          if ( v46 )
          {
            v125 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v125;
            v126 = v46;
            HMLockObject(v46);
            xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v46, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
          }
          else
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
              goto LABEL_154;
            if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
              goto LABEL_154;
            v48 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v45 + 112));
            v49 = v48;
            if ( !v48 )
              goto LABEL_154;
            v50 = *v48;
            if ( !*v48 )
              goto LABEL_154;
            v133 = 0LL;
            v134 = 0LL;
            v135 = 0LL;
            v51 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v12, v10);
            v133 = *(_QWORD *)(v51 + 408);
            *(_QWORD *)(v51 + 408) = &v133;
            v134 = v50;
            HMLockObject(v50);
            xxxResetTooltip(v49);
          }
          goto LABEL_26;
        }
        v37 = v36 - 1;
        if ( v37 )
        {
          v13 = (unsigned int)(v37 - 1);
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 == 1 )
            {
              v38 = *(_DWORD *)(a2 + 24);
              if ( v38 == 5 )
              {
                v39 = *(_DWORD *)(a2 + 40);
                v38 = *(_DWORD *)(a2 + 32);
                if ( v39 > 5 )
                  v39 = 5;
              }
              else
              {
                v39 = 1;
              }
              if ( v39 )
              {
                v40 = (unsigned __int16)v38 | 0x10000;
                do
                {
                  CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v40);
                  --v39;
                }
                while ( v39 );
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
            v139,
            (tagDomLock *)(a1 + 384));
          CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(v132);
          v44 = *(_QWORD *)(a2 + 40);
          if ( *(_DWORD *)(v44 + 24) )
            xxxProcessTSFEvent((struct tagNOTIFY *)v44);
          else
            xxxProcessNotifyWinEvent(v44, v41, v42, v43);
          tagDomLock::UnLockExclusive(v132[0]);
          CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v139);
        }
      }
      else
      {
        v53 = *(_DWORD *)(a2 + 24);
        v54 = *(_QWORD *)(a2 + 16);
        v55 = *(_QWORD *)(a2 + 40);
        v132[1] = *(tagDomLock **)(a2 + 32);
        v136 = 0LL;
        v137 = 0LL;
        v138 = 0LL;
        v128[0] = 0LL;
        v128[1] = 0LL;
        v56 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v9, 15LL, v10) )
          PsGetThreadWin32Thread(v56);
        v9 = (unsigned __int16)v54;
        v13 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v54 < *(_QWORD *)(gpsi + 8LL) )
        {
          v57 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v54 * LODWORD(gSharedInfo[2]);
          v58 = v54 >> 16;
          v59 = (struct tagWND **)HMPkheFromPhe(v57);
          if ( ((_WORD)v58 == *(_WORD *)(v57 + 26)
             || (_WORD)v58 == 0xFFFF
             || !(_WORD)v58 && PsGetCurrentProcessWow64Process(v13))
            && (*(_BYTE *)(v57 + 25) & 1) == 0
            && *(_BYTE *)(v57 + 24) == 1 )
          {
            v60 = *v59;
            if ( *v59 )
            {
              v61 = KeGetCurrentThread();
              v62 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v9, v12, v10) )
              {
                v63 = (__int64 *)PsGetThreadWin32Thread(v61);
                if ( v63 )
                  v62 = *v63;
              }
              v136 = *(_QWORD *)(v62 + 408);
              *(_QWORD *)(v62 + 408) = &v136;
              v137 = v60;
              HMLockObject(v60);
              if ( v53 >= 0x1A )
              {
                if ( v53 <= 0x1B )
                {
                  if ( v55 )
                  {
                    if ( v55 == -1 )
                    {
                      v140[0] = 0;
                      RtlInitLargeUnicodeString((__int64)v128, (__int64)v140);
                    }
                    else
                    {
                      if ( (unsigned int)UserGetAtomName((unsigned __int16)v55, v140, 260LL) )
                        RtlInitLargeUnicodeString((__int64)v128, (__int64)v140);
                      UserDeleteAtom((unsigned __int16)v55);
                    }
                  }
                  *(_QWORD *)(a2 + 40) = 0LL;
                }
                else if ( v53 == 834 )
                {
                  xxxEndGetWidnowTrackInfoAsync(v60);
                  goto LABEL_26;
                }
              }
              xxxSendMessage((ULONG_PTR)v60);
              goto LABEL_26;
            }
          }
        }
      }
    }
    else
    {
      if ( (_DWORD)v13 != 8 )
      {
        v15 = v13 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v13 = (unsigned int)(v19 - 1);
                  if ( (_DWORD)v13 )
                  {
                    if ( (_DWORD)v13 == 1 )
                    {
                      LOBYTE(v9) = 1;
                      v20 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v9);
                      if ( v20 )
                        PostTransformableMessage(
                          v20,
                          *(_DWORD *)(a2 + 24),
                          *(_QWORD *)(a2 + 32),
                          *(_QWORD *)(a2 + 40),
                          1);
                    }
                  }
                  else
                  {
                    xxxProcessActivationEvent((const struct tagQMSG *)a2, v9);
                  }
                }
                else
                {
                  xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
                }
              }
              else
              {
                ProcessUpdateKeyStateEvent((__int64)v14, *(_QWORD *)(a2 + 32), (_BYTE *)(*(_QWORD *)(a2 + 32) + 64LL));
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v13 = v14[14];
            if ( v13 )
            {
              v125 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v125;
              v126 = v13;
              HMLockObject(v13);
              xxxSendMessage(v14[14]);
              ThreadUnlock1(v22, v21, v23);
              SetWakeBit(a1, 2u);
            }
          }
          goto LABEL_154;
        }
        v24 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        v25 = v24;
        if ( !v24 )
          goto LABEL_154;
        v13 = *(_QWORD *)(v24 + 40);
        if ( *(char *)(v13 + 20) < 0 )
          goto LABEL_154;
        v125 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v125;
        v126 = v24;
        HMLockObject(v24);
        xxxProcessShowWindowEvent(v25, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
LABEL_26:
        ThreadUnlock1(v27, v26, v28);
        goto LABEL_154;
      }
      v29 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1LL);
      v30 = (struct tagWND *)v29;
      if ( v29 )
      {
        if ( *(char *)(v29[5] + 19) < 0 )
        {
          v125 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v125;
          v126 = (ULONG_PTR)v29;
          HMLockObject(v29);
          xxxFreeWindow(v30, v31, v32, v33);
        }
        else
        {
          xxxDestroyWindow(v29);
        }
      }
    }
    goto LABEL_154;
  }
  if ( (int)v13 > 23 )
  {
    v101 = v13 - 24;
    if ( !v101 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_154;
    }
    v102 = v101 - 1;
    if ( !v102 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_154;
    }
    v103 = v102 - 1;
    if ( v103 )
    {
      v104 = v103 - 1;
      if ( v104 )
      {
        v13 = (unsigned int)(v104 - 1);
        if ( (_DWORD)v13 )
        {
          if ( (_DWORD)v13 != 1 )
            goto LABEL_154;
          v105 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
          if ( !v105 )
            goto LABEL_154;
          v125 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v125;
          v126 = (ULONG_PTR)v105;
          HMLockObject(v105);
          xxxDeliverRestoreFocusMessage(v105);
          goto LABEL_26;
        }
        v106 = *(const struct FRAME_MARGIN **)(a2 + 32);
        v107 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
        if ( v107 )
        {
          v125 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v125;
          v126 = (ULONG_PTR)v107;
          HMLockObject(v107);
          xxxProcessUpdateFrameMargins(v107, v106);
          ThreadUnlock1(v109, v108, v110);
        }
        v94 = v106;
LABEL_126:
        Win32FreePool(v94);
        goto LABEL_154;
      }
      v111 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v112 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v113 = (struct tagWND *)v111;
      if ( v111 )
      {
        v125 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v125;
        v126 = v111;
        HMLockObject(v111);
        xxxCloneWindowPosAndArrangement(v113, v112);
        ThreadUnlock1(v115, v114, v116);
      }
    }
    else
    {
      v117 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
      v112 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v118 = (struct tagWND *)v117;
      if ( v117 )
      {
        v125 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v125;
        v126 = v117;
        HMLockObject(v117);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v112, v118) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v112, v118);
        ThreadUnlock1(v120, v119, v121);
      }
      if ( !v112 )
        goto LABEL_154;
    }
    v94 = v112;
    goto LABEL_126;
  }
  if ( (_DWORD)v13 == 23 )
  {
    v100 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1LL);
    if ( !v100 )
      goto LABEL_154;
    v125 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v125;
    v126 = v100;
    HMLockObject(v100);
    v99 = *(_DWORD *)(a2 + 40);
    v98 = (struct tagWND *)v100;
    v97 = *(_DWORD *)(a2 + 32);
LABEL_130:
    xxxMinMaximizeEx(v98, v97, v99, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  v74 = v13 - 16;
  if ( !v74 )
  {
    LOBYTE(v9) = 1;
    v95 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v9);
    v96 = (struct tagWND *)v95;
    if ( !v95 )
      goto LABEL_154;
    v13 = *(_QWORD *)(v95 + 40);
    if ( (*(_BYTE *)(v13 + 31) & 1) == 0 )
      goto LABEL_154;
    v125 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v125;
    v126 = v95;
    HMLockObject(v95);
    v97 = 3;
    v98 = v96;
    v99 = 3;
    goto LABEL_130;
  }
  v75 = v74 - 1;
  if ( v75 )
  {
    v13 = (unsigned int)(v75 - 1);
    if ( (_DWORD)v13 )
    {
      v76 = v13 - 1;
      if ( v76 )
      {
        v77 = v76 - 1;
        if ( v77 )
        {
          v13 = (unsigned int)(v77 - 1);
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32), v9);
          }
          else
          {
            LOBYTE(v9) = 1;
            v78 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), v9);
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
      v82 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v82 )
      {
        if ( *(_QWORD *)(v82 + 16) == a1 )
        {
          v13 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v13 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_154;
  }
  v83 = *(_DWORD *)(a2 + 32);
  LOBYTE(v9) = 1;
  v84 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v9);
  if ( v84 )
  {
    v125 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v125;
    v126 = (ULONG_PTR)v84;
    HMLockObject(v84);
    if ( v83 )
    {
      if ( v83 == 1 )
      {
        v88 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v91 = (struct tagRECT *)(v90 + 1);
        v92 = *v90;
        v93 = 0LL;
        if ( !v88 )
          v93 = v89;
        xxxEndSetWindowArrangement(v84, v91, v93, v92);
      }
    }
    else
    {
      xxxArrangeWindow(v84, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v86, v85, v87);
  }
  if ( v83 == 1 )
  {
    v94 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_126;
  }
LABEL_154:
  v122 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v9, v12, v10) )
  {
    v123 = (__int64 *)PsGetThreadWin32Thread(v122);
    if ( v123 )
      v4 = *v123;
  }
  result = v129;
  *(_QWORD *)(v4 + 16) = v129;
  return result;
}
