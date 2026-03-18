/*
 * XREFs of xxxProcessEventMessage @ 0x1C0037588
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0004750 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C00B068C (RtlInitLargeUnicodeString.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B4174 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B45FC (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00CE784 (xxxApplyGlobalInputSettings.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00D5B9C (ProcessUpdateKeyStateEvent.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 *     GetMouseKeyFlags @ 0x1C00DE6A4 (GetMouseKeyFlags.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FF074 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C010F748 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0123578 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0124258 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxClientBroadcastThemeChange @ 0x1C012BE14 (xxxClientBroadcastThemeChange.c)
 *     xxxProcessShowWindowEvent @ 0x1C0135430 (xxxProcessShowWindowEvent.c)
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01C3538 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01CF0B0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01DDC14 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C0208378 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C0208490 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0226F98 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02271A0 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  ULONG_PTR v9; // rcx
  ULONG_PTR *v10; // r10
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // esi
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // r10
  int v33; // eax
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r12d
  unsigned __int64 v40; // rsi
  __int64 v41; // rbx
  struct _KTHREAD *v42; // r15
  int v43; // r8d
  unsigned __int64 v44; // rsi
  char *v45; // r15
  __int64 v46; // r13
  ULONG_PTR v47; // r15
  __int64 v48; // r13
  __int64 *v49; // rax
  ULONG_PTR v50; // r11
  __int64 v51; // rcx
  __int64 MouseKeyFlags; // rdx
  unsigned __int16 v53; // ax
  ULONG_PTR v54; // r11
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // r15d
  __int64 v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  struct tagRECT *v72; // rcx
  struct tagWND *v73; // r10
  unsigned int *v74; // r9
  struct tagRECT *v75; // rdx
  unsigned int v76; // r9d
  struct tagRECT *v77; // r8
  const struct FRAME_MARGIN *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // ecx
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  __int64 v85; // rax
  const struct FRAME_MARGIN *v86; // r15
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  const struct WINDOWPOSANDCHECKPOINT *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  struct tagWND *v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct _KTHREAD *v98; // rbx
  __int64 *v99; // rax
  __int64 result; // rax
  __int64 v101; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v102; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v103; // [rsp+58h] [rbp-A8h]
  tagObjLock *v104[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v105[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v106[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v107[16]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v108[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v109[4]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v110[264]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v106[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v106;
  v9 = *(unsigned int *)(a2 + 96);
  v10 = *(ULONG_PTR **)(a1 + 432);
  v106[2] = CleanEventMessage;
  v106[1] = a2;
  if ( (int)v9 <= 15 )
  {
    if ( (_DWORD)v9 == 15 )
    {
      v50 = v10[14];
      if ( v50 || (v50 = v10[15]) != 0 )
      {
        v51 = *(_QWORD *)(v50 + 16);
        if ( a1 == v51 )
        {
          MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v51 + 432));
          v53 = *(_WORD *)(a2 + 40) - 165;
          v102 = v54;
          v55 = v53;
          v56 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = (v55 << 16) | MouseKeyFlags;
          *(_DWORD *)(a1 + 1208) |= 0x800u;
          *(_QWORD *)(a1 + 1216) = v56;
          v101 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v101;
          _InterlockedAdd((volatile signed __int32 *)(v54 + 8), 1u);
          xxxSendMessage(v54);
          ThreadUnlock1(v58, v57);
          *(_DWORD *)(a1 + 1208) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx((struct tagTHREADINFO *)v51, 0, 0LL, *(_QWORD *)(a2 + 40), a2 + 120);
        }
      }
    }
    else if ( (int)v9 > 8 )
    {
      v23 = (unsigned int)(v9 - 9);
      if ( (_DWORD)v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
        {
          LOBYTE(v7) = 1;
          v38 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
          if ( !v38 )
            goto LABEL_155;
          v101 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v101;
          v102 = v38;
          _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
          xxxProcessMinimizeHungThreadEvent((struct tagWND *)v38);
          goto LABEL_26;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          v31 = *(_QWORD *)(a1 + 456);
          LOBYTE(v7) = 1;
          v32 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
          v33 = *(_DWORD *)(v31 + 48);
          if ( (v33 & 0x5C0) != 0 )
          {
            v7 = *(_QWORD **)(v31 + 184);
            v9 = *(_QWORD *)(a2 + 16);
            if ( *v7 == v9 )
            {
              v9 = *(unsigned int *)(a2 + 32);
              if ( *(_DWORD *)(v31 + 192) == (_DWORD)v9 )
                goto LABEL_155;
            }
          }
          if ( (v33 & 0x100) != 0 )
            *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
          if ( v32 )
          {
            v101 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v101;
            v102 = v32;
            _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
            xxxCancelMouseMoveTracking(
              *(unsigned int *)(a2 + 24),
              v32,
              *(unsigned int *)(a2 + 32),
              *(unsigned int *)(a2 + 40));
          }
          else
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
              goto LABEL_155;
            if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
              goto LABEL_155;
            v34 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v31 + 112));
            v35 = v34;
            if ( !v34 )
              goto LABEL_155;
            v36 = *v34;
            if ( !*v34 )
              goto LABEL_155;
            v37 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v108[0] = *(_QWORD *)(v37 + 416);
            *(_QWORD *)(v37 + 416) = v108;
            v108[1] = v36;
            _InterlockedAdd((volatile signed __int32 *)(v36 + 8), 1u);
            xxxResetTooltip(v35);
          }
          goto LABEL_26;
        }
        v26 = v25 - 1;
        if ( v26 )
        {
          v9 = (unsigned int)(v26 - 1);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 == 1 )
            {
              v27 = *(_DWORD *)(a2 + 24);
              if ( v27 == 5 )
              {
                v28 = *(_DWORD *)(a2 + 40);
                v27 = *(_DWORD *)(a2 + 32);
                if ( v28 > 5 )
                  v28 = 5;
              }
              else
              {
                v28 = 1;
              }
              if ( v28 )
              {
                v29 = (unsigned __int16)v27 | 0x10000;
                do
                {
                  CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v29);
                  --v28;
                }
                while ( v28 );
              }
              xxxSoundSentry();
            }
          }
          else
          {
            if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
              xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
            PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
          }
        }
        else
        {
          CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v107, a1 + 392);
          CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(v104);
          v30 = *(_QWORD *)(a2 + 40);
          if ( *(_DWORD *)(v30 + 24) )
            xxxProcessTSFEvent((struct tagNOTIFY *)v30);
          else
            xxxProcessNotifyWinEvent(v30);
          tagObjLock::UnLock(v104[0]);
          CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(v107);
        }
      }
      else
      {
        v39 = *(_DWORD *)(a2 + 24);
        v40 = *(_QWORD *)(a2 + 16);
        v41 = *(_QWORD *)(a2 + 40);
        v42 = KeGetCurrentThread();
        v104[1] = *(tagObjLock **)(a2 + 32);
        if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v7) )
          PsGetThreadWin32Thread(v42);
        v43 = (unsigned __int16)v40;
        v9 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v40 < *(_QWORD *)(gpsi + 8LL) )
        {
          v44 = v40 >> 16;
          v7 = (_QWORD *)*((_QWORD *)&gSharedInfo + 1);
          v45 = (char *)v7 + (unsigned int)(v43 * *((_DWORD *)&gSharedInfo + 4));
          v46 = 3 * ((__int64)(unsigned int)(v43 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
          v9 = gpKernelHandleTable;
          v103 = (struct _KTHREAD *)gpKernelHandleTable;
          if ( (_WORD)v44 != *((_WORD *)v45 + 13) && (_WORD)v44 != 0xFFFF )
          {
            if ( (_WORD)v44 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable) )
              goto LABEL_155;
            v9 = (ULONG_PTR)v103;
          }
          if ( (v45[25] & 1) != 0 )
            goto LABEL_155;
          if ( v45[24] != 1 )
            goto LABEL_155;
          v47 = *(_QWORD *)(v9 + 8 * v46);
          if ( !v47 )
            goto LABEL_155;
          v48 = 0LL;
          v103 = KeGetCurrentThread();
          if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v7) )
          {
            v49 = (__int64 *)PsGetThreadWin32Thread(v103);
            if ( v49 )
              v48 = *v49;
          }
          v109[0] = *(_QWORD *)(v48 + 416);
          *(_QWORD *)(v48 + 416) = v109;
          v109[1] = v47;
          _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
          if ( v39 >= 0x1A )
          {
            if ( v39 <= 0x1B )
            {
              if ( v41 )
              {
                if ( v41 == -1 )
                {
                  v110[0] = 0;
                  RtlInitLargeUnicodeString(v105, v110);
                }
                else
                {
                  if ( (unsigned int)UserGetAtomName((unsigned __int16)v41, v110, 260LL) )
                    RtlInitLargeUnicodeString(v105, v110);
                  UserDeleteAtom((unsigned __int16)v41);
                }
              }
              *(_QWORD *)(a2 + 40) = 0LL;
            }
            else if ( v39 == 834 )
            {
              xxxEndGetWidnowTrackInfoAsync((struct tagWND *)v47);
              goto LABEL_26;
            }
          }
          xxxSendMessage(v47);
          goto LABEL_26;
        }
      }
    }
    else
    {
      if ( (_DWORD)v9 != 8 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v9 = (unsigned int)(v15 - 1);
                  if ( (_DWORD)v9 )
                  {
                    if ( (_DWORD)v9 == 1 )
                    {
                      LOBYTE(v7) = 1;
                      v16 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
                      if ( v16 )
                        PostTransformableMessage(
                          v16,
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
                ProcessUpdateKeyStateEvent(v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v9 = v10[13];
            if ( v9 )
            {
              v101 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v101;
              v102 = v9;
              _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
              xxxSendMessage(v10[13]);
              ThreadUnlock1(v18, v17);
              SetWakeBit(a1, 2u);
            }
          }
          goto LABEL_155;
        }
        LOBYTE(v7) = 1;
        v19 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
        if ( !v19 )
          goto LABEL_155;
        v9 = *(_QWORD *)(v19 + 40);
        if ( *(char *)(v9 + 20) < 0 )
          goto LABEL_155;
        v101 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v101;
        v102 = v19;
        _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
        xxxProcessShowWindowEvent(v19, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
LABEL_26:
        ThreadUnlock1(v21, v20);
        goto LABEL_155;
      }
      LOBYTE(v7) = 1;
      v22 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), (__int64)v7);
      v7 = (_QWORD *)v22;
      if ( v22 )
      {
        if ( *(char *)(*(_QWORD *)(v22 + 40) + 19LL) < 0 )
        {
          v101 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v101;
          v102 = v22;
          _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
          xxxFreeWindow((struct tagWND *)v22, (struct tagSwitchWndInfo *)v22);
        }
        else
        {
          xxxDestroyWindow((volatile signed __int32 *)v22);
        }
      }
    }
    goto LABEL_155;
  }
  if ( (int)v9 > 23 )
  {
    v81 = v9 - 24;
    if ( !v81 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_155;
    }
    v82 = v81 - 1;
    if ( !v82 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_155;
    }
    v83 = v82 - 1;
    if ( v83 )
    {
      v84 = v83 - 1;
      if ( v84 )
      {
        v9 = (unsigned int)(v84 - 1);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 != 1 )
            goto LABEL_155;
          LOBYTE(v7) = 1;
          v85 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
          if ( !v85 )
            goto LABEL_155;
          v101 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v101;
          v102 = v85;
          _InterlockedAdd((volatile signed __int32 *)(v85 + 8), 1u);
          xxxDeliverRestoreFocusMessage((struct tagWND *)v85);
          goto LABEL_26;
        }
        v86 = *(const struct FRAME_MARGIN **)(a2 + 32);
        LOBYTE(v7) = 1;
        v87 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
        if ( v87 )
        {
          v101 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v101;
          v102 = v87;
          _InterlockedAdd((volatile signed __int32 *)(v87 + 8), 1u);
          xxxProcessUpdateFrameMargins((struct tagWND *)v87, v86);
          ThreadUnlock1(v89, v88);
        }
        v78 = v86;
LABEL_127:
        Win32FreePool(v78);
        goto LABEL_155;
      }
      LOBYTE(v7) = 1;
      v90 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
      v91 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      if ( v90 )
      {
        v101 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v101;
        v102 = v90;
        _InterlockedAdd((volatile signed __int32 *)(v90 + 8), 1u);
        xxxCloneWindowPosAndArrangement((struct tagWND *)v90, v91);
        ThreadUnlock1(v93, v92);
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      v94 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
      v91 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v95 = (struct tagWND *)v94;
      if ( v94 )
      {
        v101 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v101;
        v102 = v94;
        _InterlockedAdd((volatile signed __int32 *)(v94 + 8), 1u);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v91, (struct tagWND *)v94) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v91, v95);
        ThreadUnlock1(v97, v96);
      }
      if ( !v91 )
        goto LABEL_155;
    }
    v78 = v91;
    goto LABEL_127;
  }
  if ( (_DWORD)v9 == 23 )
  {
    LOBYTE(v7) = 1;
    v79 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
    if ( !v79 )
      goto LABEL_155;
    v101 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v101;
    v102 = v79;
    _InterlockedAdd((volatile signed __int32 *)(v79 + 8), 1u);
    v80 = *(unsigned int *)(a2 + 32);
LABEL_131:
    xxxMinMaximizeEx((struct tagWND *)v79, v80, 0LL, 0LL);
    goto LABEL_26;
  }
  v59 = v9 - 16;
  if ( !v59 )
  {
    LOBYTE(v7) = 1;
    v79 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
    if ( !v79 )
      goto LABEL_155;
    v9 = *(_QWORD *)(v79 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 1) == 0 )
      goto LABEL_155;
    v101 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v101;
    v102 = v79;
    _InterlockedAdd((volatile signed __int32 *)(v79 + 8), 1u);
    v80 = 3LL;
    goto LABEL_131;
  }
  v60 = v59 - 1;
  if ( v60 )
  {
    v9 = (unsigned int)(v60 - 1);
    if ( (_DWORD)v9 )
    {
      v61 = v9 - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( v62 )
        {
          v9 = (unsigned int)(v62 - 1);
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
          }
          else
          {
            LOBYTE(v7) = 1;
            v63 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v7);
            LOBYTE(v64) = 1;
            v65 = v63;
            v66 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v64);
            PostMousePointerLeaveAndCleanup(v65, v66);
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
        PostThreadMessage(a1, 809LL, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      }
      else
      {
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      }
    }
    else if ( gpqForeground )
    {
      v67 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v67 )
      {
        if ( *(_QWORD *)(v67 + 16) == a1 )
        {
          v9 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v9 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_155;
  }
  v68 = *(_DWORD *)(a2 + 32);
  LOBYTE(v7) = 1;
  v69 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v7);
  if ( v69 )
  {
    v70 = *(_QWORD *)(a1 + 416);
    v101 = v70;
    *(_QWORD *)(a1 + 416) = &v101;
    v102 = v69;
    _InterlockedAdd((volatile signed __int32 *)(v69 + 8), 1u);
    if ( v68 )
    {
      if ( v68 == 1 )
      {
        v71 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v75 = (struct tagRECT *)(v74 + 1);
        v76 = *v74;
        v77 = 0LL;
        if ( !v71 )
          v77 = v72;
        xxxEndSetWindowArrangement(v73, v75, v77, v76);
      }
    }
    else
    {
      xxxArrangeWindow(v69, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v70, v7);
  }
  if ( v68 == 1 )
  {
    v78 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_127;
  }
LABEL_155:
  v98 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v7) )
  {
    v99 = (__int64 *)PsGetThreadWin32Thread(v98);
    if ( v99 )
      v3 = *v99;
  }
  result = v106[0];
  *(_QWORD *)(v3 + 16) = v106[0];
  return result;
}
