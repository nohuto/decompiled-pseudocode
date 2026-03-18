/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0033038
 * Callers:
 *     UserThreadCallout @ 0x1C002E220 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0005AC0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ProtectHandle @ 0x1C000FCDC (ProtectHandle.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0016C10 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     ThreadUnlock1 @ 0x1C0025E10 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     HMLockObject @ 0x1C0026890 (HMLockObject.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00280E0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002C65C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C002F724 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0034500 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0034570 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0035040 (UnlockObjectAssignment.c)
 *     zzzDestroyQueue @ 0x1C0035070 (zzzDestroyQueue.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00353DC (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     LockObjectAssignment @ 0x1C00354C0 (LockObjectAssignment.c)
 *     ?OnThreadTermination@CActivationObject@@SAXXZ @ 0x1C003551C (-OnThreadTermination@CActivationObject@@SAXXZ.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C00355D0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C0035600 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0035E30 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceProcessWindowInfo @ 0x1C00366F0 (EtwTraceProcessWindowInfo.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0036724 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0037258 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003728C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C008BA34 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C008DF0C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0094DE8 (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0096590 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C009D510 (UserDeactivateMITInputProcessing.c)
 *     DisableDelegation @ 0x1C009DD90 (DisableDelegation.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C009DDCC (ApiSetEditionSystemGenerateMove.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00ABCBC (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     CleanupResources @ 0x1C00B6C74 (CleanupResources.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00BD188 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00BD1D4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00BD37C (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00C01C0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C010A180 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C010A30C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C010A4B0 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C010A58C (CleanupRimDevObjInUserModeCallback.c)
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 *     McTemplateK0qqqqq @ 0x1C011121C (McTemplateK0qqqqq.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C01213DC (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01355CC (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0187CEC (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C019DFA4 (ApiSetEditionRemoveFromMsdList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // r15
  struct _NT_TIB *Self; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 i; // rax
  char v10; // al
  unsigned __int64 v11; // rbx
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v14; // r14d
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 ProcessWindowStation; // rax
  _QWORD *v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rbx
  __int64 *v25; // rbx
  struct tagTHREADINFO *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v37; // rax
  int v38; // eax
  void *v39; // rcx
  struct _ETHREAD *v40; // rbx
  CInputThread *v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  int v44; // r14d
  unsigned __int16 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  _QWORD *v51; // rbx
  _QWORD *v52; // r15
  __int64 v53; // rbx
  __int64 v54; // rax
  _DWORD *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD *v62; // rdx
  struct tagTHREADINFO *v63; // rcx
  __int64 v64; // r8
  struct tagTHREADINFO *v65; // rax
  struct tagTHREADINFO *v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  void *v69; // rcx
  void *v70; // rcx
  __int64 v71; // rbx
  struct tagTHREADINFO *v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  void **v78; // rbx
  void **j; // rcx
  __int64 v80; // rcx
  CInputThread *v81; // rcx
  char *v82; // r8
  CInputThread *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  _QWORD *v87; // rdx
  signed __int32 v89[8]; // [rsp+0h] [rbp-1C8h] BYREF
  UINT32 cData[2]; // [rsp+20h] [rbp-1A8h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-1A0h]
  __int64 *v92; // [rsp+50h] [rbp-178h]
  _QWORD v93[2]; // [rsp+58h] [rbp-170h] BYREF
  int v94; // [rsp+68h] [rbp-160h]
  __int64 v95; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v96; // [rsp+78h] [rbp-150h] BYREF
  unsigned int v97; // [rsp+7Ch] [rbp-14Ch] BYREF
  int v98; // [rsp+80h] [rbp-148h] BYREF
  struct tagTHREADINFO *v99; // [rsp+88h] [rbp-140h]
  __int64 v100; // [rsp+90h] [rbp-138h]
  __int64 v101; // [rsp+A8h] [rbp-120h]
  _BYTE v102[8]; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-108h]
  __int64 v105; // [rsp+C8h] [rbp-100h]
  _QWORD v106[3]; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v107; // [rsp+E8h] [rbp-E0h]
  __int64 v108; // [rsp+F8h] [rbp-D0h]
  _QWORD v109[10]; // [rsp+120h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v110; // [rsp+170h] [rbp-58h] BYREF
  int *v111; // [rsp+190h] [rbp-38h]
  __int64 v112; // [rsp+198h] [rbp-30h]

  memset(v109, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v109[1]);
  v101 = MEMORY[0xFFFFF78000000014];
  v109[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v109[3]) = 20;
  LOBYTE(v109[6]) = -1;
  v0 = gptiCurrent;
  v99 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 52);
  v100 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 186);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1488) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 186) + 1224LL) &= ~0x4000000u;
    *((_QWORD *)v0 + 186) = 0LL;
    *((_DWORD *)v0 + 306) &= ~0x4000000u;
  }
  v4 = *((_QWORD *)v0 + 56);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 56));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 120) |= 0x41u;
  if ( (int)IsInkProcessorOnThreadExitSupported() >= 0 )
    InkProcessorOnThreadExit(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported() >= 0 )
    xxxCleanupThreadPointerInputInfo(v0);
  if ( (int)IsUnreferenceUndispatchedFrameListSupported() >= 0 )
    UnreferenceUndispatchedFrameList();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread();
  v5 = *((_QWORD *)v0 + 56);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 216);
    if ( v6 && *(struct tagTHREADINFO **)(v6 + 32) == v0 && (int)IsMagpRevokeInputTransfromSupported() >= 0 )
      MagpRevokeInputTransfrom();
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v102, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v7 = *((_QWORD *)v0 + 56);
    v8 = *((_QWORD *)v0 + 52);
    if ( *(_QWORD *)(v7 + 256) == v8 )
    {
      for ( i = *(_QWORD *)(v8 + 320);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 448) != v7);
            i = *(_QWORD *)(i + 656) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v7 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v102);
  }
  if ( (*((_DWORD *)v0 + 306) & 8) != 0 && (int)IsMagContextThreadCalloutSupported() >= 0 )
    MagContextThreadCallout(&gMagnContext, v0, 0LL, 1LL);
  EtwTraceProcessWindowInfo(v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C020F438 - 1) <= 2u
      || (qword_1C020F420 & 0x8000000000200000uLL) == 0
      || (v10 = 1, (qword_1C020F428 & 0x8000000000200000uLL) != qword_1C020F428) )
    {
      v10 = 0;
    }
    if ( v10 )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      v14 = *((_DWORD *)v0 + 292) != 0 ? v11 - *((_DWORD *)v0 + 292) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 53), v11, &v97, &v96);
      if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
        McTemplateK0qqqqq(v15, (unsigned int)&ThreadExitEvent, v16, ThreadId, ThreadInfoFlags, v14, v97, v96);
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v17 = *((_QWORD *)v0 + 160);
  if ( v17 )
  {
    Win32FreePool(v17);
    *((_QWORD *)v0 + 160) = 0LL;
  }
  if ( (int)IsPatchThreadWindowsSupported() >= 0 )
    PatchThreadWindows(v0);
  if ( *((_QWORD *)v0 + 83) && (int)IsxxxCancelTrackingForThreadSupported() >= 0 )
    xxxCancelTrackingForThread(v0);
  v18 = *((_QWORD *)v0 + 83);
  if ( v18 )
  {
    HMAssignmentUnlock((__int64 *)(v18 + 16));
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 83));
    Win32FreePool(*((_QWORD *)v0 + 83));
    *((_QWORD *)v0 + 83) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported() >= 0 )
  {
    memset(v106, 0, sizeof(v106));
    ProcessWindowStation = _GetProcessWindowStation(0LL);
    v22 = (_QWORD *)ProcessWindowStation;
    if ( ProcessWindowStation )
    {
      PushW32ThreadLock(ProcessWindowStation, v106, CompositionObject::Release);
      ObfReferenceObject(v22);
      if ( (struct tagTHREADINFO *)v22[6] == v0 && (int)IsxxxCloseClipboardSupported() >= 0 )
        xxxCloseClipboard(v22);
      if ( (struct tagTHREADINFO *)v22[7] == v0 )
        v22[7] = 0LL;
      PopAndFreeW32ThreadLock(v106);
    }
  }
  while ( *((_QWORD *)v0 + 75) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v93);
    v23 = (__int64 *)*((_QWORD *)v0 + 75);
    v24 = *v23;
    if ( *v23 != *(_QWORD *)v93[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v93);
      if ( v24 )
      {
        v93[0] = *(_QWORD *)(v24 + 88);
        ++*(_DWORD *)(v93[0] + 8LL);
      }
      else
      {
        v93[0] = &gSmartObjNullRef;
      }
    }
    v25 = v23;
    v92 = v23;
    v26 = (struct tagTHREADINFO *)v23[4];
    if ( gptiCurrent == v26 )
    {
      ++*((_DWORD *)v23 + 10);
    }
    else
    {
      v25 = 0LL;
      v92 = 0LL;
    }
    if ( v0 != v26 )
    {
      if ( v25 )
        xxxUnlockMenuState(v25);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v93);
      break;
    }
    v27 = *((_DWORD *)v23 + 2);
    if ( (v27 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported() >= 0 )
      {
        xxxEndMenuLoop(v23, *(_QWORD *)v93[0]);
LABEL_81:
        v25 = v92;
      }
      if ( v25 )
      {
        *((_DWORD *)v25 + 10) = 0;
        v25 = 0LL;
        v92 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v23);
      goto LABEL_86;
    }
    *((_DWORD *)v23 + 2) = v27 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 396LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported() >= 0 )
      xxxMNCloseHierarchy(*(_QWORD *)v93[0], v23);
    if ( (**(_DWORD **)v93[0] & 1) != 0 || (**(_DWORD **)v93[0] & 0x8000) != 0 )
      goto LABEL_81;
    if ( v92 )
    {
      *((_DWORD *)v92 + 10) = 0;
      v92 = 0LL;
    }
    if ( (int)IsMNFlushDestroyedPopupsSupported() >= 0 )
      MNFlushDestroyedPopups(*(_QWORD *)v93[0]);
    if ( (int)IsMNUnlinkDelayedFreePopupsSupported() >= 0 )
      MNUnlinkDelayedFreePopups(*(_QWORD *)v93[0]);
    v28 = *(_DWORD **)v93[0];
    if ( (**(_DWORD **)v93[0] & 0x40000000) != 0 )
    {
      *v28 &= ~0x20000000u;
    }
    else if ( v28 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C0217468);
    }
    else
    {
      v29 = *(_QWORD *)v93[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v93[0] + 88LL));
      v32 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v32 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v32, v29);
      if ( *(_QWORD *)v93[0] != *v23 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)v93[0], v30, v31);
      if ( *(_QWORD *)v93[0] == *v23 )
        *v23 = 0LL;
    }
    if ( (int)IsxxxMNEndMenuStateInternalSupported() >= 0 )
      xxxMNEndMenuStateInternal(v0, v23);
    v25 = v92;
LABEL_86:
    if ( v25 )
      xxxUnlockMenuState(v25);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v93);
  }
  v33 = *((_QWORD *)v0 + 89);
  if ( v33 )
  {
    HMAssignmentUnlock((__int64 *)(v33 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 89) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 89) + 8LL));
    v19 = *((_QWORD *)v0 + 89);
    v33 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v33 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v33, v19);
    *((_QWORD *)v0 + 89) = 0LL;
  }
  v34 = *((_QWORD *)v0 + 52);
  if ( v34 && *(struct tagTHREADINFO **)(v34 + 328) == v0 )
    *(_QWORD *)(v34 + 328) = 0LL;
  while ( *((_QWORD *)v0 + 77) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported() >= 0 )
      xxxDestroyThreadDDEObject(v0, *((_QWORD *)v0 + 77));
  }
  if ( (*((_DWORD *)v0 + 120) & 0x800) != 0 )
  {
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v33 = *(_QWORD *)(*((_QWORD *)v0 + 56) + 8LL);
    v35 = *(_QWORD *)(v33 + 24);
    if ( v35 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v103 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v103;
      v104 = v35;
      HMLockObject(v35);
      if ( (int)IsxxxFlushPaletteSupported() >= 0 )
        xxxFlushPalette(v35);
      ThreadUnlock1();
    }
  }
  v37 = *((_QWORD *)v0 + 52);
  if ( v37 && *(_QWORD *)(v37 + 824) && (int)IsDestroyThreadHidObjectsSupported() >= 0 )
    DestroyThreadHidObjects(v0);
  if ( *((int *)v0 + 120) < 0 && (int)IsxxxHandleHealthyThreadSupported() >= 0 )
    xxxHandleHealthyThread(v0);
  if ( *((_QWORD *)v0 + 144) && (int)IsDestroyInputHangInfoSupported() >= 0 )
    DestroyInputHangInfo(v0);
  v38 = *((_DWORD *)v0 + 306);
  if ( (v38 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 306) = v38 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v19, v20);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v39 = (void *)*((_QWORD *)v0 + 169);
  if ( v39 )
  {
    CleanupRimDevObjInUserModeCallback(v39);
    *((_QWORD *)v0 + 169) = 0LL;
  }
  v40 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v40);
  if ( CInputThread::IsInputThread(v41) )
    UserDeactivateMITInputProcessing();
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v44 = 1, *((_QWORD *)v0 + 82)) )
    v44 = 0;
  v94 = v44;
  if ( v1 )
  {
    v43 = *(unsigned __int16 *)(*((_QWORD *)v0 + 59) + 154LL);
    if ( (_WORD)v43 )
    {
      v43 = (unsigned __int16)v43;
      v42 = *(unsigned __int16 *)(v1 + 808);
      if ( (int)v42 >= 0xFFFF - (unsigned __int16)v43 )
      {
        *(_WORD *)(v1 + 808) = -1;
      }
      else
      {
        LOWORD(v43) = v42 + v43;
        *(_WORD *)(v1 + 808) = v43;
      }
    }
    if ( v44
      && *(_WORD *)(v1 + 808)
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v98 = v45;
      v111 = &v98;
      v112 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E3690, 0LL, 0LL, 3u, &v110);
    }
  }
  if ( v44 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 812) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v46 = *(_QWORD *)(v1 + 888);
        if ( v46 )
        {
          *(_QWORD *)(v46 + 96) = 0LL;
          v43 = *(_QWORD *)(v46 + 88);
          if ( v43 )
          {
            ZwClose((HANDLE)v43);
            *(_QWORD *)(v46 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 812) & 0x4000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v43, (const struct tagPROCESSINFO *)v1);
    }
    v47 = *((_QWORD *)v0 + 52);
    if ( gppiFullscreen == v47 && !gbMDEVDisabled )
    {
      LOBYTE(pData) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, (_DWORD)pData, 0LL, 0LL, 0LL, v109);
      v47 = *((_QWORD *)v0 + 52);
    }
    if ( v47 && IsCurrentProcessDwm(v47, v42) )
      xxxDwmProcessShutdown(1);
  }
  if ( (int)IsDestroyThreadsTimersSupported() >= 0 )
    DestroyThreadsTimers(v0);
  if ( *((_DWORD *)v0 + 172) )
  {
    v48 = *((_QWORD *)v0 + 85);
    if ( v48 )
    {
      if ( *(_DWORD *)(v48 + 68) == -1 )
        v49 = *(_QWORD *)(v48 + 56);
      else
        v49 = *(_QWORD *)(v48 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        + 8LL * *(int *)(v48 + 68)
                        + 408);
      v50 = *(_DWORD *)(v48 + 48);
    }
    else
    {
      v49 = 0LL;
      v50 = 0;
    }
    TraceLoggingDeadLowLevelHook(v50, v49);
  }
  if ( (int)IsFreeThreadsWindowHooksSupported() >= 0 )
    FreeThreadsWindowHooks();
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported() >= 0 )
    RemoveThreadSwitchWindowInfo(v0);
  v51 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v52 = (_QWORD *)*v51;
      if ( (struct tagTHREADINFO *)v51[3] == v0 && (int)IsFreeHwndListSupported() >= 0 )
        FreeHwndList(v51);
      v51 = v52;
    }
    while ( v52 );
  }
  if ( (int)IsDestroyThreadsHotKeysSupported() >= 0 )
    DestroyThreadsHotKeys();
  DestroyThreadsObjects();
  CActivationObject::OnThreadTermination();
  if ( (int)IsFreeThreadsWinEventsSupported() >= 0 )
    FreeThreadsWinEvents(v0);
  HMAssignmentUnlock((__int64 *)v0 + 54);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v89, 0);
    CleanupResources();
  }
  if ( v44 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) & 0x1000000) != 0 )
    {
      v53 = *((_QWORD *)v0 + 57);
      if ( v53 )
      {
        if ( *(_QWORD *)(v53 + 168) && (int)Is_PostMessageSupported() >= 0 )
          _PostMessage(*(_QWORD *)(v53 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported() >= 0 )
      DestroyProcessesClasses(*((_QWORD *)v0 + 52));
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 52) + 12LL) &= ~0x10000000u;
    v54 = *((_QWORD *)v0 + 59);
    v55 = *(_DWORD **)(v54 + 208);
    if ( v55 )
    {
      ProbeForWrite(*(volatile void **)(v54 + 208), 4uLL, 4u);
      *v55 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 52));
  }
  HMAssignmentUnlock((__int64 *)v0 + 98);
  v57 = *((_QWORD *)v0 + 173);
  if ( v57 )
  {
    Win32FreePool(v57);
    *((_QWORD *)v0 + 173) = 0LL;
  }
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported() >= 0 )
      PackAffectedThreadsFromThreadCleanup(v0);
    v57 = *((_QWORD *)v0 + 53);
    *(_DWORD *)(v57 + 392) -= *((_DWORD *)v0 + 188);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 53) + 400LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 56);
      ApiSetEditionSystemGenerateMove(0LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v57, v56);
  v107 = *(_OWORD *)(CurrentProcessWin32Process + 296);
  v108 = *(_QWORD *)(CurrentProcessWin32Process + 312);
  v107 = *((_OWORD *)v0 + 24);
  v108 = *((_QWORD *)v0 + 50);
  v61 = PsGetCurrentProcessWin32Process(v60, v59);
  v62 = (_QWORD *)(v61 + 320);
  v63 = *(struct tagTHREADINFO **)(v61 + 320);
  if ( v63 )
  {
    if ( v63 == v0 )
      goto LABEL_230;
    v64 = *(_QWORD *)(v61 + 320);
    do
    {
      v65 = *(struct tagTHREADINFO **)(v64 + 656);
      v66 = (struct tagTHREADINFO *)v64;
      if ( !v65 )
        break;
      v62 = (_QWORD *)(v64 + 656);
      v64 = *(_QWORD *)(v64 + 656);
      v66 = v65;
    }
    while ( v65 != v0 );
    if ( v66 == v0 )
    {
LABEL_230:
      *v62 = *((_QWORD *)v0 + 82);
      *((_QWORD *)v0 + 82) = 0LL;
    }
  }
  v95 = 0LL;
  LockObjectAssignment(&v95, *((_QWORD *)v0 + 56));
  if ( (int)IsSendMsgCleanupSupported() >= 0 )
    SendMsgCleanup(v0);
  if ( *((_DWORD *)v0 + 377) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 377) = 0;
  }
  v67 = *((_QWORD *)v0 + 52);
  if ( v67 )
    --*(_DWORD *)(v67 + 384);
  UninitializeThreadInfoIocp(v0);
  v69 = (void *)*((_QWORD *)v0 + 180);
  if ( v69 )
  {
    ObCloseHandle(v69, 0);
    *((_QWORD *)v0 + 180) = 0LL;
  }
  v70 = (void *)*((_QWORD *)v0 + 90);
  if ( v70 )
  {
    if ( (int)ProtectHandle(v70, v68, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 306) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 90), 1);
    }
    *((_QWORD *)v0 + 90) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( (int)IsxxxWindowEventSupported() >= 0 )
    {
      cData[0] = 4;
      xxxWindowEvent(32773LL, 0LL, 4294967292LL);
      cData[0] = 4;
      xxxWindowEvent(3LL, 0LL, 0LL);
    }
    v71 = v95;
    if ( *(_QWORD *)(*(_QWORD *)(v95 + 8) + 200LL) && (int)Is_PostMessageSupported() >= 0 )
      _PostMessage(*(_QWORD *)(*(_QWORD *)(v71 + 8) + 200LL), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( (int)IsxxxSetForegroundThreadSupported() >= 0 )
      xxxSetForegroundThread(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v72 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 52) + 320LL);
    if ( !v72 )
      v72 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v72, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 306) & 0x2000) != 0 )
    ScrubDelegatedWindows(v0);
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 53), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 53) + 404LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 53), v0);
  }
  if ( *((_QWORD *)v0 + 56) )
  {
    v73 = (_QWORD *)((char *)v0 + 736);
    v74 = *((_QWORD *)v0 + 92);
    v75 = (_QWORD *)*((_QWORD *)v0 + 93);
    if ( *(struct tagTHREADINFO **)(v74 + 8) != (struct tagTHREADINFO *)((char *)v0 + 736) || (_QWORD *)*v75 != v73 )
      __fastfail(3u);
    *v75 = v74;
    *(_QWORD *)(v74 + 8) = v75;
    *((_QWORD *)v0 + 93) = (char *)v0 + 736;
    *v73 = v73;
  }
  FreeMessageList((char *)v0 + 800);
  v78 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v78 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v78 = *j;
      Win32FreePool((__int64)j);
    }
    else
    {
      v78 = j;
    }
  }
  MarkThreadsObjects((__int64)v0, v76, v77);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v0 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v0 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v0 )
  {
    DisableDelegation();
    SetNewForegroundPti(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v80 = *((_QWORD *)v0 + 53);
  if ( v80 && !*(_DWORD *)(v80 + 400) )
  {
    if ( gpqForeground == v80 )
    {
      gpqForeground = 0LL;
      v80 = *((_QWORD *)v0 + 53);
    }
    if ( gpqForegroundPrev == v80 )
    {
      gpqForegroundPrev = 0LL;
      v80 = *((_QWORD *)v0 + 53);
    }
    if ( gpqCursor == (struct tagQ *)v80 )
      gpqCursor = 0LL;
  }
  v81 = (CInputThread *)v95;
  if ( v95 )
  {
    v82 = (char *)*((_QWORD *)v0 + 55);
    if ( v82 )
    {
      if ( v82 != (char *)v0 + 1032 )
      {
        RtlFreeHeap(*(PVOID *)(v95 + 128), 0, v82);
        *((_QWORD *)v0 + 55) = (char *)v0 + 1032;
      }
    }
  }
  if ( CInputThread::IsInputThread(v81) )
    CInputThread::RevokeThreadAsInput(v83);
  if ( (*((_DWORD *)v0 + 120) & 4) != 0 )
  {
    v84 = *((_QWORD *)v0 + 59);
    if ( v84 )
    {
      Win32FreePool(v84);
      *((_QWORD *)v0 + 59) = 0LL;
    }
  }
  UnlockObjectAssignment(&v95);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v86) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    LOBYTE(v86) = McTemplateK0(v85, &CompleteGuiThreadExecution, &Context.Flags);
  while ( 1 )
  {
    v87 = (_QWORD *)*((_QWORD *)v0 + 184);
    if ( !v87 )
      break;
    *((_QWORD *)v0 + 184) = *v87;
    v86 = *(v87 - 1);
    if ( (_UNKNOWN *)v86 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v87 - 1) + 8LL);
      v86 = *(v87 - 1);
      if ( !*(_DWORD *)(v86 + 8) )
      {
        v86 = *(v87 - 1);
        if ( *(_BYTE *)(v86 + 12) )
          LOBYTE(v86) = Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *(v87 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 306) |= 0x80u;
  return v86;
}
