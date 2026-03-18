/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0099D40
 * Callers:
 *     UserThreadCallout @ 0x1C002ABF0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0004B30 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C00066C0 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00151C0 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     Win32FreeToPagedLookasideList @ 0x1C001D8A0 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0028F0C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002E2A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C002E3F0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C002E4A0 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C002E5D0 (LockObjectAssignment.c)
 *     UnlockObjectAssignment @ 0x1C002E730 (UnlockObjectAssignment.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     IsInputThread @ 0x1C00315A0 (IsInputThread.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003323C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     EtwTraceProcessWindowInfo @ 0x1C005FB80 (EtwTraceProcessWindowInfo.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00725E0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076908 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C007C674 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C007CE08 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C007E2E0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0083640 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     DisableDelegation @ 0x1C008AEF0 (DisableDelegation.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C008B004 (ApiSetEditionSystemGenerateMove.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C009539C (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     CleanupResources @ 0x1C0095DB8 (CleanupResources.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00E3DC8 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00E3E14 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C00E3E64 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00E41F0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00E437C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C00E447C (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C00E4558 (CleanupRimDevObjInUserModeCallback.c)
 *     zzzDestroyQueue @ 0x1C00E48C0 (zzzDestroyQueue.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E6850 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E7090 (EtwTraceMessageCheckDelay.c)
 *     McTemplateK0qqqqq @ 0x1C00EAA04 (McTemplateK0qqqqq.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C00F543C (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C010B214 (RIMIDEProcessRemoveInjectionDevices.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C016340C (ApiSetEditionRemoveFromMsdList.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C01834E0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // r14
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
  unsigned int ThreadId; // r15d
  char ThreadInfoFlags; // r12
  int v14; // ecx
  int v15; // r8d
  char v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 ProcessWindowStation; // rax
  _QWORD *v22; // rbx
  __int64 *v23; // r15
  __int64 v24; // rbx
  __int64 *v25; // rbx
  struct tagTHREADINFO *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rax
  int v36; // eax
  void *v37; // rcx
  struct _ETHREAD *v38; // rbx
  void *v39; // rcx
  int v40; // r15d
  int v41; // edx
  unsigned __int16 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  unsigned int v47; // ecx
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // rbx
  _QWORD *v52; // r14
  __int64 v53; // rbx
  __int64 v54; // rax
  _DWORD *v55; // rbx
  __int64 v56; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v58; // rdx
  struct tagTHREADINFO *v59; // rcx
  __int64 v60; // r8
  struct tagTHREADINFO *v61; // rax
  struct tagTHREADINFO *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // edx
  void *v66; // rcx
  void *v67; // rcx
  PVOID *v68; // rbx
  struct tagTHREADINFO *v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  void **v73; // rbx
  void **j; // rcx
  CCursorClip *v75; // rcx
  __int64 v76; // rcx
  char *v77; // r8
  CInputThread *v78; // rcx
  __int64 v79; // rcx
  struct _MCGEN_TRACE_CONTEXT *v80; // rcx
  __int64 v81; // rax
  _QWORD *v82; // rdx
  signed __int32 v84[8]; // [rsp+0h] [rbp-198h] BYREF
  __int64 *v85; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v86[2]; // [rsp+58h] [rbp-140h] BYREF
  int v87; // [rsp+68h] [rbp-130h]
  PVOID *v88; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v89; // [rsp+78h] [rbp-120h] BYREF
  unsigned int v90; // [rsp+7Ch] [rbp-11Ch] BYREF
  int v91; // [rsp+80h] [rbp-118h] BYREF
  struct tagTHREADINFO *v92; // [rsp+88h] [rbp-110h]
  __int64 v93; // [rsp+90h] [rbp-108h]
  _BYTE v94[32]; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v95[3]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v96[24]; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD v97[10]; // [rsp+F0h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp-58h] BYREF
  int *v99; // [rsp+160h] [rbp-38h]
  __int64 v100; // [rsp+168h] [rbp-30h]

  memset(v97, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v97[1]);
  v97[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v97[3]) = 20;
  LOBYTE(v97[6]) = -1;
  v0 = gptiCurrent;
  v92 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 53);
  v93 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 183);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1464) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 183) + 1208LL) &= ~0x4000000u;
    *((_QWORD *)v0 + 183) = 0LL;
    *((_DWORD *)v0 + 302) &= ~0x4000000u;
  }
  v4 = *((_QWORD *)v0 + 57);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 57));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 122) |= 0x41u;
  if ( (int)IsInkProcessorOnThreadExitSupported() >= 0 )
    InkProcessorOnThreadExit(v0);
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported() >= 0 )
    xxxCleanupThreadPointerInputInfo(v0);
  if ( (int)IsUnreferenceUndispatchedFrameListSupported() >= 0 )
    UnreferenceUndispatchedFrameList();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread();
  v5 = *((_QWORD *)v0 + 57);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 216);
    if ( v6 && *(struct tagTHREADINFO **)(v6 + 32) == v0 && (int)IsMagpRevokeInputTransfromSupported() >= 0 )
      MagpRevokeInputTransfrom();
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v94, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v7 = *((_QWORD *)v0 + 57);
    v8 = *((_QWORD *)v0 + 53);
    if ( *(_QWORD *)(v7 + 256) == v8 )
    {
      for ( i = *(_QWORD *)(v8 + 328);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 456) != v7);
            i = *(_QWORD *)(i + 664) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v7 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v94);
  }
  if ( (*((_DWORD *)v0 + 302) & 8) != 0 && (int)IsMagContextThreadCalloutSupported() >= 0 )
    MagContextThreadCallout(&gMagnContext, v0, 0LL, 1LL);
  EtwTraceProcessWindowInfo((__int64)v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C01C3328 - 1) <= 2u
      || (qword_1C01C3310 & 0x8000000000200000uLL) == 0
      || (v10 = 1, (qword_1C01C3318 & 0x8000000000200000uLL) != qword_1C01C3318) )
    {
      v10 = 0;
    }
    if ( v10 )
    {
      v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 54), v11, &v90, &v89);
      if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
        McTemplateK0qqqqq(v14, (unsigned int)&ThreadExitEvent, v15, ThreadId, ThreadInfoFlags, v16, v90, v89);
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v17 = *((_QWORD *)v0 + 157);
  if ( v17 )
  {
    Win32FreePool(v17);
    *((_QWORD *)v0 + 157) = 0LL;
  }
  if ( (int)IsPatchThreadWindowsSupported() >= 0 )
    PatchThreadWindows(v0);
  if ( *((_QWORD *)v0 + 84) && (int)IsxxxCancelTrackingForThreadSupported() >= 0 )
    xxxCancelTrackingForThread(v0);
  v18 = *((_QWORD *)v0 + 84);
  if ( v18 )
  {
    HMAssignmentUnlock((__int64 *)(v18 + 16));
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 84));
    Win32FreePool(*((_QWORD *)v0 + 84));
    *((_QWORD *)v0 + 84) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported() >= 0 )
  {
    ProcessWindowStation = _GetProcessWindowStation(0LL);
    v22 = (_QWORD *)ProcessWindowStation;
    if ( ProcessWindowStation )
    {
      PushW32ThreadLock(ProcessWindowStation, v96, CompositionObject::Release);
      ObfReferenceObject(v22);
      if ( (struct tagTHREADINFO *)v22[6] == v0 && (int)IsxxxCloseClipboardSupported() >= 0 )
        xxxCloseClipboard(v22);
      if ( (struct tagTHREADINFO *)v22[7] == v0 )
        v22[7] = 0LL;
      PopAndFreeW32ThreadLock(v96);
    }
  }
  while ( *((_QWORD *)v0 + 76) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v86);
    v23 = (__int64 *)*((_QWORD *)v0 + 76);
    v24 = *v23;
    if ( *v23 != *(_QWORD *)v86[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v86);
      if ( v24 )
      {
        v86[0] = *(_QWORD *)(v24 + 88);
        ++*(_DWORD *)(v86[0] + 8LL);
      }
      else
      {
        v86[0] = &gSmartObjNullRef;
      }
    }
    v25 = v23;
    v85 = v23;
    v26 = (struct tagTHREADINFO *)v23[4];
    if ( gptiCurrent == v26 )
    {
      ++*((_DWORD *)v23 + 10);
    }
    else
    {
      v25 = 0LL;
      v85 = 0LL;
    }
    if ( v0 != v26 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v85);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v86);
      break;
    }
    v27 = *((_DWORD *)v23 + 2);
    if ( (v27 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported() >= 0 )
      {
        xxxEndMenuLoop(v23, *(_QWORD *)v86[0]);
        v25 = v85;
      }
      if ( v25 )
      {
        *((_DWORD *)v25 + 10) = 0;
        goto LABEL_103;
      }
      goto LABEL_104;
    }
    *((_DWORD *)v23 + 2) = v27 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 54) + 388LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported() >= 0 )
      xxxMNCloseHierarchy(*(_QWORD *)v86[0], v23);
    if ( (**(_DWORD **)v86[0] & 1) != 0 || (**(_DWORD **)v86[0] & 0x8000) != 0 )
    {
      if ( v85 )
      {
        *((_DWORD *)v85 + 10) = 0;
LABEL_103:
        v85 = 0LL;
      }
LABEL_104:
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v23);
      goto LABEL_106;
    }
    if ( v85 )
    {
      *((_DWORD *)v85 + 10) = 0;
      v85 = 0LL;
    }
    if ( (int)IsMNFlushDestroyedPopupsSupported() >= 0 )
      MNFlushDestroyedPopups(*(_QWORD *)v86[0]);
    if ( (int)IsMNUnlinkDelayedFreePopupsSupported() >= 0 )
      MNUnlinkDelayedFreePopups(*(_QWORD *)v86[0]);
    v28 = *(_DWORD **)v86[0];
    if ( (**(_DWORD **)v86[0] & 0x40000000) != 0 )
    {
      *v28 &= ~0x20000000u;
    }
    else if ( v28 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C01CFCA8);
    }
    else
    {
      v29 = *(_QWORD *)v86[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v86[0] + 88LL));
      v30 = *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 4);
      if ( v30 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v30, v29);
    }
    if ( (int)IsxxxMNEndMenuStateInternalSupported() >= 0 )
      xxxMNEndMenuStateInternal(v0, v23);
LABEL_106:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v85);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v86);
  }
  v31 = *((_QWORD *)v0 + 90);
  if ( v31 )
  {
    HMAssignmentUnlock((__int64 *)(v31 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 8LL));
    Win32FreePool(*((_QWORD *)v0 + 90));
    *((_QWORD *)v0 + 90) = 0LL;
  }
  v32 = *((_QWORD *)v0 + 53);
  if ( v32 && *(struct tagTHREADINFO **)(v32 + 336) == v0 )
    *(_QWORD *)(v32 + 336) = 0LL;
  while ( *((_QWORD *)v0 + 78) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported() >= 0 )
      xxxDestroyThreadDDEObject(v0, *((_QWORD *)v0 + 78));
  }
  if ( (*((_DWORD *)v0 + 122) & 0x800) != 0 )
  {
    v31 = *(_QWORD *)(*((_QWORD *)v0 + 57) + 8LL);
    v33 = *(_QWORD *)(v31 + 24);
    if ( v33 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v95[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v95;
      v95[1] = v33;
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
      if ( (int)IsxxxFlushPaletteSupported() >= 0 )
        xxxFlushPalette(v33);
      ThreadUnlock1();
    }
  }
  v35 = *((_QWORD *)v0 + 53);
  if ( v35 && *(_QWORD *)(v35 + 832) && (int)IsDestroyThreadHidObjectsSupported() >= 0 )
    DestroyThreadHidObjects(v0);
  if ( *((int *)v0 + 122) < 0 && (int)IsxxxHandleHealthyThreadSupported() >= 0 )
    xxxHandleHealthyThread(v0);
  if ( *((_QWORD *)v0 + 142) && (int)IsDestroyInputHangInfoSupported() >= 0 )
    DestroyInputHangInfo(v0);
  v36 = *((_DWORD *)v0 + 302);
  if ( (v36 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 302) = v36 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v19, v20);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v37 = (void *)*((_QWORD *)v0 + 166);
  if ( v37 )
  {
    CleanupRimDevObjInUserModeCallback(v37);
    *((_QWORD *)v0 + 166) = 0LL;
  }
  v38 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v38);
  if ( IsInputThread() )
    UserDeactivateMITInputProcessing();
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 328) != v0 || (v40 = 1, *((_QWORD *)v0 + 83)) )
    v40 = 0;
  v87 = v40;
  if ( v1 )
  {
    v39 = (void *)*(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
    if ( (_WORD)v39 )
    {
      v41 = (unsigned __int16)v39;
      v39 = (void *)*(unsigned __int16 *)(v1 + 816);
      if ( (int)v39 >= 0xFFFF - v41 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v39) = v41 + (_WORD)v39;
        *(_WORD *)(v1 + 816) = (_WORD)v39;
      }
    }
    if ( v40
      && *(_WORD *)(v1 + 816)
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v91 = v42;
      v99 = &v91;
      v100 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019D8E9, 0LL, 0LL, 3u, &pData);
    }
  }
  if ( v40 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x100000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v43 = *(_QWORD *)(v1 + 896);
        if ( v43 )
        {
          *(_QWORD *)(v43 + 96) = 0LL;
          v39 = *(void **)(v43 + 88);
          if ( v39 )
          {
            ZwClose(v39);
            *(_QWORD *)(v43 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v39, (const struct tagPROCESSINFO *)v1);
    }
    v44 = *((_QWORD *)v0 + 53);
    if ( gppiFullscreen == v44 && !gbMDEVDisabled )
    {
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v97);
      v44 = *((_QWORD *)v0 + 53);
    }
    if ( v44 && IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1u);
  }
  if ( (int)IsDestroyThreadsTimersSupported() >= 0 )
    DestroyThreadsTimers(v0);
  if ( *((_DWORD *)v0 + 174) )
  {
    v45 = *((_QWORD *)v0 + 86);
    if ( v45 )
    {
      if ( *(_DWORD *)(v45 + 68) == -1 )
        v46 = *(_QWORD *)(v45 + 56);
      else
        v46 = *(_QWORD *)(v45 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424)
                        + 8LL * *(int *)(v45 + 68)
                        + 416);
      v47 = *(_DWORD *)(v45 + 48);
    }
    else
    {
      v46 = 0LL;
      v47 = 0;
    }
    TraceLoggingDeadLowLevelHook(v47, v46);
  }
  if ( (int)IsFreeThreadsWindowHooksSupported() >= 0 )
    FreeThreadsWindowHooks();
  if ( (int)IsDestroyThreadsHotKeysSupported() >= 0 )
    DestroyThreadsHotKeys();
  DestroyThreadsObjects(v49, v48, v50);
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
  if ( (int)IsFreeThreadsWinEventsSupported() >= 0 )
    FreeThreadsWinEvents(v0);
  HMAssignmentUnlock((__int64 *)v0 + 55);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v84, 0);
    CleanupResources();
  }
  if ( v40 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) & 0x1000000) != 0 )
    {
      v53 = *((_QWORD *)v0 + 58);
      if ( v53 )
      {
        if ( *(_QWORD *)(v53 + 168) && (int)Is_PostMessageSupported() >= 0 )
          _PostMessage(*(_QWORD *)(v53 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported() >= 0 )
      DestroyProcessesClasses(*((_QWORD *)v0 + 53));
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x10000000u;
    v54 = *((_QWORD *)v0 + 60);
    v55 = *(_DWORD **)(v54 + 208);
    if ( v55 )
    {
      ProbeForWrite(*(volatile void **)(v54 + 208), 4uLL, 4u);
      *v55 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 53));
  }
  HMAssignmentUnlock((__int64 *)v0 + 99);
  v56 = *((_QWORD *)v0 + 170);
  if ( v56 )
  {
    Win32FreePool(v56);
    *((_QWORD *)v0 + 170) = 0LL;
  }
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported() >= 0 )
      PackAffectedThreadsFromThreadCleanup(v0);
    v56 = *((_QWORD *)v0 + 54);
    *(_DWORD *)(v56 + 384) -= *((_DWORD *)v0 + 190);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 54) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 57);
      ApiSetEditionSystemGenerateMove(0);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v56);
  v58 = (_QWORD *)(CurrentProcessWin32Process + 328);
  v59 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 328);
  if ( v59 )
  {
    if ( v59 == v0 )
      goto LABEL_219;
    v60 = *(_QWORD *)(CurrentProcessWin32Process + 328);
    do
    {
      v61 = *(struct tagTHREADINFO **)(v60 + 664);
      v62 = (struct tagTHREADINFO *)v60;
      if ( !v61 )
        break;
      v58 = (_QWORD *)(v60 + 664);
      v60 = *(_QWORD *)(v60 + 664);
      v62 = v61;
    }
    while ( v61 != v0 );
    if ( v62 == v0 )
    {
LABEL_219:
      *v58 = *((_QWORD *)v0 + 83);
      *((_QWORD *)v0 + 83) = 0LL;
    }
  }
  v88 = 0LL;
  LockObjectAssignment((void **)&v88, *((void **)v0 + 57));
  if ( (int)IsSendMsgCleanupSupported() >= 0 )
    SendMsgCleanup(v0);
  if ( *((_DWORD *)v0 + 371) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 371) = 0;
  }
  v64 = *((_QWORD *)v0 + 53);
  if ( v64 )
    --*(_DWORD *)(v64 + 392);
  UninitializeThreadInfoIocp(v0, v63);
  v66 = (void *)*((_QWORD *)v0 + 177);
  if ( v66 )
  {
    ObCloseHandle(v66, 0);
    *((_QWORD *)v0 + 177) = 0LL;
  }
  v67 = (void *)*((_QWORD *)v0 + 91);
  if ( v67 )
  {
    if ( (int)ProtectHandle(v67, v65, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 302) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 91), 1);
    }
    *((_QWORD *)v0 + 91) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( (int)IsxxxWindowEventSupported() >= 0 )
    {
      xxxWindowEvent(32773LL, 0LL, 4294967292LL, 0LL, 4);
      xxxWindowEvent(3LL, 0LL, 0LL, 0LL, 4);
    }
    v68 = v88;
    if ( *((_QWORD *)v88[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      _PostMessage(*((_QWORD *)v68[1] + 25), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( (int)IsxxxSetForegroundThreadSupported() >= 0 )
      xxxSetForegroundThread(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v69 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 53) + 328LL);
    if ( !v69 )
      v69 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v69, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 302) & 0x2000) != 0 )
    ScrubDelegatedWindows(v0);
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 54), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 54) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 54), v0);
  }
  if ( *((_QWORD *)v0 + 57) )
  {
    v70 = (_QWORD *)((char *)v0 + 744);
    v71 = *((_QWORD *)v0 + 93);
    v72 = (_QWORD *)*((_QWORD *)v0 + 94);
    if ( *(struct tagTHREADINFO **)(v71 + 8) != (struct tagTHREADINFO *)((char *)v0 + 744) || (_QWORD *)*v72 != v70 )
      __fastfail(3u);
    *v72 = v71;
    *(_QWORD *)(v71 + 8) = v72;
    *((_QWORD *)v0 + 94) = (char *)v0 + 744;
    *v70 = v70;
  }
  FreeMessageList((char *)v0 + 808);
  v73 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v73 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v73 = *j;
      Win32FreePool((__int64)j);
    }
    else
    {
      v73 = j;
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
    DisableDelegation(v75);
    gptiForeground = 0LL;
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v76 = *((_QWORD *)v0 + 54);
  if ( v76 && !*(_DWORD *)(v76 + 392) )
  {
    if ( gpqForeground == v76 )
    {
      gpqForeground = 0LL;
      v76 = *((_QWORD *)v0 + 54);
    }
    if ( gpqForegroundPrev == v76 )
    {
      gpqForegroundPrev = 0LL;
      v76 = *((_QWORD *)v0 + 54);
    }
    if ( gpqCursor == (struct tagQ *)v76 )
      gpqCursor = 0LL;
  }
  if ( v88 )
  {
    v77 = (char *)*((_QWORD *)v0 + 56);
    if ( v77 )
    {
      if ( v77 != (char *)v0 + 1032 )
      {
        RtlFreeHeap(v88[16], 0, v77);
        *((_QWORD *)v0 + 56) = (char *)v0 + 1032;
      }
    }
  }
  if ( IsInputThread() )
    CInputThread::RevokeThreadAsInput(v78);
  if ( (*((_DWORD *)v0 + 122) & 4) != 0 )
  {
    v79 = *((_QWORD *)v0 + 60);
    if ( v79 )
    {
      Win32FreePool(v79);
      *((_QWORD *)v0 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v88);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v81) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    LOBYTE(v81) = McTemplateK0(v80, &CompleteGuiThreadExecution, (const GUID *)&Context.Flags);
  while ( 1 )
  {
    v82 = (_QWORD *)*((_QWORD *)v0 + 181);
    if ( !v82 )
      break;
    *((_QWORD *)v0 + 181) = *v82;
    v81 = *(v82 - 1);
    if ( (_UNKNOWN *)v81 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v82 - 1) + 8LL);
      v81 = *(v82 - 1);
      if ( !*(_DWORD *)(v81 + 8) )
      {
        v81 = *(v82 - 1);
        if ( *(_BYTE *)(v81 + 12) )
          LOBYTE(v81) = Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *(v82 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 302) |= 0x80u;
  return v81;
}
