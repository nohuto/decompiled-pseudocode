/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0036210
 * Callers:
 *     UserThreadCallout @ 0x1C0033E20 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00127DC (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00142B0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0035470 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00355A0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0035630 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C0035810 (LockObjectAssignment.c)
 *     UnlockObjectAssignment @ 0x1C0035960 (UnlockObjectAssignment.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0035E20 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0035E70 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0036E10 (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0039F4C (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003B9F4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003BA28 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0044A20 (Win32FreeToPagedLookasideList.c)
 *     EtwTraceProcessWindowInfo @ 0x1C005AE60 (EtwTraceProcessWindowInfo.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C005F784 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1C0062B00 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0066290 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     zzzDestroyQueue @ 0x1C00703F0 (zzzDestroyQueue.c)
 *     EtwTraceInputProcessDelay @ 0x1C00706D0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0070E20 (EtwTraceMessageCheckDelay.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0072C7C (ApiSetEditionSystemGenerateMove.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0075D70 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0075DBC (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00A72FC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A7474 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C00A7510 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C00A768C (CleanupRimDevObjInUserModeCallback.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB2C0 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB2F4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     McTemplateK0qqqqq @ 0x1C00AF1AC (McTemplateK0qqqqq.c)
 *     CleanupResources @ 0x1C00B15B4 (CleanupResources.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00DDEA4 (RIMIDEProcessRemoveInjectionDevices.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C013364C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C013FCDC (ApiSetEditionRemoveFromMsdList.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C015F66C (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PMCGEN_TRACE_CONTEXT xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // r15
  struct _NT_TIB *Self; // rbx
  unsigned __int16 v3; // cx
  int v4; // edx
  int v5; // ecx
  const GUID *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  DelayZonePalmRejection *Instance; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 ProcessWindowStation; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  CInputManager *v27; // rcx
  _QWORD *v28; // rbx
  int v29; // edx
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v35; // rdx
  struct tagTHREADINFO *v36; // rcx
  __int64 v37; // rdx
  void *v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  void **v43; // rbx
  void **j; // rcx
  __int64 v45; // rcx
  CInputThread *v46; // rcx
  char *v47; // r8
  CInputThread *v48; // rcx
  __int64 v49; // rcx
  PMCGEN_TRACE_CONTEXT result; // rax
  _QWORD *v51; // rdx
  PVOID CurrentProcess; // rax
  BOOL v53; // edx
  __int64 v54; // rax
  _DWORD *v55; // rbx
  __int64 v56; // r8
  struct tagTHREADINFO *v57; // rax
  struct tagTHREADINFO *v58; // rcx
  __int64 i; // rax
  struct tagTHREADINFO *v60; // rdx
  _QWORD *v61; // r15
  PVOID *v62; // rbx
  char v63; // al
  unsigned __int64 v64; // rbx
  unsigned int ThreadId; // r14d
  char ThreadInfoFlags; // r12
  int v67; // r8d
  char v68; // r11
  __int64 *v69; // r14
  __int64 v70; // rbx
  __int64 *v71; // rbx
  struct tagTHREADINFO *v72; // rcx
  int v73; // eax
  _DWORD *v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v79; // rbx
  void *v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rcx
  signed __int32 v83[8]; // [rsp+0h] [rbp-1A8h] BYREF
  UINT32 cData[2]; // [rsp+20h] [rbp-188h]
  __int64 *v85; // [rsp+50h] [rbp-158h]
  _QWORD v86[2]; // [rsp+58h] [rbp-150h] BYREF
  PVOID *v87; // [rsp+68h] [rbp-140h] BYREF
  int v88; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v89; // [rsp+74h] [rbp-134h] BYREF
  unsigned int v90; // [rsp+78h] [rbp-130h] BYREF
  struct tagTHREADINFO *v91; // [rsp+80h] [rbp-128h]
  struct _NT_TIB *v92; // [rsp+88h] [rbp-120h]
  __int64 v93; // [rsp+90h] [rbp-118h]
  char v94[8]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v95; // [rsp+A8h] [rbp-100h]
  _QWORD v96[3]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v97[24]; // [rsp+E8h] [rbp-C0h] BYREF
  _QWORD v98[10]; // [rsp+100h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp-58h] BYREF
  int *v100; // [rsp+170h] [rbp-38h]
  __int64 v101; // [rsp+178h] [rbp-30h]

  memset(v98, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v98[1]);
  v98[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v98[3]) = 20;
  LOBYTE(v98[6]) = -1;
  v0 = gptiCurrent;
  v91 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 52);
  v93 = v1;
  Self = KeGetPcr()->NtTib.Self;
  v92 = Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( v1 )
  {
    v3 = *(_WORD *)(*((_QWORD *)gptiCurrent + 59) + 154LL);
    if ( v3 )
    {
      v4 = v3;
      v5 = *(unsigned __int16 *)(v1 + 808);
      if ( v5 >= 0xFFFF - v4 )
        *(_WORD *)(v1 + 808) = -1;
      else
        *(_WORD *)(v1 + 808) = v4 + v5;
    }
    if ( (unsigned int)FLastGuiThread(v0)
      && *(_WORD *)(v1 + 808)
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v88 = (unsigned __int16)v6;
      v100 = &v88;
      v101 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0177E7B, 0LL, v6, 3u, &pData);
    }
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v7 = *((_QWORD *)v0 + 184);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 1472) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 184) + 1200LL) &= ~0x4000000u;
    *((_QWORD *)v0 + 184) = 0LL;
    *((_DWORD *)v0 + 300) &= ~0x4000000u;
  }
  v8 = *((_QWORD *)v0 + 56);
  if ( v8 && *(struct tagTHREADINFO **)(v8 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 56));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 120) |= 0x41u;
  if ( (int)IsInkProcessorOnThreadExitSupported() >= 0 )
    InkProcessorOnThreadExit(v0);
  if ( gpTouchProcessor )
  {
    Instance = DelayZonePalmRejection::GetInstance();
    if ( Instance )
      DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(Instance, v0);
  }
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported() >= 0 )
    xxxCleanupThreadPointerInputInfo(v0);
  if ( (int)IsUnreferenceUndispatchedFrameListSupported() >= 0 )
    UnreferenceUndispatchedFrameList();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread();
  v10 = *((_QWORD *)v0 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 && (int)IsMagpRevokeInputTransfromSupported() >= 0 )
      MagpRevokeInputTransfrom();
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v94, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v12 = *((_QWORD *)v0 + 56);
    v13 = *((_QWORD *)v0 + 52);
    if ( *(_QWORD *)(v12 + 256) == v13 )
    {
      for ( i = *(_QWORD *)(v13 + 320);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 448) != v12);
            i = *(_QWORD *)(i + 656) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v12 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v94);
  }
  if ( (*((_DWORD *)v0 + 300) & 8) != 0 && (int)IsMagContextThreadCalloutSupported() >= 0 )
    MagContextThreadCallout(&gMagnContext, v0, 0LL, 1LL);
  EtwTraceProcessWindowInfo(v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C019A1D8 - 1) <= 2u
      || (qword_1C019A1C0 & 0x8000000000200000uLL) == 0
      || (v63 = 1, (qword_1C019A1C8 & 0x8000000000200000uLL) != qword_1C019A1C8) )
    {
      v63 = 0;
    }
    if ( v63 )
    {
      v64 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 53), v64, &v90, &v89);
      if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq(
          (_DWORD)Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v67,
          ThreadId,
          ThreadInfoFlags,
          v68,
          v90,
          v89);
    }
  }
  if ( (*((_DWORD *)v0 + 120) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v14 = *((_QWORD *)v0 + 156);
  if ( v14 )
  {
    Win32FreePool(v14);
    *((_QWORD *)v0 + 156) = 0LL;
  }
  HMAssignmentUnlock((char *)v0 + 1384);
  if ( (int)IsPatchThreadWindowsSupported() >= 0 )
    PatchThreadWindows(v0);
  if ( *((_QWORD *)v0 + 83) && (int)IsxxxCancelTrackingForThreadSupported() >= 0 )
    xxxCancelTrackingForThread(v0);
  v15 = *((_QWORD *)v0 + 83);
  if ( v15 )
  {
    HMAssignmentUnlock(v15 + 16);
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 83));
    Win32FreePool(*((_QWORD *)v0 + 83));
    *((_QWORD *)v0 + 83) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported() >= 0 )
  {
    ProcessWindowStation = _GetProcessWindowStation(0LL);
    v17 = (_QWORD *)ProcessWindowStation;
    if ( ProcessWindowStation )
    {
      PushW32ThreadLock(ProcessWindowStation, v97, CompositionObject::Release);
      ObfReferenceObject(v17);
      if ( (struct tagTHREADINFO *)v17[6] == v0 && (int)IsxxxCloseClipboardSupported() >= 0 )
        xxxCloseClipboard(v17);
      if ( (struct tagTHREADINFO *)v17[7] == v0 )
        v17[7] = 0LL;
      PopAndFreeW32ThreadLock(v97);
    }
  }
  while ( *((_QWORD *)v0 + 75) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v86);
    v69 = (__int64 *)*((_QWORD *)v0 + 75);
    v70 = *v69;
    if ( *v69 != *(_QWORD *)v86[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v86);
      if ( v70 )
      {
        v86[0] = *(_QWORD *)(v70 + 88);
        ++*(_DWORD *)(v86[0] + 8LL);
      }
      else
      {
        v86[0] = &gSmartObjNullRef;
      }
    }
    v71 = v69;
    v85 = v69;
    v72 = (struct tagTHREADINFO *)v69[4];
    if ( gptiCurrent == v72 )
    {
      ++*((_DWORD *)v69 + 10);
    }
    else
    {
      v71 = 0LL;
      v85 = 0LL;
    }
    if ( v0 != v72 )
    {
      if ( v71 )
        xxxUnlockMenuState(v71);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v86);
      break;
    }
    v73 = *((_DWORD *)v69 + 2);
    if ( (v73 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported() >= 0 )
      {
        xxxEndMenuLoop(v69, *(_QWORD *)v86[0]);
LABEL_252:
        v71 = v85;
      }
      if ( v71 )
      {
        *((_DWORD *)v71 + 10) = 0;
        v71 = 0LL;
        v85 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v69);
      goto LABEL_257;
    }
    *((_DWORD *)v69 + 2) = v73 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 388LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported() >= 0 )
      xxxMNCloseHierarchy(*(_QWORD *)v86[0], v69);
    if ( (**(_DWORD **)v86[0] & 1) != 0 || (**(_DWORD **)v86[0] & 0x8000) != 0 )
      goto LABEL_252;
    if ( v85 )
    {
      *((_DWORD *)v85 + 10) = 0;
      v85 = 0LL;
    }
    if ( (int)IsMNFlushDestroyedPopupsSupported() >= 0 )
      MNFlushDestroyedPopups(*(_QWORD *)v86[0]);
    if ( (int)IsMNUnlinkDelayedFreePopupsSupported() >= 0 )
      MNUnlinkDelayedFreePopups(*(_QWORD *)v86[0]);
    v74 = *(_DWORD **)v86[0];
    if ( (**(_DWORD **)v86[0] & 0x40000000) != 0 )
    {
      *v74 &= ~0x20000000u;
    }
    else if ( v74 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C01A10D8);
    }
    else
    {
      v75 = *(_QWORD *)v86[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v86[0] + 88LL));
      v76 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v76 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v76, v75);
    }
    if ( (int)IsxxxMNEndMenuStateInternalSupported() >= 0 )
      xxxMNEndMenuStateInternal(v0, v69);
    v71 = v85;
LABEL_257:
    if ( v71 )
      xxxUnlockMenuState(v71);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v86);
  }
  v18 = *((_QWORD *)v0 + 88);
  if ( v18 )
  {
    HMAssignmentUnlock(v18 + 16);
    HMAssignmentUnlock(*((_QWORD *)v0 + 88) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v0 + 88) + 8LL);
    Win32FreePool(*((_QWORD *)v0 + 88));
    *((_QWORD *)v0 + 88) = 0LL;
  }
  v19 = (_QWORD *)((char *)v0 + 416);
  v92 = (struct _NT_TIB *)((char *)v0 + 416);
  v20 = *((_QWORD *)v0 + 52);
  if ( v20 && *(struct tagTHREADINFO **)(v20 + 328) == v0 )
    *(_QWORD *)(v20 + 328) = 0LL;
  while ( *((_QWORD *)v0 + 77) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported() >= 0 )
      xxxDestroyThreadDDEObject(v0, *((_QWORD *)v0 + 77));
  }
  if ( (*((_DWORD *)v0 + 120) & 0x800) != 0 )
  {
    v77 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v0 + 56) + 8LL) + 24LL);
    if ( v77 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v96[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v96;
      v96[1] = v77;
      _InterlockedAdd((volatile signed __int32 *)(v77 + 8), 1u);
      if ( (int)IsxxxFlushPaletteSupported() >= 0 )
        xxxFlushPalette(v77);
      ThreadUnlock1();
    }
  }
  if ( (unsigned int)FLastGuiThread(v0) && gppiFullscreen == *v19 && !gbMDEVDisabled )
    xxxUserSetDisplayConfig(0, 0, 2191, 4, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v98);
  if ( *v19 && *(_QWORD *)(*v19 + 824LL) && (int)IsDestroyThreadHidObjectsSupported() >= 0 )
    DestroyThreadHidObjects(v0);
  if ( *((int *)v0 + 120) < 0 && (int)IsxxxHandleHealthyThreadSupported() >= 0 )
    xxxHandleHealthyThread(v0);
  if ( *((_QWORD *)v0 + 141) && (int)IsDestroyInputHangInfoSupported() >= 0 )
    DestroyInputHangInfo(v0);
  v23 = *((_DWORD *)v0 + 300);
  if ( (v23 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 300) = v23 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v24 = (void *)*((_QWORD *)v0 + 165);
  if ( v24 )
  {
    CleanupRimDevObjInUserModeCallback(v24);
    *((_QWORD *)v0 + 165) = 0LL;
  }
  v25 = (void *)*((_QWORD *)v0 + 166);
  if ( v25 )
  {
    ObfDereferenceObject(v25);
    *((_QWORD *)v0 + 166) = 0LL;
  }
  v26 = (void *)*((_QWORD *)v0 + 167);
  if ( v26 )
  {
    ObfDereferenceObject(v26);
    *((_QWORD *)v0 + 167) = 0LL;
  }
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
  {
    v27 = g_pInputManager;
    if ( g_pInputManager )
    {
      *((_DWORD *)g_pInputManager + 18) = 0;
      CInputManager::CleanupDwmInputThread(v27);
    }
  }
  if ( CInputThread::IsInputThread(v27) )
    UserDeactivateMITInputProcessing();
  if ( *v19 && (unsigned int)FLastGuiThread(v0) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v53 = 0;
    if ( CurrentProcess )
      v53 = CurrentProcess == g_pepDwm;
    if ( v53 )
      xxxDwmProcessShutdown(1);
  }
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 812) & 0x100000) != 0 )
    {
      if ( (unsigned int)FLastGuiThread(v0) )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v79 = *(_QWORD *)(v1 + 888);
        if ( v79 )
        {
          *(_QWORD *)(v79 + 96) = 0LL;
          v80 = *(void **)(v79 + 88);
          if ( v80 )
          {
            ZwClose(v80);
            *(_QWORD *)(v79 + 88) = 0LL;
          }
        }
      }
    }
  }
  if ( (int)IsDestroyThreadsTimersSupported() >= 0 )
    DestroyThreadsTimers(v0);
  if ( (int)IsFreeThreadsWindowHooksSupported() >= 0 )
    FreeThreadsWindowHooks();
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported() >= 0 )
    RemoveThreadSwitchWindowInfo(v0);
  v28 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v61 = (_QWORD *)*v28;
      if ( (struct tagTHREADINFO *)v28[3] == v0 && (int)IsFreeHwndListSupported() >= 0 )
        FreeHwndList(v28);
      v28 = v61;
    }
    while ( v61 );
  }
  if ( (int)IsDestroyThreadsHotKeysSupported() >= 0 )
    DestroyThreadsHotKeys();
  DestroyThreadsObjects(v30, v29, v31);
  if ( (int)IsFreeThreadsWinEventsSupported() >= 0 )
    FreeThreadsWinEvents(v0);
  HMAssignmentUnlock((char *)v0 + 432);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v83, 0);
    CleanupResources();
  }
  if ( (unsigned int)FLastGuiThread(v0) )
  {
    if ( (*(_DWORD *)(*v19 + 12LL) & 0x1000000) != 0 )
    {
      v81 = *((_QWORD *)v0 + 57);
      if ( v81 )
      {
        if ( *(_QWORD *)(v81 + 168) && (int)Is_PostMessageSupported() >= 0 )
          _PostMessage(*(_QWORD *)(v81 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported() >= 0 )
      DestroyProcessesClasses(*v19);
    *(_DWORD *)(*v19 + 12LL) &= ~0x2000u;
    *(_DWORD *)(*v19 + 12LL) &= ~0x10000000u;
    v54 = *((_QWORD *)v0 + 59);
    v55 = *(_DWORD **)(v54 + 208);
    if ( v55 )
    {
      ProbeForWrite(*(volatile void **)(v54 + 208), 4uLL, 4u);
      *v55 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 52));
  }
  HMAssignmentUnlock((char *)v0 + 776);
  v33 = *((_QWORD *)v0 + 171);
  if ( v33 )
  {
    Win32FreePool(v33);
    *((_QWORD *)v0 + 171) = 0LL;
  }
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported() >= 0 )
      PackAffectedThreadsFromThreadCleanup(v0);
    v33 = *((_QWORD *)v0 + 53);
    *(_DWORD *)(v33 + 384) -= *((_DWORD *)v0 + 186);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 53) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 56);
      ApiSetEditionSystemGenerateMove(0LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33, v32);
  v35 = (_QWORD *)(CurrentProcessWin32Process + 320);
  v36 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 320);
  if ( v36 )
  {
    if ( v36 == v0 )
      goto LABEL_102;
    v56 = *(_QWORD *)(CurrentProcessWin32Process + 320);
    do
    {
      v57 = *(struct tagTHREADINFO **)(v56 + 656);
      v58 = (struct tagTHREADINFO *)v56;
      if ( !v57 )
        break;
      v35 = (_QWORD *)(v56 + 656);
      v56 = *(_QWORD *)(v56 + 656);
      v58 = v57;
    }
    while ( v57 != v0 );
    if ( v58 == v0 )
    {
LABEL_102:
      *v35 = *((_QWORD *)v0 + 82);
      *((_QWORD *)v0 + 82) = 0LL;
    }
  }
  v87 = 0LL;
  LockObjectAssignment((void **)&v87, *((void **)v0 + 56));
  if ( (int)IsSendMsgCleanupSupported() >= 0 )
    SendMsgCleanup(v0);
  if ( *((_DWORD *)v0 + 198) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 198) = 0;
  }
  if ( *v19 )
    --*(_DWORD *)(*v19 + 384LL);
  UninitializeThreadInfoIocp(v0);
  v38 = (void *)*((_QWORD *)v0 + 178);
  if ( v38 )
  {
    ObCloseHandle(v38, 0);
    *((_QWORD *)v0 + 178) = 0LL;
  }
  v39 = *((_QWORD *)v0 + 89);
  if ( v39 )
  {
    if ( (int)ProtectHandle(v39, v37, ExEventObjectType, 0LL) >= 0 && (*((_DWORD *)v0 + 300) & 0x1000000) == 0 )
      ObCloseHandle(*((HANDLE *)v0 + 89), 1);
    *((_QWORD *)v0 + 89) = 0LL;
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
    v62 = v87;
    if ( *((_QWORD *)v87[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      _PostMessage(*((_QWORD *)v62[1] + 25), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( (int)IsxxxSetForegroundThreadSupported() >= 0 )
      xxxSetForegroundThread(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v60 = *(struct tagTHREADINFO **)(*v19 + 320LL);
    if ( !v60 )
      v60 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v60, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 300) & 0x2000) != 0 )
    ScrubDelegatedWindows(v0);
  if ( *((_QWORD *)v0 + 53) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 53), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 53) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 53), v0);
  }
  if ( *((_QWORD *)v0 + 56) )
  {
    v40 = (_QWORD *)((char *)v0 + 728);
    v41 = *((_QWORD *)v0 + 91);
    v42 = (_QWORD *)*((_QWORD *)v0 + 92);
    if ( *(struct tagTHREADINFO **)(v41 + 8) != (struct tagTHREADINFO *)((char *)v0 + 728) || (_QWORD *)*v42 != v40 )
      __fastfail(3u);
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
    *((_QWORD *)v0 + 92) = (char *)v0 + 728;
    *v40 = v40;
  }
  FreeMessageList((char *)v0 + 800);
  v43 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v43 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v43 = *j;
      Win32FreePool((__int64)j);
    }
    else
    {
      v43 = j;
    }
  }
  MarkThreadsObjects((__int64)v0);
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
    v95 = 0uLL;
    InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
    gptiForeground = 0LL;
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v45 = *((_QWORD *)v0 + 53);
  if ( v45 && !*(_DWORD *)(v45 + 392) )
  {
    if ( gpqForeground == v45 )
    {
      gpqForeground = 0LL;
      v45 = *((_QWORD *)v0 + 53);
    }
    if ( gpqForegroundPrev == v45 )
    {
      gpqForegroundPrev = 0LL;
      v45 = *((_QWORD *)v0 + 53);
    }
    if ( gpqCursor == (struct tagQ *)v45 )
      gpqCursor = 0LL;
  }
  v46 = (CInputThread *)v87;
  if ( v87 )
  {
    v47 = (char *)*((_QWORD *)v0 + 55);
    if ( v47 )
    {
      if ( v47 != (char *)v0 + 1024 )
      {
        RtlFreeHeap(v87[16], 0, v47);
        *((_QWORD *)v0 + 55) = (char *)v0 + 1024;
      }
    }
  }
  if ( CInputThread::IsInputThread(v46) )
    CInputThread::RevokeThreadAsInput(v48);
  if ( (*((_DWORD *)v0 + 120) & 4) != 0 )
  {
    v82 = *((_QWORD *)v0 + 59);
    if ( v82 )
    {
      Win32FreePool(v82);
      *((_QWORD *)v0 + 59) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v87);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  result = Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = (PMCGEN_TRACE_CONTEXT)McTemplateK0(v49, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v51 = (_QWORD *)*((_QWORD *)v0 + 182);
    if ( !v51 )
      break;
    *((_QWORD *)v0 + 182) = *v51;
    result = (PMCGEN_TRACE_CONTEXT)*(v51 - 1);
    if ( result != (PMCGEN_TRACE_CONTEXT)&gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v51 - 1) + 8LL);
      result = (PMCGEN_TRACE_CONTEXT)*(v51 - 1);
      if ( !LODWORD(result->Logger) )
      {
        result = (PMCGEN_TRACE_CONTEXT)*(v51 - 1);
        if ( BYTE4(result->Logger) )
          result = (PMCGEN_TRACE_CONTEXT)Win32FreeToPagedLookasideList(gpStackRefLookAside, *(v51 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 300) |= 0x80u;
  return result;
}
