/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0047090
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C0046E80 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0046F80 (NtUserPeekMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C00E90C0 (NtUserRealInternalGetMessage.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C0005A70 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006CF8 (SlowAppThreadInShellFrame.c)
 *     PhkFirstGlobalValid @ 0x1C000F7EC (PhkFirstGlobalValid.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C001DA78 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C001DF00 (zzzCalcStartCursorHide.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     CalcWakeMask @ 0x1C00488C0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0048C40 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0048DF0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxDoSysExpunge @ 0x1C00D7298 (xxxDoSysExpunge.c)
 *     _IsChild @ 0x1C00F6964 (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C00F767C (IsShellFrameHangResilient.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C010102C (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     WaitMaskIncludesUserInput @ 0x1C0105F64 (WaitMaskIncludesUserInput.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C012DD20 (xxxClientCallDelegateThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C019A07C (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01A9250 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01AB8F4 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01B9548 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01B9B38 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01B9E4C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01CD0C8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01CDA2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C01D8130 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C01E0CA8 (xxxClientCallDefaultInputHandler.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C01FF7D4 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r11d
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 GlobalValid; // rax
  __int64 v30; // r9
  struct tagWND *v31; // rdx
  int v32; // ecx
  __int16 v33; // di
  __int16 v34; // si
  __int64 v35; // rax
  __int64 v36; // rcx
  __int16 v37; // ax
  __int64 j; // rcx
  unsigned __int64 i; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v41; // rdi
  _QWORD **ThreadWin32Thread; // rax
  int v43; // esi
  int v44; // r14d
  int v45; // eax
  __int64 v46; // r9
  int v47; // esi
  __int16 v48; // di
  int v49; // eax
  __int64 v50; // rsi
  int v51; // eax
  unsigned int v52; // eax
  int v53; // r9d
  int v54; // eax
  int v55; // edi
  unsigned int v56; // ecx
  __int64 v57; // rdx
  int v58; // eax
  __int16 v59; // dx
  int v60; // edi
  __int64 v61; // rdi
  __int64 v62; // rdx
  struct _KEVENT *v63; // rcx
  __int64 v64; // rax
  struct _KEVENT *v65; // rcx
  int v66; // eax
  __int16 v67; // dx
  __int64 v68; // r9
  _QWORD *k; // rsi
  LARGE_INTEGER *v70; // rdi
  __int64 v71; // rdx
  LONG HighPart; // eax
  LARGE_INTEGER *v73; // rax
  __int64 v74; // rdx
  LARGE_INTEGER *v75; // r14
  int v76; // eax
  LARGE_INTEGER **v77; // rax
  InputTransform *QuadPart; // r10
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  LARGE_INTEGER v83; // rax
  DWORD v84; // r8d
  LARGE_INTEGER v85; // rcx
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  LARGE_INTEGER *v89; // rdi
  LONGLONG v90; // rcx
  LARGE_INTEGER **v91; // rax
  LARGE_INTEGER **v92; // rcx
  __int64 v93; // rax
  unsigned int v94; // esi
  unsigned int v95; // edi
  int v96; // r12d
  __int64 v97; // rcx
  __int64 v98; // r13
  __int64 v99; // rax
  int v100; // ecx
  unsigned int v101; // eax
  unsigned int v102; // esi
  int v103; // eax
  int v104; // r14d
  int v105; // eax
  int v106; // r15d
  BOOL v107; // eax
  unsigned __int64 v108; // r8
  BOOL v109; // esi
  int v110; // eax
  int v111; // eax
  int v112; // eax
  __int64 *v113; // rax
  int v114; // eax
  int v115; // ecx
  unsigned __int16 v116; // r8
  unsigned int *v117; // rdi
  int v118; // eax
  unsigned int v119; // esi
  unsigned int v120; // ecx
  struct tagTHREADINFO *v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // rdi
  __int64 v128; // rax
  int v129; // eax
  _DWORD *v130; // rdx
  int v131; // [rsp+28h] [rbp-170h]
  int v132; // [rsp+70h] [rbp-128h]
  unsigned int v133; // [rsp+74h] [rbp-124h]
  int v134; // [rsp+78h] [rbp-120h]
  unsigned int v135; // [rsp+7Ch] [rbp-11Ch]
  int v136; // [rsp+80h] [rbp-118h]
  __int16 v137; // [rsp+88h] [rbp-110h]
  int v138; // [rsp+8Ch] [rbp-10Ch]
  int v139; // [rsp+90h] [rbp-108h] BYREF
  struct tagQMSG *v140; // [rsp+98h] [rbp-100h] BYREF
  unsigned int v141; // [rsp+A0h] [rbp-F8h]
  unsigned int v142; // [rsp+A4h] [rbp-F4h] BYREF
  int v143; // [rsp+A8h] [rbp-F0h]
  unsigned __int64 v144; // [rsp+B0h] [rbp-E8h]
  int v145; // [rsp+C0h] [rbp-D8h]
  char v146[12]; // [rsp+D4h] [rbp-C4h] BYREF
  __int64 v147; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v148; // [rsp+E8h] [rbp-B0h]
  __int128 v149; // [rsp+F8h] [rbp-A0h]
  __int128 v150; // [rsp+108h] [rbp-90h]
  _QWORD v151[3]; // [rsp+128h] [rbp-70h] BYREF
  ULONG64 v152; // [rsp+140h] [rbp-58h] BYREF
  int v153; // [rsp+148h] [rbp-50h]
  __int16 v155; // [rsp+1A8h] [rbp+10h]

  v142 = 0;
  v136 = 0;
  v134 = 0;
  v133 = 0;
  v9 = 0;
  v132 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v10 = 1;
    a2 = 1LL;
LABEL_8:
    v12 = a2;
    v144 = a2;
    v14 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
  {
    v10 = 1;
    goto LABEL_8;
  }
  v11 = ValidateHwnd(a2);
  v12 = v11;
  v144 = v11;
  if ( !v11 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v151[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v151;
  v151[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v10 = 1;
  v14 = 1;
LABEL_9:
  v138 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v141 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v18 = CalcWakeMask(a3, v15, WORD1(a5));
  v135 = v18;
  v145 = v18 & 0x1C07;
  if ( (v18 & 0x1C07) != 0 )
  {
    v16 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1392LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v18 & 7) != 7 )
  {
    if ( (v18 & 6) == 0 )
      goto LABEL_22;
    v16 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) )
      goto LABEL_22;
  }
  if ( v17 )
  {
    if ( *(_QWORD *)(v12 + 16) == gptiCurrent )
    {
      v19 = v12;
LABEL_21:
      xxxUpdateInputHangInfo(v19, 1LL);
    }
  }
  else if ( !a2 )
  {
    v19 = 0LL;
    goto LABEL_21;
  }
LABEL_22:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
  v22 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v22 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v23 = *(_QWORD *)(gptiCurrent + 416LL);
  v24 = gcSysExpunge;
  if ( *(_DWORD *)(v23 + 400) != gcSysExpunge )
  {
    *(_DWORD *)(v23 + 400) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent, gcSysExpunge, v21);
  }
  if ( (a5 & 1) != 0
    && (v18 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1200LL) & 0x80000) != 0
    && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & (unsigned __int16)v18) != 0 )
  {
    v25 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( !*(_QWORD *)(v25 + 56) && !*(_QWORD *)(v25 + 48) )
      TryAttachShellFrame(gptiCurrent, v24);
  }
  v26 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(gptiCurrent + 504LL)
    || (v27 = *(_QWORD *)(v26 + 64), v27 == gptiCurrent) && *(_QWORD *)(v26 + 72) == *(_QWORD *)(gptiCurrent + 568LL) )
  {
    v31 = 0LL;
    *(_QWORD *)(v26 + 64) = 0LL;
    v28 = 0LL;
  }
  else
  {
    v28 = *(_QWORD *)(v26 + 64);
    if ( !v27 || *(_DWORD *)(v27 + 888) )
    {
      v31 = 0LL;
    }
    else
    {
      GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
      v31 = 0LL;
      if ( GlobalValid )
      {
        *(_QWORD *)(v30 + 64) = 0LL;
        v28 = 0LL;
      }
    }
  }
  if ( v28 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 864LL) = 0;
  v143 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v32 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v32 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v32 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x80000u;
    }
  }
  v33 = v18 & 0xFFBF;
  v137 = v18 & 0xFFBF;
  v34 = ~(v18 & 0xFFBF);
  v155 = v34;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v140 = 0LL;
            *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
            if ( *(_QWORD *)(gptiCurrent + 448LL) == gpdeskRecalcQueueAttach )
            {
              gpdeskRecalcQueueAttach = 0LL;
              if ( *(_QWORD *)(gptiCurrent + 448LL) )
              {
                v35 = *(_QWORD *)(gptiCurrent + 456LL);
                if ( !*(_QWORD *)(v35 + 48) && !*(_QWORD *)(v35 + 56) )
                  zzzReattachThreads(2LL, 0LL, 0LL);
              }
            }
            v36 = *(_QWORD *)(gptiCurrent + 440LL);
            *(_WORD *)(gptiCurrent + 864LL) |= *(_WORD *)(v36 + 4) & v33;
            *(_WORD *)(v36 + 4) &= v34;
            v37 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40;
            j = v18 & *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
            if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
            {
              if ( v37 )
              {
                do
                  xxxReceiveMessage(gptiCurrent);
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
              }
            }
            else if ( v37 )
            {
              v9 |= 0x80u;
              v132 = v9;
              goto LABEL_194;
            }
            LOBYTE(j) = v145 != 0;
            if ( v145 != 0 && (v18 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1108LL) )
            {
              do
              {
                *(_DWORD *)(gptiCurrent + 1108LL) = 0;
                for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1072LL));
                      i;
                      i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1072LL)) )
                {
                  xxxNotifyCaptureChangeIfCaptured(i, v31, v28);
                }
              }
              while ( *(_DWORD *)(gptiCurrent + 1108LL) );
            }
            if ( *(_QWORD *)(gptiCurrent + 1448LL) && (v18 & 8) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              v41 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(j, v31) )
              {
                ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v41 = *ThreadWin32Thread;
              }
              v43 = 0;
              v147 = 0LL;
              v44 = 0;
              ZwSetIoCompletionEx(v41[176], v41[180], 0LL, 2LL, 0, 0LL);
              while ( 1 )
              {
                LOBYTE(v131) = 0;
                v45 = ZwRemoveIoCompletionEx(v41[176], &v152, 1LL, v146, &v147, v131);
                if ( v45 )
                {
                  if ( v45 == 258 )
                    goto LABEL_70;
                }
                else
                {
                  if ( v153 == 1 )
                  {
                    v44 = 1;
                    v43 = 0;
                    continue;
                  }
                  if ( v153 == 2 )
                    goto LABEL_70;
                  if ( !v153 && v41[181] )
                  {
                    v43 = v153 + 4;
                    xxxHandleCoreMessagingQueueCompletion((__int64)v41, &v152, 1LL, v46);
                  }
                }
                if ( v43 != 4 )
                {
LABEL_70:
                  if ( v44 )
                    ZwAssociateWaitCompletionPacket(v41[179], v41[176], v41[178], 0LL, 1LL, 0, 0LL, 0LL);
                  v18 = v135;
                  break;
                }
                v43 = 0;
              }
            }
            v47 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
            v48 = v18 & v47;
            if ( (v18 & v47) != 0 )
              break;
            v9 |= 0x100u;
            v132 = v9;
LABEL_194:
            v93 = *(_QWORD *)(gptiCurrent + 424LL);
            v57 = 0LL;
            if ( *(_QWORD *)(v93 + 64) == gptiCurrent )
            {
              *(_QWORD *)(v93 + 72) = 0LL;
              *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 64LL) = 0LL;
              **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
            }
            v94 = a6;
            if ( !a6 )
            {
              if ( !v143 )
              {
                v127 = PsGetCurrentProcessWin32Process(j);
                *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
                if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
                {
                  j = *(_QWORD *)(gptiCurrent + 608LL);
                  if ( *(_QWORD *)(j + 24) )
                  {
                    EtwTraceWakeInputIdle(0LL, gptiCurrent);
                    v57 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                    j = *(_QWORD *)(v57 + 32);
                    if ( j )
                    {
                      if ( j != -1 )
                      {
                        KeSetEvent((PRKEVENT)j, 1, 0);
                        ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                        j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                        *(_QWORD *)(j + 32) = -1LL;
                      }
                    }
                    else
                    {
                      *(_QWORD *)(v57 + 32) = -1LL;
                    }
                  }
                }
                else
                {
                  v128 = *(_QWORD *)(gptiCurrent + 416LL);
                  if ( !*(_QWORD *)(v128 + 328) )
                  {
                    *(_QWORD *)(v128 + 328) = gptiCurrent;
                    v128 = *(_QWORD *)(gptiCurrent + 416LL);
                  }
                  if ( *(_QWORD *)(v128 + 328) == gptiCurrent )
                  {
                    EtwTraceWakeInputIdle(0LL, gptiCurrent);
                    j = *(_QWORD *)(v127 + 16);
                    if ( j )
                    {
                      if ( j == -1 )
                        goto LABEL_345;
                      KeSetEvent((PRKEVENT)j, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(v127 + 16));
                    }
                    *(_QWORD *)(v127 + 16) = -1LL;
                  }
                }
LABEL_345:
                v129 = *(_DWORD *)(v127 + 12);
                if ( (v129 & 4) != 0 )
                {
                  *(_DWORD *)(v127 + 12) = v129 & 0xFFFFFFFB;
                  zzzCalcStartCursorHide(0LL, 0LL);
                }
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
                  xxxReceiveMessage(gptiCurrent);
              }
LABEL_349:
              v122 = a1;
LABEL_350:
              v10 = 0;
              goto LABEL_351;
            }
            v95 = 0;
            if ( v138 )
            {
              if ( (unsigned int)WaitMaskIncludesUserInput(v18, 0LL) && *(_QWORD *)(v12 + 16) == gptiCurrent )
              {
                v95 = 1;
                xxxUpdateInputHangInfo(v12, 0LL);
              }
              v96 = xxxRealSleepThread(v18, 0, 1, 0LL, 0LL);
              if ( v95 )
                xxxUpdateInputHangInfo(v144, 1LL);
LABEL_228:
              if ( !v96 )
              {
                v9 |= 0x10000u;
                goto LABEL_349;
              }
              v31 = 0LL;
              v9 = 0;
              v132 = 0;
              v12 = v144;
              v33 = v137;
              v34 = v155;
            }
            else
            {
              v139 = 0;
              v97 = *(_QWORD *)(gptiCurrent + 424LL);
              v98 = *(_QWORD *)(v97 + 72);
              v140 = *(struct tagQMSG **)(v97 + 64);
              if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) == 0
                || *(_DWORD *)(v97 + 392) <= 1u
                || (v99 = *(_QWORD *)(gptiCurrent + 456LL), *(_QWORD *)(v99 + 48))
                || *(_QWORD *)(v99 + 56)
                || IsAdaptiveQueueDetachExempted(gptiCurrent) )
              {
                v100 = 0;
              }
              else
              {
                v100 = 1;
                v95 = gdwMDAQTimeoutDefenseInDepth;
              }
              v101 = 0;
              if ( !v100 )
                v101 = v133;
              v133 = v101;
              v102 = v101;
              v103 = 0;
              if ( !v100 )
                v103 = v134;
              v134 = v103;
              v104 = v103;
              v105 = 0;
              if ( !v100 )
                v105 = v136;
              v136 = v105;
              v106 = v105;
              v96 = xxxSleepThread2(v135, v95, 1, 0, (enum SLEEP_STATUS *)&v139);
              v107 = 0;
              if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) != 0 )
              {
                j = *(_QWORD *)(gptiCurrent + 424LL);
                if ( *(_DWORD *)(j + 392) > 1u )
                {
                  v57 = gptiCurrent;
                  j = *(_QWORD *)(gptiCurrent + 456LL);
                  if ( !*(_QWORD *)(j + 48) && !*(_QWORD *)(j + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
                    v107 = 1;
                }
              }
              if ( !v107
                || (j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), j != *(_QWORD *)(gptiCurrent + 1376LL))
                && (v136 = v106, v134 = v104, v133 = v102, j)
                || (v136 = v106, v134 = v104, v133 = v102, !v139) )
              {
                v10 = 1;
                v9 = v132;
                v18 = v135;
                v94 = a6;
                goto LABEL_228;
              }
              v121 = SlowAppThreadInShellFrame(gptiCurrent, v140, v98, v139 == 2);
              if ( v121 )
                TryDetachShellFrame(gptiCurrent, v121, v139 == 2, 0LL);
              v136 = v106;
              v134 = v104;
              v133 = v102;
              v10 = 1;
              v9 = v132;
              v12 = v144;
              v18 = v135;
              v33 = v137;
              v34 = v155;
              v31 = 0LL;
            }
          }
          j = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(j + 64) == gptiCurrent && (*(_DWORD *)(j + 388) & 0x400) != 0 )
          {
            EtwTraceInputQueueNoRemoveLocker(j, v31);
            if ( (v48 & 0x3C07) != 0 )
            {
              v49 = xxxScanSysQueue(gptiCurrent, a1, v12, a3, v141, a5, v48 & 0x3C07, &v140);
              if ( v49 == 1 )
              {
                v58 = 2;
LABEL_233:
                v57 = 0LL;
                goto LABEL_234;
              }
              if ( !v49 && UnblockDeferredInput(gptiCurrent) )
                KeyboardInputTelemetry::LogHanging(gptiCurrent);
            }
            else if ( (v47 & 0x2000) != 0 )
            {
              v9 |= 0x200u;
              v132 = v9;
              goto LABEL_194;
            }
          }
          if ( (v48 & 8) != 0
            && (unsigned int)xxxReadPostMessage(
                               gptiCurrent,
                               (struct tagMSG *)a1,
                               (struct tagWND *)v12,
                               a3,
                               v141,
                               (struct _QMSG_POSTCHAR_FLAGS *)&v142,
                               a5 & 1) )
          {
            v58 = 1;
            goto LABEL_233;
          }
          if ( v12 == 1 )
          {
            v9 |= 0x400u;
            v132 = v9;
            goto LABEL_194;
          }
          if ( (v48 & 0x3C07) != 0 )
            break;
          if ( (v47 & 0x2000) != 0 )
          {
            v9 |= 0x800u;
            v132 = v9;
            goto LABEL_194;
          }
          v50 = a1;
LABEL_118:
          j = *(_QWORD *)(gptiCurrent + 440LL);
          v59 = *(_WORD *)(j + 6) & 0x40;
          if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
          {
            if ( v59 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                j = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
            }
          }
          else if ( v59 )
          {
            v9 |= 0x1000u;
            v132 = v9;
            goto LABEL_194;
          }
          LOWORD(v60) = *(_WORD *)(j + 6);
          if ( ((unsigned __int16)v18 & (unsigned __int16)v60) == 0 )
          {
            v9 |= 0x2000u;
            v132 = v9;
            goto LABEL_194;
          }
          if ( ((unsigned __int8)v18 & (unsigned __int8)v60 & 0x20) != 0 && (unsigned int)xxxDoPaint(v12, v50) )
          {
            v58 = 4;
            goto LABEL_233;
          }
          if ( v143 )
            goto LABEL_152;
          v61 = PsGetCurrentProcessWin32Process(j);
          *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v62 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
              v63 = *(struct _KEVENT **)(v62 + 32);
              if ( v63 )
              {
                if ( v63 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v63, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v62 + 32) = -1LL;
              }
            }
          }
          else
          {
            v64 = *(_QWORD *)(gptiCurrent + 416LL);
            if ( !*(_QWORD *)(v64 + 328) )
            {
              *(_QWORD *)(v64 + 328) = gptiCurrent;
              v64 = *(_QWORD *)(gptiCurrent + 416LL);
            }
            if ( *(_QWORD *)(v64 + 328) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v65 = *(struct _KEVENT **)(v61 + 16);
              if ( v65 )
              {
                if ( v65 == (struct _KEVENT *)-1LL )
                  goto LABEL_141;
                KeSetEvent(v65, 1, 0);
                ObfDereferenceObject(*(PVOID *)(v61 + 16));
              }
              *(_QWORD *)(v61 + 16) = -1LL;
            }
          }
LABEL_141:
          v66 = *(_DWORD *)(v61 + 12);
          if ( (v66 & 4) != 0 )
          {
            *(_DWORD *)(v61 + 12) = v66 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
          for ( j = *(_QWORD *)(gptiCurrent + 440LL); (*(_BYTE *)(j + 6) & 0x40) != 0; j = *(_QWORD *)(gptiCurrent + 440LL) )
            xxxReceiveMessage(gptiCurrent);
          v67 = *(_WORD *)(j + 6) & 0x40;
          if ( ((unsigned __int8)v18 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
          {
            if ( v67 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                j = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
            }
          }
          else if ( v67 )
          {
            v9 |= 0x4000u;
            v132 = v9;
            goto LABEL_194;
          }
          v60 = *(unsigned __int16 *)(j + 6);
          if ( (v60 & v18) == 0 )
          {
            v9 |= 0x8000u;
            v132 = v9;
            goto LABEL_194;
          }
LABEL_152:
          if ( ((unsigned __int8)v18 & (unsigned __int8)v60 & 0x10) == 0 )
            goto LABEL_194;
          v68 = gptiCurrent + 1184LL;
          for ( k = *(_QWORD **)(gptiCurrent + 1184LL); ; k = (_QWORD *)*k )
          {
            if ( k == (_QWORD *)v68 )
            {
              v10 = 1;
              goto LABEL_194;
            }
            v70 = (LARGE_INTEGER *)(k - 7);
            if ( !v12 || v12 == k[4] || (unsigned int)IsChild(v12) )
              break;
          }
          TimerStatistics((const struct tagTIMER *)(k - 7));
          HighPart = v70[16].HighPart;
          if ( v70[16].LowPart == HighPart )
            v70[16].LowPart = HighPart;
          if ( *(_DWORD *)(gptiCurrent + 816LL) < gUserPostMessageLimit )
          {
            v73 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
            v75 = v73;
            if ( v73 )
            {
              memset(v73, 0, 0xA0uLL);
              v76 = 8;
              if ( *(_DWORD *)(gptiCurrent + 820LL) != 2 )
                v76 = 4;
              v75[12].HighPart |= v76;
              v77 = *(LARGE_INTEGER ***)(gptiCurrent + 808LL);
              if ( v77 )
              {
                *v77 = v75;
                v75[1] = *(LARGE_INTEGER *)(gptiCurrent + 808LL);
              }
              else
              {
                *(_QWORD *)(gptiCurrent + 800LL) = v75;
              }
              *(_QWORD *)(gptiCurrent + 808LL) = v75;
              ++*(_DWORD *)(gptiCurrent + 816LL);
              QuadPart = (InputTransform *)v70[11].QuadPart;
              if ( QuadPart )
              {
                v79 = *(_DWORD *)(*((_QWORD *)QuadPart + 5) + 288LL);
              }
              else
              {
                v80 = *(_QWORD *)(gptiCurrent + 424LL);
                v81 = *(_QWORD *)(v80 + 120);
                if ( v81 )
                  v82 = *(_QWORD *)(v81 + 16);
                else
                  v82 = *(_QWORD *)(v80 + 96);
                v79 = *(_DWORD *)(*(_QWORD *)(v82 + 416) + 280LL);
              }
              if ( (v70[6].LowPart & 2) == 0 || (v83.QuadPart = 280LL, !v70[4].QuadPart) )
                v83 = v70[4];
              v84 = 280;
              if ( (v70[6].LowPart & 2) == 0 )
                v84 = 275;
              StoreQMessage(v75, QuadPart, v84, v70[12], v83, 0, 0LL, 0, 0LL, 0, 0LL, v79, 0LL, 0LL);
              if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
              {
                v28 = 264LL;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x108u;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x108u;
                if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) & 0x108) != 0 )
                  KeSetEvent(*(PRKEVENT *)(gptiCurrent + 720LL), 2, 0);
              }
            }
            else
            {
              UserSetLastError(8LL, v74);
            }
            v18 = v135;
          }
          else
          {
            UserSetLastError(1816LL, v71);
          }
          v70[6].LowPart &= ~1u;
          v85 = v70[3];
          v86 = (_QWORD *)*k;
          v87 = (_QWORD *)k[1];
          if ( *(_QWORD **)(*k + 8LL) != k || (_QWORD *)*v87 != k )
            __fastfail(3u);
          *v87 = v86;
          v86[1] = v87;
          if ( (*(_DWORD *)(v85.QuadPart + 596))-- == 1 )
            *(_WORD *)(*(_QWORD *)(v85.QuadPart + 440) + 6LL) &= ~0x10u;
          v89 = v70 + 9;
          v90 = v89->QuadPart;
          v91 = (LARGE_INTEGER **)v89[1].QuadPart;
          if ( *(LARGE_INTEGER **)(v89->QuadPart + 8) != v89 || *v91 != v89 )
            __fastfail(3u);
          *v91 = (LARGE_INTEGER *)v90;
          *(_QWORD *)(v90 + 8) = v91;
          v92 = (LARGE_INTEGER **)gtmrListHead[1];
          if ( *v92 != (LARGE_INTEGER *)gtmrListHead[0] )
            __fastfail(3u);
          *v89 = (LARGE_INTEGER)gtmrListHead[0];
          v89[1].QuadPart = (LONGLONG)v92;
          *v92 = v89;
          gtmrListHead[1] = v89;
          v9 |= 8u;
          v132 = v9;
          v10 = 1;
          v33 = v137;
          v34 = v155;
          v31 = 0LL;
        }
        v50 = a1;
        v51 = xxxScanSysQueue(gptiCurrent, a1, v12, a3, v141, a5, v48 & 0x3C07, &v140);
        if ( v51 != 2 )
          break;
        if ( !(unsigned int)IsShellFrameHangResilient(gptiCurrent) || (v48 & 1) == 0 || !a6 )
          goto LABEL_118;
        v52 = 0;
        if ( v136 )
          v52 = v133;
        v28 = v52;
        v133 = v52;
        v53 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v136 )
          v53 = v134;
        v134 = v53;
        v54 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v136 )
          v54 = v136;
        v136 = v54;
        v55 = v54;
        v56 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v54;
        if ( v56 >= 0xFA )
        {
          v136 = v54;
          if ( v53 == v54 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v28, v56);
            v134 = 0;
            v136 = v55;
            v28 = v133;
          }
          goto LABEL_118;
        }
        xxxSleepThread2(v18, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v139);
        ++v133;
        v33 = v137;
        v34 = v155;
        v31 = 0LL;
      }
      v57 = 0LL;
      v134 = 0;
      v133 = 0;
      v136 = 0;
      if ( v51 != 1 )
        goto LABEL_118;
      v58 = 2;
LABEL_234:
      v9 |= v58;
      v132 = v9;
      j = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)j == 595 && *(_QWORD *)(a1 + 24) == -1LL )
        v108 = -1LL;
      else
        v108 = 0LL;
      v109 = ((unsigned int)(j - 571) <= 1
           || ((unsigned int)(j - 577) <= 3 || (unsigned int)(j - 581) <= 5 || (unsigned int)(j - 593) <= 2)
           && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v108, *(_WORD *)(a1 + 16)))
          && (*(_DWORD *)(gptiCurrent + 1200LL) & 0x2000) == 0
          && !(unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
      v28 = a5 & 1;
      if ( ((a5 & 1) == 0 || !v140 || !*(_QWORD *)(gptiCurrent + 1224LL)) && !v109 )
      {
        if ( (a5 & 1) == 0 )
          goto LABEL_268;
        if ( *(_DWORD *)(a1 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1312LL) & 1) != 0 )
        {
          v57 = v142;
          if ( (v142 & 1) != 0 )
          {
            v110 = xxxKeyboardCorrectionCallout(a1);
            v28 = a5 & 1;
            if ( v110 == 1296 )
            {
              *(_DWORD *)(a1 + 8) = 0;
              *(_QWORD *)(a1 + 16) = 0LL;
              *(_QWORD *)(a1 + 24) = 0LL;
            }
          }
        }
      }
      if ( !(_DWORD)v28 )
        goto LABEL_268;
      v111 = *(_DWORD *)(a1 + 8);
      if ( v111 == 258
        || (unsigned int)(v111 - 578) <= 5 && (v57 = 51LL, _bittest((const int *)&v57, v111 - 578))
        || (j = 49152LL, (unsigned __int16)v111 >= 0xC000u) )
      {
        v112 = xxxCallCtfHook(3, 0, (unsigned int)a5, a1);
        v28 = a5 & 1;
        if ( v112 )
        {
          if ( *(_DWORD *)(a1 + 8) == 258 )
          {
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0LL;
            *(_QWORD *)(a1 + 24) = 0LL;
          }
        }
      }
      if ( !(_DWORD)v28 || !v140 || !*(_QWORD *)(gptiCurrent + 1224LL) )
      {
LABEL_268:
        if ( !v109 )
        {
          v113 = *(__int64 **)(gptiCurrent + 456LL);
          j = *v113;
          v57 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v113 + 16));
          if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*v113 + 16)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, a1, 3);
            v28 = a5 & 1;
          }
        }
      }
      if ( (_DWORD)v28 )
      {
        v114 = *(_DWORD *)(gptiCurrent + 1104LL);
        if ( v114 )
        {
          if ( word_1C0326C20 && qword_1C0326C28 == gptiCurrent && dword_1C0326C24 == v114 )
          {
            ForceCompletePendingPromotion();
            xxxProcessMousePromotionQueue();
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 1104LL) = 0;
          }
        }
        v115 = *(_DWORD *)(a1 + 8);
        if ( v115 == 583
          && (*(_WORD *)(a1 + 18) & 0x2000) != 0
          && word_1C0326C20
          && word_1C0326C20 == *(_WORD *)(a1 + 16)
          && qword_1C0326C28 == gptiCurrent )
        {
          *(_DWORD *)(gptiCurrent + 1104LL) = dword_1C0326C24;
          v115 = *(_DWORD *)(a1 + 8);
        }
        v116 = 0;
        if ( ((unsigned int)(v115 - 577) <= 3 || (unsigned int)(v115 - 581) <= 0x12 && v115 != 589) && v115 != 595 )
          v116 = *(_WORD *)(a1 + 16);
        CTouchProcessor::UpdateThreadPointerList(
          gpTouchProcessor,
          (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1072LL),
          v116);
        v28 = a5 & 1;
      }
      v117 = (unsigned int *)v140;
      if ( !v140 )
        break;
      v118 = *((_DWORD *)v140 + 25);
      if ( (v118 & 0x100) == 0 )
        break;
      if ( !(_DWORD)v28 || !*(_QWORD *)(gptiCurrent + 1224LL) )
      {
        *((_DWORD *)v140 + 25) = v118 & 0xFFFFFEFF;
        break;
      }
      EtwTraceBeginDelegateInputCallback(v140, a1);
      v119 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1224LL), a1, *(_QWORD *)(gptiCurrent + 1232LL));
      EtwTraceEndDelegateInputCallback(v117, a1);
      v117[25] &= ~0x100u;
      v120 = v117[25];
      if ( (v120 & 0x80u) == 0 )
      {
        if ( (v120 & 0x20) != 0 )
          _HandleDelegatedInputWorker(gptiCurrent, v119, v140);
      }
      else
      {
        FreeQEntry(v117);
      }
      v9 = 0x20000;
      v132 = 0x20000;
      v33 = v137;
      v34 = v155;
      v31 = 0LL;
    }
    if ( !v109 )
      break;
    xxxClientCallDefaultInputHandler(a1, v57, v28);
    v148 = 0uLL;
    v149 = 0uLL;
    v150 = 0uLL;
    *(_OWORD *)a1 = 0uLL;
    *(_OWORD *)(a1 + 16) = v149;
    *(_OWORD *)(a1 + 32) = v150;
    v33 = v137;
    v34 = v155;
    v31 = 0LL;
  }
  v94 = a6;
  v122 = a1;
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_350;
  }
  if ( (a5 & 1) != 0 )
  {
    v123 = *(_QWORD *)(gptiCurrent + 1048LL);
    if ( v123 )
    {
      LOBYTE(v57) = 18;
      v124 = HMValidateHandleNoRip(v123, v57, v28);
      if ( v124 )
        FreeHidData(v124);
      *(_QWORD *)(gptiCurrent + 1048LL) = 0LL;
    }
    v125 = *(_QWORD *)(gptiCurrent + 1056LL);
    if ( v125 )
    {
      FreeTouchInputInfo(v125, 1LL);
      *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
    }
    j = *(_QWORD *)(gptiCurrent + 1064LL);
    if ( j )
    {
      FreeGestureInfo(j, 1LL);
      *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
    }
    v126 = *(_DWORD *)(a1 + 8);
    if ( v126 == 255 )
    {
      if ( *(_QWORD *)(a1 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 1048LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( v126 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 20) )
    {
      *(_QWORD *)(gptiCurrent + 1056LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 21) )
    {
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_351:
  if ( v138 )
    ThreadUnlock1(j, v57, v28);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v10 )
    {
      if ( *(_DWORD *)(v122 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) != 0 )
      {
        v130 = *(_DWORD **)(gptiCurrent + 664LL);
        if ( v130 )
        {
          if ( (v130[49] & 0x100000) != 0 )
          {
            if ( v130[82] )
            {
              v130[83] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v130[82];
              ++v130[84];
              v130[82] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1152LL) = *(_QWORD *)v122;
      *(_DWORD *)(gptiCurrent + 1160LL) = *(_DWORD *)(v122 + 8);
      *(_QWORD *)(gptiCurrent + 1168LL) = *(_QWORD *)(v122 + 16);
    }
  }
  else
  {
    v10 = 0;
  }
  EtwTraceBeginAppMessageProcessing(v94, v9, v122);
  return v10;
}
