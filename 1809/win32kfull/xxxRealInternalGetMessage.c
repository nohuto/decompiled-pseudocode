/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0032740
 * Callers:
 *     NtUserGetMessage @ 0x1C0031460 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0032570 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C0109660 (NtUserRealInternalGetMessage.c)
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z.c)
 *     FreeHidData @ 0x1C0004B20 (FreeHidData.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C000C028 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     zzzCalcStartCursorHide @ 0x1C0017CF0 (zzzCalcStartCursorHide.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00262E4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     CalcWakeMask @ 0x1C0033E50 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0034150 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@_N@Z @ 0x1C0034310 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@_N@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxDoSysExpunge @ 0x1C00B7EE4 (xxxDoSysExpunge.c)
 *     DoTimer @ 0x1C00D3BB8 (DoTimer.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     IsShellFrameHangResilient @ 0x1C00D7C8C (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C010FB00 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z.c)
 *     FreeQEntry @ 0x1C011D664 (FreeQEntry.c)
 *     WaitMaskIncludesUserInput @ 0x1C0126C68 (WaitMaskIncludesUserInput.c)
 *     SlowAppThreadInShellFrame @ 0x1C012AEEC (SlowAppThreadInShellFrame.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01BB270 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01CD020 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01DC25C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01DC87C (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01DCB88 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F155C (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F1F8C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0206618 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C0206790 (xxxClientCallDelegateThread.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C0228048 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
  unsigned int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // r11d
  struct tagWND *v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int16 v31; // di
  __int16 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int16 v35; // ax
  struct tagWND *k; // rcx
  unsigned __int64 j; // rax
  int v38; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v40; // rdi
  _QWORD **ThreadWin32Thread; // rax
  int v42; // r14d
  int v43; // eax
  int v44; // esi
  int v45; // r15d
  __int16 v46; // r14
  __int64 v47; // rax
  unsigned int v48; // edi
  int v49; // eax
  struct tagWND *v50; // r14
  int v51; // r12d
  __int64 v52; // rcx
  int v53; // eax
  char v54; // si
  __int64 *v55; // rdi
  int v56; // eax
  unsigned int v57; // edi
  __int64 v58; // r15
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // r14d
  unsigned int v62; // r9d
  int v63; // eax
  int v64; // edi
  unsigned int v65; // ecx
  int v66; // edi
  int v67; // eax
  unsigned __int16 v68; // ax
  int v69; // edi
  struct tagWND *v70; // r14
  __int64 v71; // rdi
  __int64 v72; // rdx
  struct _KEVENT *v73; // rcx
  __int64 v74; // rax
  struct _KEVENT *v75; // rcx
  int v76; // eax
  unsigned __int16 v77; // ax
  __int64 v78; // rcx
  __int64 v79; // r13
  __int64 v80; // rax
  int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // esi
  unsigned int v84; // eax
  unsigned int v85; // r14d
  int v86; // eax
  int v87; // r15d
  BOOL v88; // eax
  int v89; // ecx
  unsigned __int64 v90; // r8
  int v91; // r8d
  int v92; // eax
  int v93; // eax
  int v94; // eax
  __int64 v95; // rax
  int v96; // eax
  int v97; // ecx
  unsigned __int16 v98; // r8
  bool v99; // r14
  int v100; // eax
  unsigned int v101; // edi
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdi
  __int64 v109; // rax
  int v110; // eax
  _DWORD *v111; // r8
  int v112; // [rsp+28h] [rbp-160h]
  int v113; // [rsp+40h] [rbp-148h]
  __int16 i; // [rsp+44h] [rbp-144h]
  unsigned int v115; // [rsp+4Ch] [rbp-13Ch]
  int v116; // [rsp+50h] [rbp-138h]
  unsigned int v117; // [rsp+54h] [rbp-134h]
  unsigned int v118; // [rsp+58h] [rbp-130h]
  int v119; // [rsp+5Ch] [rbp-12Ch]
  struct tagQMSG *v120; // [rsp+60h] [rbp-128h] BYREF
  int v121; // [rsp+68h] [rbp-120h] BYREF
  struct tagWND *v122; // [rsp+70h] [rbp-118h]
  unsigned int v123; // [rsp+78h] [rbp-110h]
  unsigned int v124; // [rsp+7Ch] [rbp-10Ch] BYREF
  int v125; // [rsp+80h] [rbp-108h]
  int v126; // [rsp+90h] [rbp-F8h]
  _BYTE v127[12]; // [rsp+A0h] [rbp-E8h] BYREF
  _BYTE v128[12]; // [rsp+ACh] [rbp-DCh] BYREF
  __int64 v129; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE v130[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v131[8]; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-B8h]
  __int128 v133; // [rsp+D8h] [rbp-B0h]
  __int128 v134; // [rsp+E8h] [rbp-A0h]
  __int128 v135; // [rsp+F8h] [rbp-90h]
  _QWORD v136[3]; // [rsp+118h] [rbp-70h] BYREF
  ULONG64 v137; // [rsp+130h] [rbp-58h] BYREF
  int v138; // [rsp+138h] [rbp-50h]
  __int16 v140; // [rsp+198h] [rbp+10h]

  v124 = 0;
  v116 = 0;
  v115 = 0;
  v117 = 0;
  v9 = 0;
  v113 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v10 = 1;
    a2 = 1LL;
LABEL_8:
    v12 = a2;
    v122 = (struct tagWND *)a2;
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
  v122 = (struct tagWND *)v11;
  if ( !v11 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v136[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v136;
  v136[1] = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v10 = 1;
  v14 = 1;
LABEL_9:
  v119 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v123 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v17 = CalcWakeMask(a3, v15, WORD1(a5));
  v118 = v17;
  v126 = v17 & 0x1C07;
  if ( (v17 & 0x1C07) != 0 )
  {
    v16 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1384LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v17 & 7) != 7 )
  {
    if ( (v17 & 6) == 0 )
      goto LABEL_22;
    v16 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
      goto LABEL_22;
  }
  if ( v18 )
  {
    if ( *(_QWORD *)(v12 + 16) == gptiCurrent )
    {
      v19 = (struct tagWND *)v12;
LABEL_21:
      xxxUpdateInputHangInfo(v19);
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
  v23 = *(_QWORD *)(gptiCurrent + 424LL);
  v24 = gcSysExpunge;
  if ( *(_DWORD *)(v23 + 408) != gcSysExpunge )
  {
    *(_DWORD *)(v23 + 408) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 412LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent, gcSysExpunge, v21);
  }
  if ( (a5 & 1) != 0
    && (v17 & 0x1CBF) != 0
    && (*(_DWORD *)(gptiCurrent + 1208LL) & 0x80000) != 0
    && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & (unsigned __int16)v17) != 0 )
  {
    v25 = *(_QWORD *)(gptiCurrent + 464LL);
    if ( !*(_QWORD *)(v25 + 56) && !*(_QWORD *)(v25 + 48) )
      TryAttachShellFrame(gptiCurrent, v24);
  }
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || (v27 = *(_QWORD *)(v26 + 64), v27 == gptiCurrent) && *(_QWORD *)(v26 + 72) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    *(_QWORD *)(v26 + 64) = 0LL;
    v28 = 0LL;
  }
  else
  {
    v28 = *(_QWORD *)(v26 + 64);
    if ( v27 && !*(_DWORD *)(v27 + 896) && PhkFirstGlobalValid(gptiCurrent, 1LL, v28) )
    {
      *(_QWORD *)(v29 + 64) = 0LL;
      v28 = 0LL;
    }
  }
  if ( v28 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v125 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v30 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v30 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v30 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v31 = v17 & 0xFFBF;
  v140 = v17 & 0xFFBF;
  v32 = ~(v17 & 0xFFBF);
  for ( i = v32; ; v32 = i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v120 = 0LL;
            *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
            if ( *(_QWORD *)(gptiCurrent + 456LL) == gpdeskRecalcQueueAttach )
            {
              gpdeskRecalcQueueAttach = 0LL;
              if ( *(_QWORD *)(gptiCurrent + 456LL) )
              {
                v33 = *(_QWORD *)(gptiCurrent + 464LL);
                if ( !*(_QWORD *)(v33 + 48) && !*(_QWORD *)(v33 + 56) )
                  zzzReattachThreads(2LL, 0LL, 0LL);
              }
            }
            v34 = *(_QWORD *)(gptiCurrent + 448LL);
            *(_WORD *)(gptiCurrent + 872LL) |= *(_WORD *)(v34 + 4) & v31;
            *(_WORD *)(v34 + 4) &= v32;
            v35 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40;
            k = (struct tagWND *)(v17 & *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL));
            if ( ((unsigned __int8)v17 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 )
            {
              if ( v35 )
              {
                do
                  xxxReceiveMessage(gptiCurrent);
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 );
              }
            }
            else if ( v35 )
            {
              v9 |= 0x80u;
              v113 = v9;
              goto LABEL_75;
            }
            LOBYTE(k) = v126 != 0;
            if ( v126 != 0 && (v17 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1116LL) )
            {
              do
              {
                *(_DWORD *)(gptiCurrent + 1116LL) = 0;
                for ( j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
                      j;
                      j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL)) )
                {
                  xxxNotifyCaptureChangeIfCaptured(j, (struct tagWND *)v24, v38);
                }
              }
              while ( *(_DWORD *)(gptiCurrent + 1116LL) );
            }
            if ( *(_QWORD *)(gptiCurrent + 1440LL) && (v17 & 8) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              v40 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(k, v24) )
              {
                ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                  v40 = *ThreadWin32Thread;
              }
              v129 = 0LL;
              v42 = 0;
              ZwSetIoCompletionEx(v40[175], v40[179], 0LL, 2LL, 0, 0LL);
              while ( 1 )
              {
                LOBYTE(v112) = 0;
                v43 = ZwRemoveIoCompletionEx(v40[175], &v137, 1LL, v128, &v129, v112);
                v44 = 0;
                if ( v43 )
                {
                  if ( v43 == 258 )
                    goto LABEL_69;
                }
                else
                {
                  if ( v138 == 1 )
                  {
                    v42 = 1;
                    continue;
                  }
                  if ( v138 == 2 )
                    goto LABEL_69;
                  if ( !v138 && v40[180] )
                  {
                    v44 = v138 + 4;
                    xxxHandleCoreMessagingQueueCompletion((__int64)v40, &v137, 1);
                  }
                }
                if ( v44 != 4 )
                {
LABEL_69:
                  if ( v42 )
                    ZwAssociateWaitCompletionPacket(v40[178], v40[175], v40[177], 0LL, 1LL, 0, 0LL, 0LL);
                  v17 = v118;
                  break;
                }
              }
            }
            v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
            v46 = v17 & v45;
            if ( (v17 & v45) != 0 )
              break;
            v9 |= 0x100u;
LABEL_74:
            v113 = v9;
LABEL_75:
            v47 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( *(_QWORD *)(v47 + 64) == gptiCurrent )
            {
              *(_QWORD *)(v47 + 72) = 0LL;
              *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = 0LL;
              **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
            }
            if ( !a6 )
            {
              if ( !v125 )
              {
                v108 = PsGetCurrentProcessWin32Process(k);
                *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
                if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
                {
                  k = *(struct tagWND **)(gptiCurrent + 616LL);
                  if ( *((_QWORD *)k + 3) )
                  {
                    EtwTraceWakeInputIdle(0LL, gptiCurrent);
                    v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                    k = *(struct tagWND **)(v24 + 32);
                    if ( k )
                    {
                      if ( k != (struct tagWND *)-1LL )
                      {
                        KeSetEvent((PRKEVENT)k, 1, 0);
                        ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                        k = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                        *((_QWORD *)k + 4) = -1LL;
                      }
                    }
                    else
                    {
                      *(_QWORD *)(v24 + 32) = -1LL;
                    }
                  }
                }
                else
                {
                  v109 = *(_QWORD *)(gptiCurrent + 424LL);
                  if ( !*(_QWORD *)(v109 + 336) )
                  {
                    *(_QWORD *)(v109 + 336) = gptiCurrent;
                    v109 = *(_QWORD *)(gptiCurrent + 424LL);
                  }
                  if ( *(_QWORD *)(v109 + 336) == gptiCurrent )
                  {
                    EtwTraceWakeInputIdle(0LL, gptiCurrent);
                    k = *(struct tagWND **)(v108 + 16);
                    if ( k )
                    {
                      if ( k == (struct tagWND *)-1LL )
                        goto LABEL_313;
                      KeSetEvent((PRKEVENT)k, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(v108 + 16));
                    }
                    *(_QWORD *)(v108 + 16) = -1LL;
                  }
                }
LABEL_313:
                v110 = *(_DWORD *)(v108 + 12);
                if ( (v110 & 4) != 0 )
                {
                  *(_DWORD *)(v108 + 12) = v110 & 0xFFFFFFFB;
                  zzzCalcStartCursorHide(0LL, 0LL);
                }
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 )
                  xxxReceiveMessage(gptiCurrent);
              }
LABEL_317:
              v10 = 0;
              v58 = a1;
              v99 = a5 & 1;
              goto LABEL_318;
            }
            v48 = 0;
            if ( v119 )
            {
              v49 = WaitMaskIncludesUserInput(v17);
              v50 = v122;
              if ( v49 && *((_QWORD *)v122 + 2) == gptiCurrent )
              {
                v48 = 1;
                xxxUpdateInputHangInfo(v122);
              }
              v51 = xxxRealSleepThread(v17, 0, 1, 0, 0LL);
              if ( v48 )
                xxxUpdateInputHangInfo(v50);
LABEL_201:
              if ( !v51 )
              {
                v9 |= 0x10000u;
                goto LABEL_317;
              }
              v9 = 0;
              v113 = 0;
              v10 = 1;
              v31 = v140;
              v32 = i;
            }
            else
            {
              v121 = 0;
              v78 = *(_QWORD *)(gptiCurrent + 432LL);
              v79 = *(_QWORD *)(v78 + 72);
              v132 = *(_QWORD *)(v78 + 64);
              if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) == 0
                || *(_DWORD *)(v78 + 392) <= 1u
                || (v80 = *(_QWORD *)(gptiCurrent + 464LL), *(_QWORD *)(v80 + 48))
                || *(_QWORD *)(v80 + 56)
                || (unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
              {
                v81 = 0;
              }
              else
              {
                v81 = 1;
                v48 = gdwMDAQTimeoutDefenseInDepth;
              }
              v82 = 0;
              if ( !v81 )
                v82 = v117;
              v117 = v82;
              v83 = v82;
              v84 = 0;
              if ( !v81 )
                v84 = v115;
              v115 = v84;
              v85 = v84;
              v86 = 0;
              if ( !v81 )
                v86 = v116;
              v116 = v86;
              v87 = v86;
              v51 = xxxSleepThread2(v118, v48, 1, 0, (enum SLEEP_STATUS *)&v121);
              v88 = 0;
              if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) != 0 )
              {
                k = *(struct tagWND **)(gptiCurrent + 432LL);
                if ( *((_DWORD *)k + 98) > 1u )
                {
                  v24 = gptiCurrent;
                  k = *(struct tagWND **)(gptiCurrent + 464LL);
                  if ( !*((_QWORD *)k + 6)
                    && !*((_QWORD *)k + 7)
                    && !(unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
                  {
                    v88 = 1;
                  }
                }
              }
              if ( !v88
                || (k = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL),
                    k != *(struct tagWND **)(gptiCurrent + 1368LL))
                && (v116 = v87, v115 = v85, v117 = v83, k)
                || (v116 = v87, v115 = v85, v117 = v83, !v121) )
              {
                v9 = v113;
                v17 = v118;
                goto LABEL_201;
              }
              v103 = SlowAppThreadInShellFrame(gptiCurrent, v132, v79, v121 == 2);
              if ( v103 )
                TryDetachShellFrame(gptiCurrent, v103, v121 == 2, 0LL);
              v116 = v87;
              v115 = v85;
              v117 = v83;
              v10 = 1;
              v9 = v113;
              v17 = v118;
              v31 = v140;
              v32 = i;
            }
          }
          v52 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( *(_QWORD *)(v52 + 64) == gptiCurrent && (*(_DWORD *)(v52 + 388) & 0x400) != 0 )
          {
            EtwTraceInputQueueNoRemoveLocker();
            if ( (v46 & 0x3C07) != 0 )
            {
              v53 = xxxScanSysQueue(gptiCurrent, a1, v122, a3, v123, a5, v46 & 0x3C07, &v120);
              if ( v53 == 1 )
              {
                v67 = 2;
                v58 = a1;
LABEL_206:
                v66 = 0;
                goto LABEL_207;
              }
              if ( !v53 )
              {
                v54 = 0;
                if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x10000000) != 0 )
                {
                  v55 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 24LL);
                  if ( !v55 )
                    goto LABEL_107;
                  do
                  {
                    v56 = *((_DWORD *)v55 + 25);
                    if ( ((v56 & 0x10000) != 0 || (v56 & 0x20000) != 0) && v55[13] == gptiCurrent )
                      break;
                    v55 = (__int64 *)*v55;
                  }
                  while ( v55 );
                  if ( !v55 || KeyboardInputTelemetry::GetKeyboardInputLatency(v55[16]) > 0x2710 )
                  {
LABEL_107:
                    v54 = 1;
                    if ( v55 )
                      HandleDeferredInput(gptiCurrent, 1, 1);
                    else
                      *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x10000000u;
                  }
                }
                if ( v54 )
                  KeyboardInputTelemetry::LogHanging(gptiCurrent);
                v17 = v118;
              }
            }
            else if ( (v45 & 0x2000) != 0 )
            {
              v9 |= 0x200u;
              goto LABEL_74;
            }
          }
          v57 = v123;
          if ( (v46 & 8) != 0
            && (unsigned int)xxxReadPostMessage(
                               gptiCurrent,
                               (struct tagMSG *)a1,
                               v122,
                               a3,
                               v123,
                               (struct _QMSG_POSTCHAR_FLAGS *)&v124,
                               a5 & 1) )
          {
            v67 = 1;
            v58 = a1;
            goto LABEL_206;
          }
          k = v122;
          if ( v122 == (struct tagWND *)1 )
          {
            v9 |= 0x400u;
            goto LABEL_74;
          }
          if ( (v46 & 0x3C07) != 0 )
            break;
          if ( (v45 & 0x2000) != 0 )
          {
            v9 |= 0x800u;
            goto LABEL_74;
          }
          v58 = a1;
LABEL_139:
          k = *(struct tagWND **)(gptiCurrent + 448LL);
          v68 = *((_WORD *)k + 3);
          v24 = v68;
          LOWORD(v24) = v68 & 0x40;
          if ( ((unsigned __int8)v17 & (unsigned __int8)v68 & 0x40) != 0 )
          {
            if ( (v68 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(struct tagWND **)(gptiCurrent + 448LL);
              }
              while ( (*((_BYTE *)k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v68 & 0x40) != 0 )
          {
            v9 |= 0x1000u;
            goto LABEL_74;
          }
          LOWORD(v69) = *((_WORD *)k + 3);
          if ( ((unsigned __int16)v17 & (unsigned __int16)v69) == 0 )
          {
            v9 |= 0x2000u;
            goto LABEL_74;
          }
          v70 = v122;
          if ( ((unsigned __int8)v17 & (unsigned __int8)v69 & 0x20) != 0
            && (unsigned int)xxxDoPaint((__int64 *)v122, v58) )
          {
            v67 = 4;
            goto LABEL_206;
          }
          if ( v125 )
            goto LABEL_173;
          v71 = PsGetCurrentProcessWin32Process(k);
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v72 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
              v73 = *(struct _KEVENT **)(v72 + 32);
              if ( v73 )
              {
                if ( v73 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v73, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v72 + 32) = -1LL;
              }
            }
          }
          else
          {
            v74 = *(_QWORD *)(gptiCurrent + 424LL);
            if ( !*(_QWORD *)(v74 + 336) )
            {
              *(_QWORD *)(v74 + 336) = gptiCurrent;
              v74 = *(_QWORD *)(gptiCurrent + 424LL);
            }
            if ( *(_QWORD *)(v74 + 336) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v75 = *(struct _KEVENT **)(v71 + 16);
              if ( v75 )
              {
                if ( v75 == (struct _KEVENT *)-1LL )
                  goto LABEL_162;
                KeSetEvent(v75, 1, 0);
                ObfDereferenceObject(*(PVOID *)(v71 + 16));
              }
              *(_QWORD *)(v71 + 16) = -1LL;
            }
          }
LABEL_162:
          v76 = *(_DWORD *)(v71 + 12);
          if ( (v76 & 4) != 0 )
          {
            *(_DWORD *)(v71 + 12) = v76 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
          for ( k = *(struct tagWND **)(gptiCurrent + 448LL);
                (*((_BYTE *)k + 6) & 0x40) != 0;
                k = *(struct tagWND **)(gptiCurrent + 448LL) )
          {
            xxxReceiveMessage(gptiCurrent);
          }
          v77 = *((_WORD *)k + 3);
          v24 = v77;
          LOWORD(v24) = v77 & 0x40;
          if ( ((unsigned __int8)v17 & (unsigned __int8)v77 & 0x40) != 0 )
          {
            if ( (v77 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(struct tagWND **)(gptiCurrent + 448LL);
              }
              while ( (*((_BYTE *)k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v77 & 0x40) != 0 )
          {
            v9 |= 0x4000u;
            goto LABEL_74;
          }
          v69 = *((unsigned __int16 *)k + 3);
          if ( (v69 & v17) == 0 )
          {
            v9 |= 0x8000u;
            goto LABEL_74;
          }
LABEL_173:
          if ( ((unsigned __int8)v17 & (unsigned __int8)v69 & 0x10) == 0 || !(unsigned int)DoTimer(v70) )
            goto LABEL_75;
          v9 |= 8u;
          v113 = v9;
          v31 = v140;
          v32 = i;
        }
        v58 = a1;
        v59 = xxxScanSysQueue(gptiCurrent, a1, v122, a3, v57, a5, v46 & 0x3C07, &v120);
        if ( v59 != 2 )
          break;
        if ( !(unsigned int)IsShellFrameHangResilient(gptiCurrent) || (v46 & 1) == 0 || !a6 )
          goto LABEL_139;
        v60 = 0;
        if ( v116 )
          v60 = v117;
        v61 = v60;
        v117 = v60;
        v62 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v116 )
          v62 = v115;
        v115 = v62;
        v63 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( v116 )
          v63 = v116;
        v116 = v63;
        v64 = v63;
        v65 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v63;
        if ( v65 >= 0xFA )
        {
          v116 = v63;
          if ( v62 == v63 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v61, v65);
            v115 = 0;
            v116 = v64;
            v117 = v61;
          }
          goto LABEL_139;
        }
        xxxSleepThread2(v17, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v121);
        v117 = v61 + 1;
        v24 = v115;
        v31 = v140;
        v32 = i;
      }
      v66 = 0;
      v115 = 0;
      v117 = 0;
      v116 = 0;
      if ( v59 != 1 )
        goto LABEL_139;
      v67 = 2;
LABEL_207:
      v9 |= v67;
      v113 = v9;
      v89 = *(_DWORD *)(v58 + 8);
      if ( v89 != 595 || (v90 = -1LL, *(_QWORD *)(v58 + 24) != -1LL) )
        v90 = 0LL;
      if ( ((unsigned int)(v89 - 571) <= 1
         || ((unsigned int)(v89 - 577) <= 3 || (unsigned int)(v89 - 581) <= 5 || (unsigned int)(v89 - 593) <= 2)
         && CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v90, *(_WORD *)(v58 + 16)))
        && (*(_DWORD *)(gptiCurrent + 1208LL) & 0x2000) == 0
        && !(unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(v58 + 8), *(_QWORD *)(v58 + 16)) )
      {
        v66 = 1;
      }
      v91 = a5 & 1;
      if ( ((a5 & 1) == 0 || !v120 || !*(_QWORD *)(gptiCurrent + 1232LL)) && !v66 )
      {
        if ( (a5 & 1) == 0 )
          goto LABEL_239;
        if ( *(_DWORD *)(v58 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1320LL) & 1) != 0 )
        {
          v24 = v124;
          if ( (v124 & 1) != 0 )
          {
            v92 = xxxKeyboardCorrectionCallout((__int128 *)v58, v124);
            v91 = a5 & 1;
            if ( v92 == 1296 )
            {
              *(_DWORD *)(v58 + 8) = 0;
              *(_QWORD *)(v58 + 16) = 0LL;
              *(_QWORD *)(v58 + 24) = 0LL;
            }
          }
        }
      }
      if ( !v91 )
        goto LABEL_239;
      v93 = *(_DWORD *)(v58 + 8);
      if ( v93 == 258
        || (unsigned int)(v93 - 578) <= 5 && (v24 = 51LL, _bittest((const int *)&v24, v93 - 578))
        || (unsigned __int16)v93 >= 0xC000u )
      {
        v94 = xxxCallCtfHook(3, 0, (unsigned int)a5, v58);
        v91 = a5 & 1;
        if ( v94 )
        {
          if ( *(_DWORD *)(v58 + 8) == 258 )
          {
            *(_DWORD *)(v58 + 8) = 0;
            *(_QWORD *)(v58 + 16) = 0LL;
            *(_QWORD *)(v58 + 24) = 0LL;
          }
        }
      }
      if ( !v91 || !v120 || !*(_QWORD *)(gptiCurrent + 1232LL) )
      {
LABEL_239:
        if ( !v66 )
        {
          v95 = *(_QWORD *)(gptiCurrent + 464LL);
          v24 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)v95 + 16LL));
          if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v95 + 16LL)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, v58, 3);
            v91 = a5 & 1;
          }
        }
      }
      if ( v91 )
      {
        v96 = *(_DWORD *)(gptiCurrent + 1112LL);
        if ( v96 )
        {
          if ( word_1C03172D0 && qword_1C03172D8 == gptiCurrent && dword_1C03172D4 == v96 )
          {
            ForceCompletePendingPromotion();
            xxxProcessMousePromotionQueue();
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 1112LL) = 0;
          }
        }
        v97 = *(_DWORD *)(v58 + 8);
        if ( v97 == 583
          && (*(_WORD *)(v58 + 18) & 0x2000) != 0
          && word_1C03172D0
          && word_1C03172D0 == *(_WORD *)(v58 + 16)
          && qword_1C03172D8 == gptiCurrent )
        {
          *(_DWORD *)(gptiCurrent + 1112LL) = dword_1C03172D4;
          v97 = *(_DWORD *)(v58 + 8);
        }
        v98 = 0;
        if ( ((unsigned int)(v97 - 577) <= 3 || (unsigned int)(v97 - 581) <= 0x12 && v97 != 589) && v97 != 595 )
          v98 = *(_WORD *)(v58 + 16);
        CTouchProcessor::UpdateThreadPointerList(
          gpTouchProcessor,
          (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
          v98);
      }
      k = v120;
      v99 = a5 & 1;
      if ( !v120 )
        break;
      v100 = *((_DWORD *)v120 + 25);
      if ( (v100 & 0x100) == 0 )
        break;
      if ( (a5 & 1) == 0 || !*(_QWORD *)(gptiCurrent + 1232LL) )
      {
        *((_DWORD *)v120 + 25) = v100 & 0xFFFFFEFF;
        break;
      }
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v127,
        L"Delegation",
        0LL);
      EtwTraceBeginDelegateInputCallback(v120, v58);
      InputTraceLogging::Delivery::CallDelegateThread(v120);
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v130,
        L"DelegationCallout",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)v127);
      v101 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1232LL), v58, *(_QWORD *)(gptiCurrent + 1240LL));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v130);
      EtwTraceEndDelegateInputCallback(v120, v58);
      *((_DWORD *)v120 + 25) &= ~0x100u;
      v102 = *((_DWORD *)v120 + 25);
      if ( (v102 & 0x80u) == 0 )
      {
        if ( (v102 & 0x20) != 0 )
          _HandleDelegatedInputWorker(gptiCurrent, v101, v120);
      }
      else
      {
        FreeQEntry(v120);
      }
      v9 = 0x20000;
      v113 = 0x20000;
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v127);
      v31 = v140;
      v32 = i;
    }
    if ( !v66 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v131,
      L"PTPDownleveling",
      0LL);
    xxxClientCallDefaultInputHandler((struct tagMSG *)v58);
    v133 = 0uLL;
    v134 = 0uLL;
    v135 = 0uLL;
    *(_OWORD *)v58 = 0uLL;
    *(_OWORD *)(v58 + 16) = v134;
    *(_OWORD *)(v58 + 32) = v135;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v131);
    v31 = v140;
  }
  if ( a6 && *(_DWORD *)(v58 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_317;
  }
  if ( (a5 & 1) != 0 )
  {
    v104 = *(_QWORD *)(gptiCurrent + 1056LL);
    if ( v104 )
    {
      LOBYTE(v24) = 18;
      v105 = HMValidateHandleNoRip(v104, v24);
      if ( v105 )
        FreeHidData(v105);
      *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
    }
    v106 = *(_QWORD *)(gptiCurrent + 1064LL);
    if ( v106 )
    {
      FreeTouchInputInfo(v106, 1LL);
      *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
    }
    k = *(struct tagWND **)(gptiCurrent + 1072LL);
    if ( k )
    {
      FreeGestureInfo(k, 1LL);
      *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
    }
    v107 = *(_DWORD *)(v58 + 8);
    if ( v107 == 255 )
    {
      if ( *(_QWORD *)(v58 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 1056LL) = *(_QWORD *)(v58 + 24);
    }
    else if ( v107 == 576 && (LOBYTE(v24) = 20, HMValidateHandle(*(_QWORD *)(v58 + 24), v24)) )
    {
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(v58 + 24);
    }
    else if ( ((*(_DWORD *)(v58 + 8) - 281) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v24) = 21;
      if ( HMValidateHandle(*(_QWORD *)(v58 + 24), v24) )
        *(_QWORD *)(gptiCurrent + 1072LL) = *(_QWORD *)(v58 + 24);
    }
  }
LABEL_318:
  if ( v119 )
    ThreadUnlock1(k, v24);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v10 )
    {
      if ( *(_DWORD *)(v58 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) != 0 )
      {
        v111 = *(_DWORD **)(gptiCurrent + 672LL);
        if ( v111 )
        {
          if ( (v111[49] & 0x100000) != 0 )
          {
            if ( v111[82] )
            {
              v111[83] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v111[82];
              ++v111[84];
              v111[82] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1160LL) = *(_QWORD *)v58;
      *(_DWORD *)(gptiCurrent + 1168LL) = *(_DWORD *)(v58 + 8);
      *(_QWORD *)(gptiCurrent + 1176LL) = *(_QWORD *)(v58 + 16);
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)v58, v99);
    }
  }
  else
  {
    v10 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, v58);
  return v10;
}
