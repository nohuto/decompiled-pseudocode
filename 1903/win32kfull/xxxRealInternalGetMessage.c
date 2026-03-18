/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C009BCF0
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C009B050 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C009B140 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C009BB20 (NtUserPeekMessage.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C00073F0 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FB0 (SlowAppThreadInShellFrame.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC90 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxDoPaint @ 0x1C009A840 (xxxDoPaint.c)
 *     CalcWakeMask @ 0x1C009DB40 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C009DE30 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C009DEC0 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C009E858 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 *     zzzCalcStartCursorHide @ 0x1C00ABC40 (zzzCalcStartCursorHide.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _IsChild @ 0x1C011C2A8 (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C01207DC (IsShellFrameHangResilient.c)
 *     xxxDoSysExpunge @ 0x1C0126BAC (xxxDoSysExpunge.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C012B0CC (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     WaitMaskIncludesUserInput @ 0x1C01314FC (WaitMaskIncludesUserInput.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C01641F4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01CF660 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01DF6A0 (_FreeTouchInputInfo.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01E14B0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E1560 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E3268 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1F00 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F24B4 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F27A8 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207820 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0208264 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C0214470 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C021DD78 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C021DEE8 (xxxClientCallDelegateThread.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C02404F8 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
  struct tagWND *v9; // r15
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  struct tagWND *v12; // rcx
  int v14; // r11d
  __int64 v15; // rdx
  char v16; // si
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r11d
  unsigned int v20; // r14d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  int v33; // ecx
  __int16 v34; // di
  __int16 v35; // si
  __int64 v36; // rcx
  __int64 k; // rcx
  unsigned __int64 j; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v40; // rdi
  _QWORD **ThreadWin32Thread; // rax
  int v42; // r14d
  int v43; // eax
  int v44; // esi
  int v45; // esi
  __int16 v46; // di
  struct tagWND *v47; // r14
  int v48; // eax
  __int64 *v49; // rsi
  int v50; // eax
  unsigned int v51; // r10d
  unsigned int v52; // eax
  unsigned int v53; // edi
  unsigned int v54; // ecx
  int v55; // eax
  int v56; // edi
  __int64 v57; // rdi
  __int64 v58; // rdx
  struct _KEVENT *v59; // rcx
  __int64 v60; // rax
  struct _KEVENT *v61; // rcx
  int v62; // eax
  __int16 v63; // dx
  __int64 m; // rdi
  __int64 v65; // rdx
  unsigned __int64 v66; // rsi
  int v67; // r8d
  unsigned int v68; // edx
  _DWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  int v75; // eax
  _DWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  _DWORD *v80; // rsi
  _QWORD *v81; // rax
  __int64 v82; // r10
  int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 *v90; // rax
  struct _LIST_ENTRY *v92; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v95; // rcx
  __int64 v96; // rsi
  unsigned int v97; // edi
  __int64 v98; // r14
  __int64 v99; // rax
  int v100; // eax
  int v101; // r11d
  int v102; // ecx
  int v103; // eax
  unsigned int v104; // edi
  int v105; // eax
  struct tagWND *v106; // rsi
  int v107; // r12d
  __int64 v108; // rcx
  __int64 v109; // r13
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // ecx
  unsigned int v114; // eax
  unsigned int v115; // esi
  unsigned int v116; // eax
  unsigned int v117; // r14d
  unsigned int v118; // eax
  unsigned int v119; // r15d
  BOOL v120; // eax
  __int64 v121; // rsi
  unsigned __int64 v122; // r8
  int v123; // edi
  int v124; // eax
  int v125; // eax
  int v126; // eax
  __int64 *v127; // rax
  int v128; // eax
  int v129; // ecx
  unsigned __int16 v130; // r8
  unsigned int v131; // edi
  struct CInpLockGuard *TouchProcessorLock; // rax
  struct tagTHREADINFO *v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  int v137; // eax
  __int64 v138; // rdi
  __int64 v139; // rax
  int v140; // eax
  _DWORD *v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  unsigned __int64 v145; // rdi
  struct _KTHREAD *v146; // rsi
  struct tagBWND *v147; // r9
  __int64 v148; // rsi
  __int64 v149; // rcx
  struct tagWND **v150; // r14
  unsigned __int64 v151; // rdi
  int v152; // [rsp+28h] [rbp-1B0h]
  int v153[2]; // [rsp+30h] [rbp-1A8h]
  int v154; // [rsp+70h] [rbp-168h]
  unsigned int v155; // [rsp+74h] [rbp-164h]
  __int16 v156; // [rsp+78h] [rbp-160h]
  __int16 i; // [rsp+7Ah] [rbp-15Eh]
  unsigned int v158; // [rsp+7Ch] [rbp-15Ch]
  _BYTE v159[4]; // [rsp+80h] [rbp-158h] BYREF
  unsigned int v160; // [rsp+84h] [rbp-154h]
  int v161; // [rsp+88h] [rbp-150h]
  unsigned int v162; // [rsp+8Ch] [rbp-14Ch]
  struct tagQMSG *v163; // [rsp+90h] [rbp-148h] BYREF
  int v164; // [rsp+98h] [rbp-140h]
  struct tagWND *v165; // [rsp+A0h] [rbp-138h]
  int v166; // [rsp+A8h] [rbp-130h] BYREF
  unsigned int v167; // [rsp+ACh] [rbp-12Ch]
  unsigned int v168; // [rsp+B0h] [rbp-128h] BYREF
  int v169; // [rsp+B4h] [rbp-124h]
  int v170; // [rsp+C0h] [rbp-118h]
  LPCWSTR *v171; // [rsp+D0h] [rbp-108h] BYREF
  char v172[12]; // [rsp+DCh] [rbp-FCh] BYREF
  __int64 v173; // [rsp+E8h] [rbp-F0h] BYREF
  LPCWSTR *v174; // [rsp+F0h] [rbp-E8h] BYREF
  char v175[8]; // [rsp+F8h] [rbp-E0h] BYREF
  LPCWSTR *v176; // [rsp+100h] [rbp-D8h] BYREF
  struct tagTHREADINFO *v177; // [rsp+108h] [rbp-D0h]
  __int64 v178; // [rsp+110h] [rbp-C8h] BYREF
  struct tagWND *v179; // [rsp+118h] [rbp-C0h]
  __int64 v180; // [rsp+120h] [rbp-B8h]
  ULONG64 v181; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v182; // [rsp+130h] [rbp-A8h]
  __int64 v183; // [rsp+138h] [rbp-A0h]
  __int64 v184; // [rsp+140h] [rbp-98h]
  __int128 v185; // [rsp+148h] [rbp-90h]
  __int128 v186; // [rsp+158h] [rbp-80h]
  __int128 v187; // [rsp+168h] [rbp-70h]
  char v188[80]; // [rsp+188h] [rbp-50h] BYREF
  char v190; // [rsp+1E8h] [rbp+10h]

  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  v190 = 0;
  v9 = 0LL;
  v168 = 0;
  v162 = 0;
  v160 = 0;
  v158 = 0;
  v10 = 0;
  v154 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v11 = 1;
    a2 = 1LL;
LABEL_8:
    v165 = (struct tagWND *)a2;
    v14 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
  {
    v11 = 1;
    goto LABEL_8;
  }
  v12 = (struct tagWND *)ValidateHwnd(a2);
  v165 = v12;
  if ( !v12 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v178 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v178;
  v179 = v12;
  HMLockObject(v12);
  v11 = 1;
  v14 = 1;
LABEL_9:
  v164 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v167 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v16 = a5;
  v20 = CalcWakeMask(a3, v15, WORD1(a5));
  v155 = v20;
  v170 = v20 & 0x1C07;
  if ( (v20 & 0x1C07) != 0 )
  {
    v18 = MEMORY[0xFFFFF78000000320];
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(gptiCurrent + 1408LL) = v17;
  }
  if ( (v20 & 7) == 7 || (v20 & 6) != 0 && (v18 = gptiCurrent, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL)) )
  {
    if ( v19 )
    {
      if ( *((_QWORD *)v165 + 2) == gptiCurrent )
        xxxUpdateInputHangInfo(v165, 1LL);
      v16 = a5;
    }
    else if ( !a2 )
    {
      xxxUpdateInputHangInfo(0LL, 1LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17);
  v24 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v24 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v24 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v25 = *(_QWORD *)(gptiCurrent + 416LL);
  v26 = gcSysExpunge;
  if ( *(_DWORD *)(v25 + 400) != gcSysExpunge )
  {
    *(_DWORD *)(v25 + 400) = gcSysExpunge;
    LODWORD(v25) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
    if ( ((unsigned int)v25 & WPP_MAIN_CB.Dpc.TargetInfoAsUlong) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v161 = v16 & 1;
  if ( (v16 & 1) != 0 && (v20 & 0x1CBF) != 0 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x80000) != 0 )
  {
    LODWORD(v25) = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
    if ( ((unsigned int)v25 & v20) != 0 )
    {
      v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v22, v23) + 456);
      if ( !*(_QWORD *)(v25 + 56) )
      {
        v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 456);
        if ( !*(_QWORD *)(v25 + 48) )
          TryAttachShellFrame(gptiCurrent, v26);
      }
    }
  }
  v29 = *(_QWORD *)(gptiCurrent + 424LL);
  v30 = *(_QWORD *)(v29 + 72);
  if ( *(_QWORD *)(gptiCurrent + 504LL)
    || v30 == gptiCurrent && *(_QWORD *)(v29 + 80) == *(_QWORD *)(gptiCurrent + 568LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        v25,
        v26,
        18,
        15,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        v29,
        *(_QWORD *)(v29 + 72));
    v190 = 1;
  }
  else
  {
    v31 = *(_QWORD *)(v29 + 72);
    if ( !v30 || *(_DWORD *)(v30 + 896) || !PhkFirstGlobalValid(gptiCurrent, 1) )
      goto LABEL_46;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(v32, v26, 18, 16, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, v29, v30);
  }
  v31 = 0LL;
  *(_QWORD *)(v29 + 72) = 0LL;
LABEL_46:
  if ( v31 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v169 = v16 & 2;
  if ( (v16 & 2) == 0 )
  {
    v33 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v33 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v33 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x80000u;
    }
  }
  v34 = v20 & 0xFFBF;
  v156 = v20 & 0xFFBF;
  v35 = ~(v20 & 0xFFBF);
  for ( i = v35; ; v35 = i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_52:
        v163 = 0LL;
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
        if ( *(_QWORD *)(gptiCurrent + 448LL) == gpdeskRecalcQueueAttach )
        {
          gpdeskRecalcQueueAttach = 0LL;
          if ( *(_QWORD *)(gptiCurrent + 448LL) )
          {
            if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v30, v31) + 456)
                            + 48LL)
              && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v30, v31) + 456)
                            + 56LL) )
            {
              zzzReattachThreads(2, 0LL, 0LL);
            }
          }
        }
        v36 = *(_QWORD *)(gptiCurrent + 440LL);
        *(_WORD *)(gptiCurrent + 872LL) |= *(_WORD *)(v36 + 4) & v34;
        *(_WORD *)(v36 + 4) &= v35;
        k = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
        if ( ((unsigned __int8)v20 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
        {
          if ( (k & 0x40) != 0 )
          {
            do
              xxxReceiveMessage(gptiCurrent);
            while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
          }
        }
        else if ( (k & 0x40) != 0 )
        {
          v10 |= 0x80u;
          goto LABEL_78;
        }
        LOBYTE(k) = v170 != 0;
        if ( v170 != 0 && (v20 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1116LL) )
        {
          do
          {
            *(_DWORD *)(gptiCurrent + 1116LL) = 0;
            for ( j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
                  j;
                  j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL)) )
            {
              xxxNotifyCaptureChangeIfCaptured(j, (struct tagWND *)v26, v30);
            }
          }
          while ( *(_DWORD *)(gptiCurrent + 1116LL) );
        }
        if ( *(_QWORD *)(gptiCurrent + 1464LL) && (v20 & 8) != 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v40 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(k, v26, v30, v31) )
          {
            ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v40 = *ThreadWin32Thread;
          }
          v181 = 0LL;
          v182 = 0LL;
          v183 = 0LL;
          v184 = 0LL;
          v173 = 0LL;
          v42 = 0;
          ZwSetIoCompletionEx(v40[178], v40[182], 0LL, 2LL, 0, 0LL);
          while ( 1 )
          {
            LOBYTE(v152) = 0;
            v43 = ZwRemoveIoCompletionEx(v40[178], &v181, 1LL, v172, &v173, v152);
            v44 = 0;
            if ( v43 )
            {
              if ( v43 == 258 )
                goto LABEL_73;
            }
            else
            {
              if ( (_DWORD)v182 == 1 )
              {
                v42 = 1;
                continue;
              }
              if ( (_DWORD)v182 == 2 )
                goto LABEL_73;
              if ( !(_DWORD)v182 && v40[183] )
              {
                v44 = v182 + 4;
                xxxHandleCoreMessagingQueueCompletion((__int64)v40, &v181, 1);
              }
            }
            if ( v44 != 4 )
            {
LABEL_73:
              if ( v42 )
                ZwAssociateWaitCompletionPacket(v40[181], v40[178], v40[180], 0LL, 1LL, 0, 0LL, 0LL);
              v20 = v155;
              break;
            }
          }
        }
        v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
        v46 = v20 & v45;
        if ( (v20 & v45) == 0 )
        {
          v10 |= 0x100u;
LABEL_78:
          v154 = v10;
          goto LABEL_79;
        }
        k = *(_QWORD *)(gptiCurrent + 424LL);
        if ( *(_QWORD *)(k + 72) != gptiCurrent || (*(_DWORD *)(k + 396) & 0x400) == 0 )
          goto LABEL_102;
        EtwTraceInputQueueNoRemoveLocker();
        if ( (v46 & 0x3C07) != 0 )
          break;
        if ( (v45 & 0x2000) != 0 )
        {
          v10 |= 0x200u;
          goto LABEL_78;
        }
LABEL_102:
        v47 = v165;
LABEL_103:
        if ( (v46 & 8) != 0
          && (unsigned int)xxxReadPostMessage(
                             gptiCurrent,
                             (struct tagMSG *)a1,
                             v47,
                             a3,
                             v167,
                             (struct _QMSG_POSTCHAR_FLAGS *)&v168,
                             v161) )
        {
          v55 = 1;
          v20 = v155;
          goto LABEL_270;
        }
        if ( v47 == (struct tagWND *)1 )
        {
          v10 |= 0x400u;
          goto LABEL_78;
        }
        if ( (v46 & 0x3C07) != 0 )
        {
          v153[0] = v46 & 0x3C07;
          v49 = (__int64 *)v165;
          v50 = xxxScanSysQueue(gptiCurrent, a1, v165, a3, v167, a5, *(_QWORD *)v153, &v163);
          if ( v50 != 2 )
          {
            v160 = 0;
            v158 = 0;
            v162 = 0;
            if ( v50 != 1 )
              goto LABEL_127;
            goto LABEL_123;
          }
          if ( !(unsigned int)IsShellFrameHangResilient(gptiCurrent) || (v46 & 1) == 0 || !a6 )
            goto LABEL_127;
          v31 = 0LL;
          v30 = v162;
          if ( v162 )
            v31 = v158;
          v158 = v31;
          v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( v162 )
            v51 = v160;
          v160 = v51;
          v52 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( v162 )
            v52 = v162;
          v162 = v52;
          v53 = v52;
          v54 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v52;
          if ( v54 >= 0xFA )
          {
            v162 = v52;
            if ( v51 == v52 )
            {
              TraceLoggingSysQueueLockedRetryFailed(v31, v54);
              v160 = 0;
              v162 = v53;
              v30 = v158;
            }
            goto LABEL_127;
          }
          v20 = v155;
          xxxSleepThread2(v155, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v166);
          ++v158;
          v26 = v160;
          v34 = v156;
          v35 = i;
        }
        else
        {
          if ( (v45 & 0x2000) != 0 )
          {
            v10 |= 0x800u;
            goto LABEL_78;
          }
          v49 = (__int64 *)v165;
LABEL_127:
          k = *(_QWORD *)(gptiCurrent + 440LL);
          v26 = *(unsigned __int16 *)(k + 6);
          v20 = v155;
          if ( ((unsigned __int8)v155 & (unsigned __int8)*(_WORD *)(k + 6) & 0x40) != 0 )
          {
            if ( (v26 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v26 & 0x40) != 0 )
          {
            v10 |= 0x1000u;
            goto LABEL_78;
          }
          LOWORD(v56) = *(_WORD *)(k + 6);
          if ( ((unsigned __int16)v155 & (unsigned __int16)v56) == 0 )
          {
            v10 |= 0x2000u;
            goto LABEL_78;
          }
          if ( ((unsigned __int8)v155 & (unsigned __int8)v56 & 0x20) != 0 && (unsigned int)xxxDoPaint(v49, a1, v30, v31) )
          {
            v55 = 4;
            goto LABEL_270;
          }
          if ( v169 )
            goto LABEL_161;
          v57 = PsGetCurrentProcessWin32Process(k, v26);
          *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v58 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
              v59 = *(struct _KEVENT **)(v58 + 32);
              if ( v59 )
              {
                if ( v59 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v59, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v58 + 32) = -1LL;
              }
            }
          }
          else
          {
            v60 = *(_QWORD *)(gptiCurrent + 416LL);
            if ( !*(_QWORD *)(v60 + 328) )
            {
              *(_QWORD *)(v60 + 328) = gptiCurrent;
              v60 = *(_QWORD *)(gptiCurrent + 416LL);
            }
            if ( *(_QWORD *)(v60 + 328) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v61 = *(struct _KEVENT **)(v57 + 16);
              if ( v61 )
              {
                if ( v61 == (struct _KEVENT *)-1LL )
                  goto LABEL_150;
                KeSetEvent(v61, 1, 0);
                ObfDereferenceObject(*(PVOID *)(v57 + 16));
              }
              *(_QWORD *)(v57 + 16) = -1LL;
            }
          }
LABEL_150:
          v62 = *(_DWORD *)(v57 + 12);
          if ( (v62 & 4) != 0 )
          {
            *(_DWORD *)(v57 + 12) = v62 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
          for ( k = *(_QWORD *)(gptiCurrent + 440LL); (*(_BYTE *)(k + 6) & 0x40) != 0; k = *(_QWORD *)(gptiCurrent + 440LL) )
            xxxReceiveMessage(gptiCurrent);
          v63 = *(_WORD *)(k + 6);
          if ( ((unsigned __int8)v155 & (unsigned __int8)v63 & 0x40) != 0 )
          {
            if ( (v63 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v63 & 0x40) != 0 )
          {
            v10 |= 0x4000u;
            goto LABEL_78;
          }
          v56 = *(unsigned __int16 *)(k + 6);
          if ( (v56 & v155) == 0 )
          {
            v10 |= 0x8000u;
            goto LABEL_78;
          }
LABEL_161:
          if ( ((unsigned __int8)v155 & (unsigned __int8)v56 & 0x10) != 0 )
          {
            v31 = gptiCurrent + 1208LL;
            for ( m = *(_QWORD *)(gptiCurrent + 1208LL); m != v31; m = *(_QWORD *)m )
            {
              v65 = *(_QWORD *)(m + 32);
              if ( !v49 || v49 == (__int64 *)v65 || (unsigned int)IsChild(v49, v65) )
              {
                if ( (gdwExtraInstrumentations & 2) != 0 )
                {
                  v66 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  v67 = v66 - *(_DWORD *)(m + 72);
                  v31 = (unsigned int)dword_1C032C7F0;
                  if ( !dword_1C032C7F0 )
                    v31 = (unsigned int)v66;
                  dword_1C032C7F0 = v31;
                  v68 = 0;
                  v69 = &unk_1C02DDCA8;
                  do
                  {
                    if ( *(_DWORD *)(m - 16) <= *v69 )
                      break;
                    ++v68;
                    ++v69;
                  }
                  while ( v68 < 7 );
                  v70 = v68 + 8LL * gTimerCoalCurrentState;
                  ++gaTimerDeliveryDistribution[2 * v70];
                  v30 = (unsigned int)(v67 - *(_DWORD *)(m - 16));
                  v65 = (unsigned int)(v30 + gaTimerDeliveryDistribution[2 * v70 + 1]);
                  gaTimerDeliveryDistribution[2 * v70 + 1] = v65;
                  if ( gaTimerDeliveryDistribution[2 * v70] >= 0x7FFFFFFFu
                    || (int)v65 >= 0x3FFFFFFF
                    || (unsigned int)(v66 - v31) >= 0xEA60 )
                  {
                    v71 = 0LL;
                    if ( gSessionId != gServiceSessionId )
                      v71 = 16LL;
                    dword_1C032B408 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v71);
                    v72 = 4LL;
                    if ( gSessionId != gServiceSessionId )
                      v72 = 20LL;
                    dword_1C032B448 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v72);
                    v73 = 8LL;
                    if ( gSessionId != gServiceSessionId )
                      v73 = 24LL;
                    dword_1C032B488 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v73);
                    v74 = 12LL;
                    if ( gSessionId != gServiceSessionId )
                      v74 = 28LL;
                    dword_1C032B4C8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v74);
                    EtwTraceTimerDelayStatistics(
                      (unsigned int)gSessionId,
                      8LL,
                      4LL,
                      &unk_1C02DDCA8,
                      32,
                      8,
                      gaTimerDeliveryDistribution);
                    dword_1C032C7F0 = v66;
                    memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
                  }
                }
                v75 = *(_DWORD *)(m + 76);
                if ( *(_DWORD *)(m + 72) == v75 )
                  *(_DWORD *)(m + 72) = v75;
                if ( *(_DWORD *)(gptiCurrent + 816LL) < gUserPostMessageLimit )
                {
                  v76 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                  v80 = v76;
                  if ( v76 )
                  {
                    memset(v76, 0, 0xA8uLL);
                    if ( *(_DWORD *)(gptiCurrent + 820LL) == 2 )
                      v80[25] |= 8u;
                    else
                      v80[25] |= 4u;
                    v81 = *(_QWORD **)(gptiCurrent + 808LL);
                    if ( v81 )
                    {
                      *v81 = v80;
                      *((_QWORD *)v80 + 1) = *(_QWORD *)(gptiCurrent + 808LL);
                    }
                    else
                    {
                      *(_QWORD *)(gptiCurrent + 800LL) = v80;
                    }
                    *(_QWORD *)(gptiCurrent + 808LL) = v80;
                    ++*(_DWORD *)(gptiCurrent + 816LL);
                    v82 = *(_QWORD *)(m + 32);
                    if ( v82 )
                    {
                      v83 = *(_DWORD *)(*(_QWORD *)(v82 + 40) + 288LL);
                    }
                    else
                    {
                      v84 = *(_QWORD *)(gptiCurrent + 424LL);
                      v85 = *(_QWORD *)(v84 + 128);
                      if ( v85 )
                        v86 = *(_QWORD *)(v85 + 16);
                      else
                        v86 = *(_QWORD *)(v84 + 104);
                      v83 = *(_DWORD *)(*(_QWORD *)(v86 + 416) + 280LL);
                    }
                    if ( (*(_DWORD *)(m - 8) & 2) == 0 || (v87 = 280LL, !*(_QWORD *)(m - 24)) )
                      v87 = *(_QWORD *)(m - 24);
                    v88 = 280LL;
                    if ( (*(_DWORD *)(m - 8) & 2) == 0 )
                      v88 = 275LL;
                    StoreQMessage(v80, v82, v88, *(_QWORD *)(m + 40), v87, 0, 0LL, 0, 0LL, 0, 0LL, v83, 0LL, 0LL);
                    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
                    {
                      v30 = 264LL;
                      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x108u;
                      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x108u;
                      if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) & 0x108) != 0 )
                        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 728LL), 2, 0);
                    }
                  }
                  else
                  {
                    UserSetLastError(8LL, v77, v78, v79);
                  }
                }
                else
                {
                  UserSetLastError(1816LL, v65, v30, v31);
                }
                *(_DWORD *)(m - 8) &= ~1u;
                v89 = *(_QWORD *)(m - 32);
                v26 = *(_QWORD *)m;
                v90 = *(__int64 **)(m + 8);
                if ( *(_QWORD *)(*(_QWORD *)m + 8LL) != m || *v90 != m )
                  __fastfail(3u);
                *v90 = v26;
                *(_QWORD *)(v26 + 8) = v90;
                *(_QWORD *)m = 0LL;
                *(_QWORD *)(m + 8) = 0LL;
                if ( (*(_DWORD *)(v89 + 596))-- == 1 )
                  *(_WORD *)(*(_QWORD *)(v89 + 440) + 6LL) &= ~0x10u;
                v92 = (struct _LIST_ENTRY *)(m + 16);
                Flink = v92->Flink;
                Blink = v92->Blink;
                if ( v92->Flink->Blink != v92 || Blink->Flink != v92 )
                  __fastfail(3u);
                Blink->Flink = Flink;
                Flink->Blink = Blink;
                v95 = gtmrListHead->Blink;
                if ( v95->Flink != gtmrListHead )
                  __fastfail(3u);
                v92->Flink = gtmrListHead;
                v92->Blink = v95;
                v95->Flink = v92;
                gtmrListHead->Blink = v92;
                v10 |= 8u;
                v154 = v10;
                v20 = v155;
                v34 = v156;
                v35 = i;
                goto LABEL_52;
              }
            }
          }
LABEL_79:
          v26 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(v26 + 72) == gptiCurrent )
          {
            *(_QWORD *)(v26 + 80) = 0LL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                k,
                v26,
                18,
                17,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                gptiCurrent,
                *(_QWORD *)(gptiCurrent + 424LL));
            *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 72LL) = 0LL;
            **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
            v190 = 1;
            v26 = *(_QWORD *)(gptiCurrent + 424LL);
          }
          else if ( !v190 )
          {
            goto LABEL_234;
          }
          if ( *(_DWORD *)(v26 + 400) > 1u )
          {
            v96 = 0LL;
            v97 = 0;
            CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v188, v26);
            v98 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL);
            if ( v98 )
            {
              if ( (*(_DWORD *)(v98 + 100) & 0x10) == 0 )
              {
                v99 = *(_QWORD *)(v98 + 104);
                if ( v99 != gptiCurrent )
                {
                  v96 = *(_QWORD *)(v98 + 104);
                  if ( v99 )
                  {
                    v100 = CalcWakeMask(*(unsigned int *)(v98 + 24), *(unsigned int *)(v98 + 24), 0LL);
                    v102 = -8265;
                    v26 = 4294967223LL;
                    if ( *(_DWORD *)(v98 + 96) )
                      v102 = -73;
                    v103 = v102 & v100;
                    v97 = v103 & 0xFFFFFF7F;
                    if ( v101 == 786 )
                      v97 = v103;
                    k = v97 & *(_WORD *)(*(_QWORD *)(v96 + 440) + 4LL);
                    if ( (_DWORD)k == v97 )
                      v96 = 0LL;
                  }
                }
              }
            }
            if ( v96 )
              SetWakeBit(v96, v97);
          }
LABEL_234:
          if ( !a6 )
          {
            if ( v169 )
              goto LABEL_380;
            v138 = PsGetCurrentProcessWin32Process(k, v26);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
            {
              k = *(_QWORD *)(gptiCurrent + 608LL);
              if ( *(_QWORD *)(k + 24) )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v26 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                k = *(_QWORD *)(v26 + 32);
                if ( k )
                {
                  if ( k != -1 )
                  {
                    KeSetEvent((PRKEVENT)k, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                    k = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                    *(_QWORD *)(k + 32) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v26 + 32) = -1LL;
                }
              }
              goto LABEL_376;
            }
            v139 = *(_QWORD *)(gptiCurrent + 416LL);
            if ( !*(_QWORD *)(v139 + 328) )
            {
              *(_QWORD *)(v139 + 328) = gptiCurrent;
              v139 = *(_QWORD *)(gptiCurrent + 416LL);
            }
            if ( *(_QWORD *)(v139 + 328) != gptiCurrent )
              goto LABEL_376;
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            k = *(_QWORD *)(v138 + 16);
            if ( k )
            {
              if ( k == -1 )
              {
LABEL_376:
                v140 = *(_DWORD *)(v138 + 12);
                if ( (v140 & 4) != 0 )
                {
                  *(_DWORD *)(v138 + 12) = v140 & 0xFFFFFFFB;
                  zzzCalcStartCursorHide(0LL, 0LL);
                }
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
                  xxxReceiveMessage(gptiCurrent);
                goto LABEL_380;
              }
              KeSetEvent((PRKEVENT)k, 1, 0);
              ObfDereferenceObject(*(PVOID *)(v138 + 16));
            }
            *(_QWORD *)(v138 + 16) = -1LL;
            goto LABEL_376;
          }
          v104 = 0;
          if ( v164 )
          {
            v20 = v155;
            v105 = WaitMaskIncludesUserInput(v155);
            v106 = v165;
            if ( v105 && *((_QWORD *)v165 + 2) == gptiCurrent )
            {
              v104 = 1;
              xxxUpdateInputHangInfo(v165, 0LL);
            }
            v107 = xxxRealSleepThread(v155, 0, 1, 0, 0LL);
            if ( v104 )
              xxxUpdateInputHangInfo(v106, 1LL);
LABEL_266:
            if ( !v107 )
            {
              v10 |= 0x10000u;
LABEL_380:
              v121 = a1;
              goto LABEL_381;
            }
            v10 = 0;
            v154 = 0;
            v11 = 1;
            v34 = v156;
            v35 = i;
          }
          else
          {
            v166 = 0;
            v108 = *(_QWORD *)(gptiCurrent + 424LL);
            v109 = *(_QWORD *)(v108 + 80);
            v177 = *(struct tagTHREADINFO **)(v108 + 72);
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0
              || *(_DWORD *)(v108 + 400) <= 1u
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v30, v31) + 456)
                           + 48LL)
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 456)
                           + 56LL)
              || IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v113 = 0;
            }
            else
            {
              v113 = 1;
              v104 = gdwMDAQTimeoutDefenseInDepth;
            }
            v114 = 0;
            if ( !v113 )
              v114 = v158;
            v158 = v114;
            v115 = v114;
            v116 = 0;
            if ( !v113 )
              v116 = v160;
            v160 = v116;
            v117 = v116;
            v118 = 0;
            if ( !v113 )
              v118 = v162;
            v162 = v118;
            v119 = v118;
            v107 = xxxSleepThread2(v155, v104, 1, 0, (enum SLEEP_STATUS *)&v166);
            v120 = 0;
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
            {
              k = *(_QWORD *)(gptiCurrent + 424LL);
              if ( *(_DWORD *)(k + 400) > 1u )
              {
                k = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v30, v31) + 456);
                if ( !*(_QWORD *)(k + 48) )
                {
                  k = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v30, v31) + 456);
                  if ( !*(_QWORD *)(k + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
                    v120 = 1;
                }
              }
            }
            if ( !v120
              || (k = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), k != *(_QWORD *)(gptiCurrent + 1392LL))
              && (v162 = v119, v160 = v117, v158 = v115, k)
              || (v162 = v119, v160 = v117, v158 = v115, !v166) )
            {
              v9 = 0LL;
              v10 = v154;
              v20 = v155;
              goto LABEL_266;
            }
            v133 = SlowAppThreadInShellFrame(gptiCurrent, v177, v109, v166 == 2);
            if ( v133 )
              TryDetachShellFrame(gptiCurrent, v133, v166 == 2, 0LL);
            v162 = v119;
            v160 = v117;
            v158 = v115;
            v9 = 0LL;
            v11 = 1;
            v10 = v154;
            v20 = v155;
            v34 = v156;
            v35 = i;
          }
        }
      }
      v153[0] = v46 & 0x3C07;
      v47 = v165;
      v48 = xxxScanSysQueue(gptiCurrent, a1, v165, a3, v167, a5, *(_QWORD *)v153, &v163);
      if ( v48 != 1 )
      {
        if ( !v48 && UnblockDeferredInput(gptiCurrent) )
          KeyboardInputTelemetry::LogHanging(gptiCurrent);
        goto LABEL_103;
      }
LABEL_123:
      v55 = 2;
      v20 = v155;
LABEL_270:
      v10 |= v55;
      v154 = v10;
      v121 = a1;
      k = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)k != 595 || (v122 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
        v122 = 0LL;
      if ( (unsigned int)(k - 571) > 1
        && ((unsigned int)(k - 577) > 3 && (unsigned int)(k - 581) > 5 && (unsigned int)(k - 593) > 2
         || !CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v122, *(_WORD *)(a1 + 16)))
        || (*(_DWORD *)(gptiCurrent + 1224LL) & 0x2000) != 0
        || (v123 = 1, (unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16))) )
      {
        v123 = 0;
      }
      v30 = (unsigned int)v161;
      if ( (!v161 || !v163 || !*(_QWORD *)(gptiCurrent + 1256LL)) && !v123 )
      {
        if ( !v161 )
          goto LABEL_302;
        if ( *(_DWORD *)(a1 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1344LL) & 1) != 0 )
        {
          v26 = v168;
          if ( (v168 & 1) != 0 )
          {
            v124 = xxxKeyboardCorrectionCallout(a1);
            v30 = (unsigned int)v161;
            if ( v124 == 1296 )
            {
              *(_DWORD *)(a1 + 8) = 0;
              *(_QWORD *)(a1 + 16) = 0LL;
              *(_QWORD *)(a1 + 24) = 0LL;
            }
          }
        }
      }
      if ( !(_DWORD)v30 )
        goto LABEL_302;
      v125 = *(_DWORD *)(a1 + 8);
      if ( v125 == 258
        || (unsigned int)(v125 - 578) <= 5 && (v26 = 51LL, _bittest((const int *)&v26, v125 - 578))
        || (k = 49152LL, (unsigned __int16)v125 >= 0xC000u) )
      {
        v126 = xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, a1);
        v30 = (unsigned int)v161;
        if ( v126 )
        {
          if ( *(_DWORD *)(a1 + 8) == 258 )
          {
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0LL;
            *(_QWORD *)(a1 + 24) = 0LL;
          }
        }
      }
      if ( !(_DWORD)v30 || !v163 || !*(_QWORD *)(gptiCurrent + 1256LL) )
      {
LABEL_302:
        if ( !v123 )
        {
          v127 = *(__int64 **)(gptiCurrent + 456LL);
          k = *v127;
          v26 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v127 + 16));
          if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*v127 + 16)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, a1, 3);
            v30 = (unsigned int)v161;
          }
        }
      }
      if ( (_DWORD)v30 )
      {
        v128 = *(_DWORD *)(gptiCurrent + 1112LL);
        if ( v128 )
        {
          if ( word_1C032C300 && qword_1C032C308 == gptiCurrent && dword_1C032C304 == v128 )
          {
            ForceCompletePendingPromotion();
            xxxProcessMousePromotionQueue();
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 1112LL) = 0;
          }
        }
        v129 = *(_DWORD *)(a1 + 8);
        if ( v129 == 583
          && (*(_WORD *)(a1 + 18) & 0x2000) != 0
          && word_1C032C300
          && word_1C032C300 == *(_WORD *)(a1 + 16)
          && qword_1C032C308 == gptiCurrent )
        {
          *(_DWORD *)(gptiCurrent + 1112LL) = dword_1C032C304;
          v129 = *(_DWORD *)(a1 + 8);
        }
        v130 = 0;
        if ( ((unsigned int)(v129 - 577) <= 3 || (unsigned int)(v129 - 581) <= 0x12 && v129 != 589) && v129 != 595 )
          v130 = *(_WORD *)(a1 + 16);
        CTouchProcessor::UpdateThreadPointerList(
          gpTouchProcessor,
          (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
          v130);
      }
      if ( !v163 || (*((_DWORD *)v163 + 25) & 0x100) == 0 )
        break;
      CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
        (CMultiPerObjectLockExclusivePpiPtiQ *)v159,
        gptiCurrent);
      if ( !v161 || !*(_QWORD *)(gptiCurrent + 1256LL) )
      {
        *((_DWORD *)v163 + 25) &= ~0x100u;
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v159);
        break;
      }
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v171, L"Delegation", 0LL);
      EtwTraceBeginDelegateInputCallback(v163, a1);
      InputTraceLogging::Delivery::CallDelegateThread(v163);
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        &v174,
        L"DelegationCallout",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v171);
      v131 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1256LL), a1, *(_QWORD *)(gptiCurrent + 1264LL));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v174);
      EtwTraceEndDelegateInputCallback(v163, a1);
      if ( (*((_DWORD *)v163 + 25) & 0x20) != 0 )
      {
        TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
        CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v175, TouchProcessorLock);
        *((_DWORD *)v163 + 25) &= ~0x100u;
        _HandleDelegatedInputWorker(gptiCurrent, v131, v163);
        CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v175);
      }
      v10 = 0x20000;
      v154 = 0x20000;
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v171);
      CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v159);
      v34 = v156;
      v35 = i;
    }
    if ( !v123 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v176, L"PTPDownleveling", 0LL);
    xxxClientCallDefaultInputHandler(a1);
    v185 = 0uLL;
    v186 = 0uLL;
    v187 = 0uLL;
    *(_OWORD *)a1 = 0uLL;
    *(_OWORD *)(a1 + 16) = v186;
    *(_OWORD *)(a1 + 32) = v187;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v176);
    v34 = v156;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v10 |= 0x40000u;
LABEL_381:
    v11 = 0;
    goto LABEL_382;
  }
  if ( v161 )
  {
    v134 = *(_QWORD *)(gptiCurrent + 1056LL);
    if ( v134 )
    {
      LOBYTE(v26) = 18;
      v135 = HMValidateHandleNoRip(v134, v26, v30);
      if ( v135 )
        FreeHidData(v135);
      *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
    }
    v136 = *(_QWORD *)(gptiCurrent + 1064LL);
    if ( v136 )
    {
      FreeTouchInputInfo(v136, 1LL);
      *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
    }
    k = *(_QWORD *)(gptiCurrent + 1072LL);
    if ( k )
    {
      FreeGestureInfo(k, 1LL);
      *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
    }
    v137 = *(_DWORD *)(a1 + 8);
    if ( v137 == 255 )
    {
      if ( *(_QWORD *)(a1 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 1056LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( v137 == 576 && (LOBYTE(v26) = 20, HMValidateHandle(*(_QWORD *)(a1 + 24), v26, v30, v31)) )
    {
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v26) = 21;
      if ( HMValidateHandle(*(_QWORD *)(a1 + 24), v26, v30, v31) )
        *(_QWORD *)(gptiCurrent + 1072LL) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_382:
  if ( v164 )
    ThreadUnlock1(k, v26, v30);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v11 )
    {
      if ( *(_DWORD *)(v121 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
      {
        v141 = *(_DWORD **)(gptiCurrent + 664LL);
        if ( v141 )
        {
          if ( (v141[49] & 0x100000) != 0 && v141[82] )
          {
            v142 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                 - v141[82];
            v141[83] += v142;
            ++v141[84];
            v141[82] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1176LL) = *(_QWORD *)v121;
      *(_DWORD *)(gptiCurrent + 1184LL) = *(_DWORD *)(v121 + 8);
      *(_QWORD *)(gptiCurrent + 1192LL) = *(_QWORD *)(v121 + 16);
      v145 = *(_QWORD *)v121;
      v146 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v142, v141, v143, v144) )
        PsGetThreadWin32Thread(v146);
      if ( (unsigned __int64)(unsigned __int16)v145 < *(_QWORD *)(gpsi + 8LL) )
      {
        v148 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v145 * LODWORD(gSharedInfo[2]);
        v150 = (struct tagWND **)HMPkheFromPhe(v148);
        v151 = v145 >> 16;
        if ( ((_WORD)v151 == *(_WORD *)(v148 + 26)
           || (_WORD)v151 == 0xFFFF
           || !(_WORD)v151 && PsGetCurrentProcessWow64Process(v149))
          && (*(_BYTE *)(v148 + 25) & 1) == 0
          && *(_BYTE *)(v148 + 24) == 1 )
        {
          v9 = *v150;
        }
      }
      v121 = a1;
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, gptiCurrent, v9, v147, v161);
    }
  }
  else
  {
    v11 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v10, v121);
  return v11;
}
