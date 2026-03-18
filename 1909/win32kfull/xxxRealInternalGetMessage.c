/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C003CAC0
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     NtUserRealInternalGetMessage @ 0x1C003BE20 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C003BF10 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C003C8F0 (NtUserPeekMessage.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C00073F0 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009FA0 (SlowAppThreadInShellFrame.c)
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC80 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0016FD4 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxDoPaint @ 0x1C003B610 (xxxDoPaint.c)
 *     CalcWakeMask @ 0x1C003E910 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C003EC00 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C003EC90 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C003EDD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C003F628 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 *     zzzCalcStartCursorHide @ 0x1C004CA60 (zzzCalcStartCursorHide.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _IsChild @ 0x1C00F5DAC (_IsChild.c)
 *     IsShellFrameHangResilient @ 0x1C00FB04C (IsShellFrameHangResilient.c)
 *     xxxDoSysExpunge @ 0x1C01022DC (xxxDoSysExpunge.c)
 *     WaitMaskIncludesUserInput @ 0x1C010BFFC (WaitMaskIncludesUserInput.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C01651C4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01CF4D0 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01E1330 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E13E0 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E30E8 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1D80 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F2334 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F2628 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0207570 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0207FB4 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     _FreeGestureInfo @ 0x1C0213F30 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C021D838 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C021D9A8 (xxxClientCallDelegateThread.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C023FED8 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  __int16 v30; // di
  __int16 v31; // si
  __int64 v32; // rcx
  __int64 k; // rcx
  unsigned __int64 j; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v36; // rdi
  _QWORD *ThreadWin32Thread; // rax
  int v38; // r14d
  int v39; // eax
  int v40; // esi
  int v41; // esi
  __int16 v42; // di
  struct tagWND *v43; // r14
  int v44; // eax
  struct tagWND *v45; // rsi
  int v46; // eax
  unsigned int v47; // r9d
  unsigned int v48; // r10d
  unsigned int v49; // eax
  unsigned int v50; // edi
  unsigned int v51; // ecx
  int v52; // eax
  int v53; // edi
  __int64 v54; // rdi
  __int64 v55; // rdx
  struct _KEVENT *v56; // rcx
  __int64 v57; // rax
  struct _KEVENT *v58; // rcx
  int v59; // eax
  __int16 v60; // dx
  __int64 v61; // r9
  __int64 m; // rdi
  __int64 v63; // rdx
  unsigned __int64 v64; // rsi
  int v65; // r8d
  unsigned int v66; // edx
  _DWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  int v73; // eax
  _DWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  _DWORD *v78; // rsi
  _QWORD *v79; // rax
  __int64 v80; // r10
  int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 *v88; // rax
  struct _LIST_ENTRY *v90; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v93; // rcx
  __int64 v94; // rsi
  unsigned int v95; // edi
  __int64 v96; // r14
  __int64 v97; // rax
  int v98; // eax
  int v99; // r11d
  int v100; // ecx
  int v101; // eax
  unsigned int v102; // edi
  int v103; // eax
  struct tagWND *v104; // rsi
  int v105; // r12d
  __int64 v106; // rcx
  __int64 v107; // r13
  int v108; // ecx
  unsigned int v109; // eax
  unsigned int v110; // esi
  unsigned int v111; // eax
  unsigned int v112; // r14d
  unsigned int v113; // eax
  unsigned int v114; // r15d
  BOOL v115; // eax
  __int64 v116; // rsi
  unsigned __int64 v117; // r8
  int v118; // edi
  int v119; // eax
  int v120; // eax
  int v121; // eax
  __int64 *v122; // rax
  int v123; // eax
  int v124; // ecx
  unsigned __int16 v125; // r8
  unsigned int v126; // edi
  struct CInpLockGuard *TouchProcessorLock; // rax
  struct tagTHREADINFO *v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  int v132; // eax
  __int64 v133; // rdi
  __int64 v134; // rax
  int v135; // eax
  _DWORD *v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  unsigned __int64 v139; // rdi
  struct _KTHREAD *v140; // rsi
  struct tagBWND *v141; // r9
  __int64 v142; // rsi
  __int64 v143; // rcx
  struct tagWND **v144; // r14
  unsigned __int64 v145; // rdi
  int v146; // [rsp+28h] [rbp-1B0h]
  int v147[2]; // [rsp+30h] [rbp-1A8h]
  int v148; // [rsp+70h] [rbp-168h]
  unsigned int v149; // [rsp+74h] [rbp-164h]
  __int16 v150; // [rsp+78h] [rbp-160h]
  __int16 i; // [rsp+7Ah] [rbp-15Eh]
  unsigned int v152; // [rsp+7Ch] [rbp-15Ch]
  _BYTE v153[4]; // [rsp+80h] [rbp-158h] BYREF
  unsigned int v154; // [rsp+84h] [rbp-154h]
  int v155; // [rsp+88h] [rbp-150h]
  unsigned int v156; // [rsp+8Ch] [rbp-14Ch]
  struct tagQMSG *v157; // [rsp+90h] [rbp-148h] BYREF
  int v158; // [rsp+98h] [rbp-140h]
  struct tagWND *v159; // [rsp+A0h] [rbp-138h]
  int v160; // [rsp+A8h] [rbp-130h] BYREF
  unsigned int v161; // [rsp+ACh] [rbp-12Ch]
  unsigned int v162; // [rsp+B0h] [rbp-128h] BYREF
  int v163; // [rsp+B4h] [rbp-124h]
  int v164; // [rsp+C0h] [rbp-118h]
  LPCWSTR *v165; // [rsp+D0h] [rbp-108h] BYREF
  char v166[12]; // [rsp+DCh] [rbp-FCh] BYREF
  __int64 v167; // [rsp+E8h] [rbp-F0h] BYREF
  LPCWSTR *v168; // [rsp+F0h] [rbp-E8h] BYREF
  char v169[8]; // [rsp+F8h] [rbp-E0h] BYREF
  LPCWSTR *v170; // [rsp+100h] [rbp-D8h] BYREF
  struct tagTHREADINFO *v171; // [rsp+108h] [rbp-D0h]
  __int64 v172; // [rsp+110h] [rbp-C8h] BYREF
  struct tagWND *v173; // [rsp+118h] [rbp-C0h]
  __int64 v174; // [rsp+120h] [rbp-B8h]
  __int64 v175; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v176; // [rsp+130h] [rbp-A8h]
  __int64 v177; // [rsp+138h] [rbp-A0h]
  __int64 v178; // [rsp+140h] [rbp-98h]
  __int128 v179; // [rsp+148h] [rbp-90h]
  __int128 v180; // [rsp+158h] [rbp-80h]
  __int128 v181; // [rsp+168h] [rbp-70h]
  char v182[80]; // [rsp+188h] [rbp-50h] BYREF
  char v184; // [rsp+1E8h] [rbp+10h]

  v172 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v184 = 0;
  v9 = 0LL;
  v162 = 0;
  v156 = 0;
  v154 = 0;
  v152 = 0;
  v10 = 0;
  v148 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    v11 = 1;
    a2 = 1LL;
LABEL_8:
    v159 = (struct tagWND *)a2;
    v14 = 0;
    goto LABEL_9;
  }
  if ( a2 < 2 )
  {
    v11 = 1;
    goto LABEL_8;
  }
  v12 = (struct tagWND *)ValidateHwnd(a2);
  v159 = v12;
  if ( !v12 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v172 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v172;
  v173 = v12;
  HMLockObject(v12);
  v11 = 1;
  v14 = 1;
LABEL_9:
  v158 = v14;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v15 = 0xFFFFFFFFLL;
  if ( a4 )
    v15 = a4;
  v161 = v15;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v16 = a5;
  v20 = CalcWakeMask(a3, v15, WORD1(a5));
  v149 = v20;
  v164 = v20 & 0x1C07;
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
      if ( *((_QWORD *)v159 + 2) == gptiCurrent )
        xxxUpdateInputHangInfo(v159, 1LL);
      v16 = a5;
    }
    else if ( !a2 )
    {
      xxxUpdateInputHangInfo(0LL, 1LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17);
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
    LODWORD(v23) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
    if ( ((unsigned int)v23 & WPP_MAIN_CB.Dpc.TargetInfoAsUlong) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v155 = v16 & 1;
  if ( (v16 & 1) != 0 && (v20 & 0x1CBF) != 0 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x80000) != 0 )
  {
    LODWORD(v23) = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
    if ( ((unsigned int)v23 & v20) != 0 )
    {
      v23 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( !*(_QWORD *)(v23 + 56) )
      {
        v23 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
        if ( !*(_QWORD *)(v23 + 48) )
          TryAttachShellFrame(gptiCurrent, v24);
      }
    }
  }
  v25 = *(_QWORD *)(gptiCurrent + 424LL);
  v26 = *(_QWORD *)(v25 + 72);
  if ( *(_QWORD *)(gptiCurrent + 504LL)
    || v26 == gptiCurrent && *(_QWORD *)(v25 + 80) == *(_QWORD *)(gptiCurrent + 568LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        v23,
        v24,
        18,
        15,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        v25,
        *(_QWORD *)(v25 + 72));
    v184 = 1;
  }
  else
  {
    v27 = *(_QWORD *)(v25 + 72);
    if ( !v26 || *(_DWORD *)(v26 + 896) || !PhkFirstGlobalValid(gptiCurrent, 1) )
      goto LABEL_46;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(v28, v24, 18, 16, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, v25, v26);
  }
  v27 = 0LL;
  *(_QWORD *)(v25 + 72) = 0LL;
LABEL_46:
  if ( v27 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v163 = v16 & 2;
  if ( (v16 & 2) == 0 )
  {
    v29 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v29 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v29 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x80000u;
    }
  }
  v30 = v20 & 0xFFBF;
  v150 = v20 & 0xFFBF;
  v31 = ~(v20 & 0xFFBF);
  for ( i = v31; ; v31 = i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_52:
        v157 = 0LL;
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
        if ( *(_QWORD *)(gptiCurrent + 448LL) == gpdeskRecalcQueueAttach )
        {
          gpdeskRecalcQueueAttach = 0LL;
          if ( *(_QWORD *)(gptiCurrent + 448LL) )
          {
            if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
              && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL) )
            {
              zzzReattachThreads(2LL, 0LL, 0LL);
            }
          }
        }
        v32 = *(_QWORD *)(gptiCurrent + 440LL);
        *(_WORD *)(gptiCurrent + 872LL) |= *(_WORD *)(v32 + 4) & v30;
        *(_WORD *)(v32 + 4) &= v31;
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
        LOBYTE(k) = v164 != 0;
        if ( v164 != 0 && (v20 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1116LL) )
        {
          do
          {
            *(_DWORD *)(gptiCurrent + 1116LL) = 0;
            for ( j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
                  j;
                  j = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL)) )
            {
              xxxNotifyCaptureChangeIfCaptured(j, (struct tagWND *)v24, v26);
            }
          }
          while ( *(_DWORD *)(gptiCurrent + 1116LL) );
        }
        if ( *(_QWORD *)(gptiCurrent + 1464LL) && (v20 & 8) != 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v36 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(k, v24, v26) )
          {
            ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v36 = (_QWORD *)*ThreadWin32Thread;
          }
          v175 = 0LL;
          v176 = 0LL;
          v177 = 0LL;
          v178 = 0LL;
          v167 = 0LL;
          v38 = 0;
          ZwSetIoCompletionEx(v36[178], v36[182], 0LL, 2LL, 0, 0LL);
          while ( 1 )
          {
            LOBYTE(v146) = 0;
            v39 = ZwRemoveIoCompletionEx(v36[178], &v175, 1LL, v166, &v167, v146);
            v40 = 0;
            if ( v39 )
            {
              if ( v39 == 258 )
                goto LABEL_73;
            }
            else
            {
              if ( (_DWORD)v176 == 1 )
              {
                v38 = 1;
                continue;
              }
              if ( (_DWORD)v176 == 2 )
                goto LABEL_73;
              if ( !(_DWORD)v176 && v36[183] )
              {
                v40 = v176 + 4;
                xxxHandleCoreMessagingQueueCompletion(v36, &v175, 1LL);
              }
            }
            if ( v40 != 4 )
            {
LABEL_73:
              if ( v38 )
                ZwAssociateWaitCompletionPacket(v36[181], v36[178], v36[180], 0LL, 1LL, 0, 0LL, 0LL);
              v20 = v149;
              break;
            }
          }
        }
        v41 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
        v42 = v20 & v41;
        if ( (v20 & v41) == 0 )
        {
          v10 |= 0x100u;
LABEL_78:
          v148 = v10;
          goto LABEL_79;
        }
        k = *(_QWORD *)(gptiCurrent + 424LL);
        if ( *(_QWORD *)(k + 72) != gptiCurrent || (*(_DWORD *)(k + 396) & 0x400) == 0 )
          goto LABEL_102;
        EtwTraceInputQueueNoRemoveLocker();
        if ( (v42 & 0x3C07) != 0 )
          break;
        if ( (v41 & 0x2000) != 0 )
        {
          v10 |= 0x200u;
          goto LABEL_78;
        }
LABEL_102:
        v43 = v159;
LABEL_103:
        if ( (v42 & 8) != 0
          && (unsigned int)xxxReadPostMessage(
                             gptiCurrent,
                             (struct tagMSG *)a1,
                             v43,
                             a3,
                             v161,
                             (struct _QMSG_POSTCHAR_FLAGS *)&v162,
                             v155) )
        {
          v52 = 1;
          v20 = v149;
          goto LABEL_270;
        }
        if ( v43 == (struct tagWND *)1 )
        {
          v10 |= 0x400u;
          goto LABEL_78;
        }
        if ( (v42 & 0x3C07) != 0 )
        {
          v147[0] = v42 & 0x3C07;
          v45 = v159;
          v46 = xxxScanSysQueue(gptiCurrent, a1, v159, a3, v161, a5, *(_QWORD *)v147, &v157);
          if ( v46 != 2 )
          {
            v154 = 0;
            v152 = 0;
            v156 = 0;
            if ( v46 != 1 )
              goto LABEL_127;
            goto LABEL_123;
          }
          if ( !(unsigned int)IsShellFrameHangResilient(gptiCurrent) || (v42 & 1) == 0 || !a6 )
            goto LABEL_127;
          v47 = 0;
          v26 = v156;
          if ( v156 )
            v47 = v152;
          v152 = v47;
          v48 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( v156 )
            v48 = v154;
          v154 = v48;
          v49 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( v156 )
            v49 = v156;
          v156 = v49;
          v50 = v49;
          v51 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v49;
          if ( v51 >= 0xFA )
          {
            v156 = v49;
            if ( v48 == v49 )
            {
              TraceLoggingSysQueueLockedRetryFailed(v47, v51);
              v154 = 0;
              v156 = v50;
              v26 = v152;
            }
            goto LABEL_127;
          }
          v20 = v149;
          xxxSleepThread2(v149, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v160);
          ++v152;
          v24 = v154;
          v30 = v150;
          v31 = i;
        }
        else
        {
          if ( (v41 & 0x2000) != 0 )
          {
            v10 |= 0x800u;
            goto LABEL_78;
          }
          v45 = v159;
LABEL_127:
          k = *(_QWORD *)(gptiCurrent + 440LL);
          v24 = *(unsigned __int16 *)(k + 6);
          v20 = v149;
          if ( ((unsigned __int8)v149 & (unsigned __int8)*(_WORD *)(k + 6) & 0x40) != 0 )
          {
            if ( (v24 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v24 & 0x40) != 0 )
          {
            v10 |= 0x1000u;
            goto LABEL_78;
          }
          LOWORD(v53) = *(_WORD *)(k + 6);
          if ( ((unsigned __int16)v149 & (unsigned __int16)v53) == 0 )
          {
            v10 |= 0x2000u;
            goto LABEL_78;
          }
          if ( ((unsigned __int8)v149 & (unsigned __int8)v53 & 0x20) != 0 && (unsigned int)xxxDoPaint(v45, a1) )
          {
            v52 = 4;
            goto LABEL_270;
          }
          if ( v163 )
            goto LABEL_161;
          v54 = PsGetCurrentProcessWin32Process(k, v24);
          *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v55 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
              v56 = *(struct _KEVENT **)(v55 + 32);
              if ( v56 )
              {
                if ( v56 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v56, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v55 + 32) = -1LL;
              }
            }
          }
          else
          {
            v57 = *(_QWORD *)(gptiCurrent + 416LL);
            if ( !*(_QWORD *)(v57 + 328) )
            {
              *(_QWORD *)(v57 + 328) = gptiCurrent;
              v57 = *(_QWORD *)(gptiCurrent + 416LL);
            }
            if ( *(_QWORD *)(v57 + 328) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v58 = *(struct _KEVENT **)(v54 + 16);
              if ( v58 )
              {
                if ( v58 == (struct _KEVENT *)-1LL )
                  goto LABEL_150;
                KeSetEvent(v58, 1, 0);
                ObfDereferenceObject(*(PVOID *)(v54 + 16));
              }
              *(_QWORD *)(v54 + 16) = -1LL;
            }
          }
LABEL_150:
          v59 = *(_DWORD *)(v54 + 12);
          if ( (v59 & 4) != 0 )
          {
            *(_DWORD *)(v54 + 12) = v59 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0LL);
          }
          for ( k = *(_QWORD *)(gptiCurrent + 440LL); (*(_BYTE *)(k + 6) & 0x40) != 0; k = *(_QWORD *)(gptiCurrent + 440LL) )
            xxxReceiveMessage(gptiCurrent);
          v60 = *(_WORD *)(k + 6);
          if ( ((unsigned __int8)v149 & (unsigned __int8)v60 & 0x40) != 0 )
          {
            if ( (v60 & 0x40) != 0 )
            {
              do
              {
                xxxReceiveMessage(gptiCurrent);
                k = *(_QWORD *)(gptiCurrent + 440LL);
              }
              while ( (*(_BYTE *)(k + 6) & 0x40) != 0 );
            }
          }
          else if ( (v60 & 0x40) != 0 )
          {
            v10 |= 0x4000u;
            goto LABEL_78;
          }
          v53 = *(unsigned __int16 *)(k + 6);
          if ( (v53 & v149) == 0 )
          {
            v10 |= 0x8000u;
            goto LABEL_78;
          }
LABEL_161:
          if ( ((unsigned __int8)v149 & (unsigned __int8)v53 & 0x10) != 0 )
          {
            v61 = gptiCurrent + 1208LL;
            for ( m = *(_QWORD *)(gptiCurrent + 1208LL); m != v61; m = *(_QWORD *)m )
            {
              v63 = *(_QWORD *)(m + 32);
              if ( !v45 || v45 == (struct tagWND *)v63 || (unsigned int)IsChild(v45, v63) )
              {
                if ( (gdwExtraInstrumentations & 2) != 0 )
                {
                  v64 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  v65 = v64 - *(_DWORD *)(m + 72);
                  v61 = (unsigned int)dword_1C032A7E0;
                  if ( !dword_1C032A7E0 )
                    v61 = (unsigned int)v64;
                  dword_1C032A7E0 = v61;
                  v66 = 0;
                  v67 = &unk_1C02DCCB8;
                  do
                  {
                    if ( *(_DWORD *)(m - 16) <= *v67 )
                      break;
                    ++v66;
                    ++v67;
                  }
                  while ( v66 < 7 );
                  v68 = v66 + 8LL * gTimerCoalCurrentState;
                  ++gaTimerDeliveryDistribution[2 * v68];
                  v26 = (unsigned int)(v65 - *(_DWORD *)(m - 16));
                  v63 = (unsigned int)(v26 + gaTimerDeliveryDistribution[2 * v68 + 1]);
                  gaTimerDeliveryDistribution[2 * v68 + 1] = v63;
                  if ( gaTimerDeliveryDistribution[2 * v68] >= 0x7FFFFFFFu
                    || (int)v63 >= 0x3FFFFFFF
                    || (unsigned int)(v64 - v61) >= 0xEA60 )
                  {
                    v69 = 0LL;
                    if ( gSessionId != gServiceSessionId )
                      v69 = 16LL;
                    dword_1C0329408 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v69);
                    v70 = 4LL;
                    if ( gSessionId != gServiceSessionId )
                      v70 = 20LL;
                    dword_1C0329448 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v70);
                    v71 = 8LL;
                    if ( gSessionId != gServiceSessionId )
                      v71 = 24LL;
                    dword_1C0329488 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v71);
                    v72 = 12LL;
                    if ( gSessionId != gServiceSessionId )
                      v72 = 28LL;
                    dword_1C03294C8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v72);
                    EtwTraceTimerDelayStatistics(
                      (unsigned int)gSessionId,
                      8LL,
                      4LL,
                      &unk_1C02DCCB8,
                      32,
                      8,
                      gaTimerDeliveryDistribution);
                    dword_1C032A7E0 = v64;
                    memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
                  }
                }
                v73 = *(_DWORD *)(m + 76);
                if ( *(_DWORD *)(m + 72) == v73 )
                  *(_DWORD *)(m + 72) = v73;
                if ( *(_DWORD *)(gptiCurrent + 816LL) < gUserPostMessageLimit )
                {
                  v74 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                  v78 = v74;
                  if ( v74 )
                  {
                    memset(v74, 0, 0xA8uLL);
                    if ( *(_DWORD *)(gptiCurrent + 820LL) == 2 )
                      v78[25] |= 8u;
                    else
                      v78[25] |= 4u;
                    v79 = *(_QWORD **)(gptiCurrent + 808LL);
                    if ( v79 )
                    {
                      *v79 = v78;
                      *((_QWORD *)v78 + 1) = *(_QWORD *)(gptiCurrent + 808LL);
                    }
                    else
                    {
                      *(_QWORD *)(gptiCurrent + 800LL) = v78;
                    }
                    *(_QWORD *)(gptiCurrent + 808LL) = v78;
                    ++*(_DWORD *)(gptiCurrent + 816LL);
                    v80 = *(_QWORD *)(m + 32);
                    if ( v80 )
                    {
                      v81 = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 288LL);
                    }
                    else
                    {
                      v82 = *(_QWORD *)(gptiCurrent + 424LL);
                      v83 = *(_QWORD *)(v82 + 128);
                      if ( v83 )
                        v84 = *(_QWORD *)(v83 + 16);
                      else
                        v84 = *(_QWORD *)(v82 + 104);
                      v81 = *(_DWORD *)(*(_QWORD *)(v84 + 416) + 280LL);
                    }
                    if ( (*(_DWORD *)(m - 8) & 2) == 0 || (v85 = 280LL, !*(_QWORD *)(m - 24)) )
                      v85 = *(_QWORD *)(m - 24);
                    v86 = 280LL;
                    if ( (*(_DWORD *)(m - 8) & 2) == 0 )
                      v86 = 275LL;
                    StoreQMessage(v78, v80, v86, *(_QWORD *)(m + 40), v85, 0, 0LL, 0, 0LL, 0, 0LL, v81, 0LL, 0LL);
                    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
                    {
                      v26 = 264LL;
                      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x108u;
                      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x108u;
                      if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) & 0x108) != 0 )
                        KeSetEvent(*(PRKEVENT *)(gptiCurrent + 728LL), 2, 0);
                    }
                  }
                  else
                  {
                    UserSetLastError(8LL, v75, v76, v77);
                  }
                }
                else
                {
                  UserSetLastError(1816LL, v63, v26, v61);
                }
                *(_DWORD *)(m - 8) &= ~1u;
                v87 = *(_QWORD *)(m - 32);
                v24 = *(_QWORD *)m;
                v88 = *(__int64 **)(m + 8);
                if ( *(_QWORD *)(*(_QWORD *)m + 8LL) != m || *v88 != m )
                  __fastfail(3u);
                *v88 = v24;
                *(_QWORD *)(v24 + 8) = v88;
                *(_QWORD *)m = 0LL;
                *(_QWORD *)(m + 8) = 0LL;
                if ( (*(_DWORD *)(v87 + 596))-- == 1 )
                  *(_WORD *)(*(_QWORD *)(v87 + 440) + 6LL) &= ~0x10u;
                v90 = (struct _LIST_ENTRY *)(m + 16);
                Flink = v90->Flink;
                Blink = v90->Blink;
                if ( v90->Flink->Blink != v90 || Blink->Flink != v90 )
                  __fastfail(3u);
                Blink->Flink = Flink;
                Flink->Blink = Blink;
                v93 = gtmrListHead->Blink;
                if ( v93->Flink != gtmrListHead )
                  __fastfail(3u);
                v90->Flink = gtmrListHead;
                v90->Blink = v93;
                v93->Flink = v90;
                gtmrListHead->Blink = v90;
                v10 |= 8u;
                v148 = v10;
                v20 = v149;
                v30 = v150;
                v31 = i;
                goto LABEL_52;
              }
            }
          }
LABEL_79:
          v24 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(v24 + 72) == gptiCurrent )
          {
            *(_QWORD *)(v24 + 80) = 0LL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                k,
                v24,
                18,
                17,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                gptiCurrent,
                *(_QWORD *)(gptiCurrent + 424LL));
            *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 72LL) = 0LL;
            **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
            v184 = 1;
            v24 = *(_QWORD *)(gptiCurrent + 424LL);
          }
          else if ( !v184 )
          {
            goto LABEL_234;
          }
          if ( *(_DWORD *)(v24 + 400) > 1u )
          {
            v94 = 0LL;
            v95 = 0;
            CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v182, v24);
            v96 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL);
            if ( v96 )
            {
              if ( (*(_DWORD *)(v96 + 100) & 0x10) == 0 )
              {
                v97 = *(_QWORD *)(v96 + 104);
                if ( v97 != gptiCurrent )
                {
                  v94 = *(_QWORD *)(v96 + 104);
                  if ( v97 )
                  {
                    v98 = CalcWakeMask(*(unsigned int *)(v96 + 24), *(unsigned int *)(v96 + 24), 0LL);
                    v100 = -8265;
                    v24 = 4294967223LL;
                    if ( *(_DWORD *)(v96 + 96) )
                      v100 = -73;
                    v101 = v100 & v98;
                    v95 = v101 & 0xFFFFFF7F;
                    if ( v99 == 786 )
                      v95 = v101;
                    k = v95 & *(_WORD *)(*(_QWORD *)(v94 + 440) + 4LL);
                    if ( (_DWORD)k == v95 )
                      v94 = 0LL;
                  }
                }
              }
            }
            if ( v94 )
              SetWakeBit(v94, v95);
          }
LABEL_234:
          if ( !a6 )
          {
            if ( v163 )
              goto LABEL_380;
            v133 = PsGetCurrentProcessWin32Process(k, v24);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
            {
              k = *(_QWORD *)(gptiCurrent + 608LL);
              if ( *(_QWORD *)(k + 24) )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                k = *(_QWORD *)(v24 + 32);
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
                  *(_QWORD *)(v24 + 32) = -1LL;
                }
              }
              goto LABEL_376;
            }
            v134 = *(_QWORD *)(gptiCurrent + 416LL);
            if ( !*(_QWORD *)(v134 + 328) )
            {
              *(_QWORD *)(v134 + 328) = gptiCurrent;
              v134 = *(_QWORD *)(gptiCurrent + 416LL);
            }
            if ( *(_QWORD *)(v134 + 328) != gptiCurrent )
              goto LABEL_376;
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            k = *(_QWORD *)(v133 + 16);
            if ( k )
            {
              if ( k == -1 )
              {
LABEL_376:
                v135 = *(_DWORD *)(v133 + 12);
                if ( (v135 & 4) != 0 )
                {
                  *(_DWORD *)(v133 + 12) = v135 & 0xFFFFFFFB;
                  zzzCalcStartCursorHide(0LL, 0LL);
                }
                while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
                  xxxReceiveMessage(gptiCurrent);
                goto LABEL_380;
              }
              KeSetEvent((PRKEVENT)k, 1, 0);
              ObfDereferenceObject(*(PVOID *)(v133 + 16));
            }
            *(_QWORD *)(v133 + 16) = -1LL;
            goto LABEL_376;
          }
          v102 = 0;
          if ( v158 )
          {
            v20 = v149;
            v103 = WaitMaskIncludesUserInput(v149);
            v104 = v159;
            if ( v103 && *((_QWORD *)v159 + 2) == gptiCurrent )
            {
              v102 = 1;
              xxxUpdateInputHangInfo(v159, 0LL);
            }
            v105 = xxxRealSleepThread(v149, 0, 1, 0, 0LL);
            if ( v102 )
              xxxUpdateInputHangInfo(v104, 1LL);
LABEL_266:
            if ( !v105 )
            {
              v10 |= 0x10000u;
LABEL_380:
              v116 = a1;
              goto LABEL_381;
            }
            v10 = 0;
            v148 = 0;
            v11 = 1;
            v30 = v150;
            v31 = i;
          }
          else
          {
            v160 = 0;
            v106 = *(_QWORD *)(gptiCurrent + 424LL);
            v107 = *(_QWORD *)(v106 + 80);
            v171 = *(struct tagTHREADINFO **)(v106 + 72);
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0
              || *(_DWORD *)(v106 + 400) <= 1u
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL)
              || IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v108 = 0;
            }
            else
            {
              v108 = 1;
              v102 = gdwMDAQTimeoutDefenseInDepth;
            }
            v109 = 0;
            if ( !v108 )
              v109 = v152;
            v152 = v109;
            v110 = v109;
            v111 = 0;
            if ( !v108 )
              v111 = v154;
            v154 = v111;
            v112 = v111;
            v113 = 0;
            if ( !v108 )
              v113 = v156;
            v156 = v113;
            v114 = v113;
            v105 = xxxSleepThread2(v149, v102, 1, 0, (enum SLEEP_STATUS *)&v160);
            v115 = 0;
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
            {
              k = *(_QWORD *)(gptiCurrent + 424LL);
              if ( *(_DWORD *)(k + 400) > 1u )
              {
                k = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
                if ( !*(_QWORD *)(k + 48) )
                {
                  k = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
                  if ( !*(_QWORD *)(k + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
                    v115 = 1;
                }
              }
            }
            if ( !v115
              || (k = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), k != *(_QWORD *)(gptiCurrent + 1392LL))
              && (v156 = v114, v154 = v112, v152 = v110, k)
              || (v156 = v114, v154 = v112, v152 = v110, !v160) )
            {
              v9 = 0LL;
              v10 = v148;
              v20 = v149;
              goto LABEL_266;
            }
            v128 = SlowAppThreadInShellFrame(gptiCurrent, v171, v107, v160 == 2);
            if ( v128 )
              TryDetachShellFrame(gptiCurrent, v128, v160 == 2, 0LL);
            v156 = v114;
            v154 = v112;
            v152 = v110;
            v9 = 0LL;
            v11 = 1;
            v10 = v148;
            v20 = v149;
            v30 = v150;
            v31 = i;
          }
        }
      }
      v147[0] = v42 & 0x3C07;
      v43 = v159;
      v44 = xxxScanSysQueue(gptiCurrent, a1, v159, a3, v161, a5, *(_QWORD *)v147, &v157);
      if ( v44 != 1 )
      {
        if ( !v44 && UnblockDeferredInput(gptiCurrent) )
          KeyboardInputTelemetry::LogHanging(gptiCurrent);
        goto LABEL_103;
      }
LABEL_123:
      v52 = 2;
      v20 = v149;
LABEL_270:
      v10 |= v52;
      v148 = v10;
      v116 = a1;
      k = *(unsigned int *)(a1 + 8);
      if ( (_DWORD)k != 595 || (v117 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
        v117 = 0LL;
      if ( (unsigned int)(k - 571) > 1
        && ((unsigned int)(k - 577) > 3 && (unsigned int)(k - 581) > 5 && (unsigned int)(k - 593) > 2
         || !CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v117, *(_WORD *)(a1 + 16)))
        || (*(_DWORD *)(gptiCurrent + 1224LL) & 0x2000) != 0
        || (v118 = 1, (unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16))) )
      {
        v118 = 0;
      }
      v26 = (unsigned int)v155;
      if ( (!v155 || !v157 || !*(_QWORD *)(gptiCurrent + 1256LL)) && !v118 )
      {
        if ( !v155 )
          goto LABEL_302;
        if ( *(_DWORD *)(a1 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1344LL) & 1) != 0 )
        {
          v24 = v162;
          if ( (v162 & 1) != 0 )
          {
            v119 = xxxKeyboardCorrectionCallout((__int128 *)a1, v162);
            v26 = (unsigned int)v155;
            if ( v119 == 1296 )
            {
              *(_DWORD *)(a1 + 8) = 0;
              *(_QWORD *)(a1 + 16) = 0LL;
              *(_QWORD *)(a1 + 24) = 0LL;
            }
          }
        }
      }
      if ( !(_DWORD)v26 )
        goto LABEL_302;
      v120 = *(_DWORD *)(a1 + 8);
      if ( v120 == 258
        || (unsigned int)(v120 - 578) <= 5 && (v24 = 51LL, _bittest((const int *)&v24, v120 - 578))
        || (k = 49152LL, (unsigned __int16)v120 >= 0xC000u) )
      {
        v121 = xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, a1);
        v26 = (unsigned int)v155;
        if ( v121 )
        {
          if ( *(_DWORD *)(a1 + 8) == 258 )
          {
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0LL;
            *(_QWORD *)(a1 + 24) = 0LL;
          }
        }
      }
      if ( !(_DWORD)v26 || !v157 || !*(_QWORD *)(gptiCurrent + 1256LL) )
      {
LABEL_302:
        if ( !v118 )
        {
          v122 = *(__int64 **)(gptiCurrent + 456LL);
          k = *v122;
          v24 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v122 + 16));
          if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*v122 + 16)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, a1, 3);
            v26 = (unsigned int)v155;
          }
        }
      }
      if ( (_DWORD)v26 )
      {
        v123 = *(_DWORD *)(gptiCurrent + 1112LL);
        if ( v123 )
        {
          if ( word_1C032A2F0 && qword_1C032A2F8 == gptiCurrent && dword_1C032A2F4 == v123 )
          {
            ForceCompletePendingPromotion();
            xxxProcessMousePromotionQueue();
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 1112LL) = 0;
          }
        }
        v124 = *(_DWORD *)(a1 + 8);
        if ( v124 == 583
          && (*(_WORD *)(a1 + 18) & 0x2000) != 0
          && word_1C032A2F0
          && word_1C032A2F0 == *(_WORD *)(a1 + 16)
          && qword_1C032A2F8 == gptiCurrent )
        {
          *(_DWORD *)(gptiCurrent + 1112LL) = dword_1C032A2F4;
          v124 = *(_DWORD *)(a1 + 8);
        }
        v125 = 0;
        if ( ((unsigned int)(v124 - 577) <= 3 || (unsigned int)(v124 - 581) <= 0x12 && v124 != 589) && v124 != 595 )
          v125 = *(_WORD *)(a1 + 16);
        CTouchProcessor::UpdateThreadPointerList(
          gpTouchProcessor,
          (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
          v125);
      }
      if ( !v157 || (*((_DWORD *)v157 + 25) & 0x100) == 0 )
        break;
      CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
        (CMultiPerObjectLockExclusivePpiPtiQ *)v153,
        gptiCurrent);
      if ( !v155 || !*(_QWORD *)(gptiCurrent + 1256LL) )
      {
        *((_DWORD *)v157 + 25) &= ~0x100u;
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v153);
        break;
      }
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v165, L"Delegation", 0LL);
      EtwTraceBeginDelegateInputCallback(v157, a1);
      InputTraceLogging::Delivery::CallDelegateThread(v157);
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        &v168,
        L"DelegationCallout",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v165);
      v126 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1256LL), a1, *(_QWORD *)(gptiCurrent + 1264LL));
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v168);
      EtwTraceEndDelegateInputCallback(v157, a1);
      if ( (*((_DWORD *)v157 + 25) & 0x20) != 0 )
      {
        TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
        CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v169, TouchProcessorLock);
        *((_DWORD *)v157 + 25) &= ~0x100u;
        _HandleDelegatedInputWorker(gptiCurrent, v126, v157);
        CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v169);
      }
      v10 = 0x20000;
      v148 = 0x20000;
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v165);
      CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v153);
      v30 = v150;
      v31 = i;
    }
    if ( !v118 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v170, L"PTPDownleveling", 0LL);
    xxxClientCallDefaultInputHandler(a1);
    v179 = 0uLL;
    v180 = 0uLL;
    v181 = 0uLL;
    *(_OWORD *)a1 = 0uLL;
    *(_OWORD *)(a1 + 16) = v180;
    *(_OWORD *)(a1 + 32) = v181;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v170);
    v30 = v150;
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v10 |= 0x40000u;
LABEL_381:
    v11 = 0;
    goto LABEL_382;
  }
  if ( v155 )
  {
    v129 = *(_QWORD *)(gptiCurrent + 1056LL);
    if ( v129 )
    {
      LOBYTE(v24) = 18;
      v130 = HMValidateHandleNoRip(v129, v24, v26);
      if ( v130 )
        FreeHidData(v130);
      *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
    }
    v131 = *(_QWORD *)(gptiCurrent + 1064LL);
    if ( v131 )
    {
      FreeTouchInputInfo(v131, 1LL);
      *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
    }
    k = *(_QWORD *)(gptiCurrent + 1072LL);
    if ( k )
    {
      FreeGestureInfo(k, 1LL);
      *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
    }
    v132 = *(_DWORD *)(a1 + 8);
    if ( v132 == 255 )
    {
      if ( *(_QWORD *)(a1 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 1056LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( v132 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 20) )
    {
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(a1 + 24);
    }
    else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 21) )
    {
      *(_QWORD *)(gptiCurrent + 1072LL) = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_382:
  if ( v158 )
    ThreadUnlock1(k, v24, v26);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v11 )
    {
      if ( *(_DWORD *)(v116 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
      {
        v136 = *(_DWORD **)(gptiCurrent + 664LL);
        if ( v136 )
        {
          if ( (v136[49] & 0x100000) != 0 && v136[82] )
          {
            v137 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                 - v136[82];
            v136[83] += v137;
            ++v136[84];
            v136[82] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1176LL) = *(_QWORD *)v116;
      *(_DWORD *)(gptiCurrent + 1184LL) = *(_DWORD *)(v116 + 8);
      *(_QWORD *)(gptiCurrent + 1192LL) = *(_QWORD *)(v116 + 16);
      v139 = *(_QWORD *)v116;
      v140 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v137, v136, v138) )
        PsGetThreadWin32Thread(v140);
      if ( (unsigned __int64)(unsigned __int16)v139 < *(_QWORD *)(gpsi + 8LL) )
      {
        v142 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v139 * LODWORD(gSharedInfo[2]);
        v144 = (struct tagWND **)HMPkheFromPhe(v142);
        v145 = v139 >> 16;
        if ( ((_WORD)v145 == *(_WORD *)(v142 + 26)
           || (_WORD)v145 == 0xFFFF
           || !(_WORD)v145 && PsGetCurrentProcessWow64Process(v143))
          && (*(_BYTE *)(v142 + 25) & 1) == 0
          && *(_BYTE *)(v142 + 24) == 1 )
        {
          v9 = *v144;
        }
      }
      v116 = a1;
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, gptiCurrent, v9, v141, v155);
    }
  }
  else
  {
    v11 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v10, v116);
  return v11;
}
