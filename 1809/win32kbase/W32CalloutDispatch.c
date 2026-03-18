/*
 * XREFs of W32CalloutDispatch @ 0x1C0025DE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C0073E48 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C007968C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserProcessFreezeCallout @ 0x1C00819B4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0082608 (UserProcessThawCallout.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     RIMObjectManagerCallout @ 0x1C0086578 (RIMObjectManagerCallout.c)
 *     CoreMsgObjectCallout @ 0x1C0089A1C (CoreMsgObjectCallout.c)
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00965B0 (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C0096830 (QueuePowerRequest.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C00E146C (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C00E14B4 (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C00E4610 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00E4764 (UserProcessTimerStatisticsCallout.c)
 *     McTemplateK0xqx @ 0x1C00EB610 (McTemplateK0xqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 result; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r15
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rbx
  int v10; // r8d
  LARGE_INTEGER PerformanceCounter; // r12
  LONGLONG v12; // r14
  bool v13; // zf
  _QWORD *v14; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 ProcessJob; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rax
  LARGE_INTEGER *v28; // rbx
  struct tagTHREADINFO *v29; // rbx
  _QWORD *i; // r14
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // ecx
  unsigned int v36; // r9d
  int v37; // ecx
  __int64 v38; // rax
  __int64 *DomainLockRef; // rbx
  _QWORD *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // eax
  DWORD LowPart; // eax
  int v45; // r8d
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  tagObjLock *v52; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  unsigned __int8 v56; // [rsp+70h] [rbp-90h]
  GUID ActivityId; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v58[40]; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  int *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+120h] [rbp+20h] BYREF
  int *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  int *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+170h] [rbp+70h] BYREF
  int *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  int *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]

  if ( a2 == 7 )
  {
    if ( (int)IsNtGdiFlushUserBatchSupported() >= 0 )
      NtGdiFlushUserBatch();
    return 0LL;
  }
  if ( a2 == 2 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v56 = 1;
      v34 = PsGetCurrentThreadWin32Thread();
      v55 = v34;
      if ( v34 )
      {
        v46 = *(_DWORD *)(v34 + 24);
        if ( v46 > 0 || *(_DWORD *)(v55 + 48) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C01C7F10 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
            {
              TlgCreateWsz(&pDesc, L"WaitForCrit");
              v48 = v56;
              v63 = &v48;
              v61 = &v46;
              v62 = 4LL;
              v64 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D532, &ActivityId, 0LL, 5u, &pData);
            }
          }
        }
      }
    }
    else
    {
      v55 = 0LL;
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v7 )
        v6 = *v7;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v6 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      if ( v55 )
      {
        v35 = *(_DWORD *)(v55 + 24);
        v47 = v35;
        if ( *(_DWORD *)(v55 + 48) || v35 > 0 )
        {
          *(_DWORD *)(v55 + 44) = 1;
          *(GUID *)(v55 + 28) = ActivityId;
          if ( dword_1C01C7F10 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
            {
              TlgCreateWsz(&v66, L"AcquiredCrit");
              v49 = v56;
              v69 = &v49;
              v67 = &v47;
              v68 = 4LL;
              v70 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D4A9, &ActivityId, 0LL, 5u, &v65);
              v36 = dword_1C01C7F10;
            }
            if ( v36 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
            {
              TlgCreateWsz(&v72, L"EnterCrit");
              v50 = v56;
              v75 = &v50;
              v73 = &v47;
              v74 = 4LL;
              v76 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D4EF, &ActivityId, 0LL, 5u, &v71);
            }
          }
        }
      }
    }
    v9 = PsGetCurrentThreadWin32Thread();
    if ( v9 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v12 = PerformanceCounter.QuadPart - *(_QWORD *)(v9 + 8);
      v13 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v9 + 8) = PerformanceCounter;
      if ( !v13 )
      {
        v37 = (unsigned __int8)byte_1C01C3328;
        if ( (unsigned __int8)(byte_1C01C3328 - 1) > 2u
          && (qword_1C01C3310 & 0x200000010000000LL) != 0
          && (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318
          && SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
        {
          LOBYTE(v37) = byte_1C01C3328 - 1;
          McTemplateK0xqx(v37, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v12, 0, gullUserCritAcquireToken);
        }
      }
      if ( v12 >= *((__int64 *)&WPP_MAIN_CB.Reserved + 1)
        && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.Reserved) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
          McTemplateK0xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v10,
            v12,
            1000000 * v12 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.Reserved = (PVOID)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    if ( &gDomainTlLock == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (struct _KTHREAD *)qword_1C01CE380 == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&gDomainTlLock, 0LL);
    v14 = (_QWORD *)gpducstulHead;
    for ( qword_1C01CE380 = (__int64)KeGetCurrentThread(); gpducstulHead; v14 = (_QWORD *)gpducstulHead )
    {
      gpducstulHead = v14[2];
      v38 = *v14;
      v14[2] = 0LL;
      if ( !*(_DWORD *)(v38 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      DomainLockRef = (__int64 *)GetDomainLockRef(8LL);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v14);
      tagObjLock::LockExclusive((tagObjLock *)DomainLockRef);
    }
    if ( (struct _KTHREAD *)qword_1C01CE380 == KeGetCurrentThread() )
    {
      qword_1C01CE380 = 0LL;
      ExReleasePushLockExclusiveEx(&gDomainTlLock, 0LL);
    }
    else
    {
      _InterlockedDecrement(&dword_1C01CE388);
      ExReleasePushLockSharedEx(&gDomainTlLock, 0LL);
    }
    KeLeaveCriticalRegion();
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
    v18 = ThreadWin32Thread;
    if ( ThreadWin32Thread
      && (*(_DWORD *)(ThreadWin32Thread + 488) & 0x20000000) != 0
      && (v27 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 768LL), (*(_DWORD *)(v27 + 24) & 0x20) != 0) )
    {
      v16 = *(_QWORD *)(v27 + 16);
    }
    else
    {
      v19 = PsGetCurrentProcess();
      ProcessJob = PsGetProcessJob(v19);
      v21 = ProcessJob;
      if ( !v18 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v40 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v40[1] == v21 )
              break;
            v40 = (_QWORD *)*v40;
          }
          while ( v40 );
        }
        v16 = v40[2];
      }
      else if ( (int)IsReferenceWindowStationSupported() < 0
             || (v22 = PsGetCurrentProcess(),
                 ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v22),
                 (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v53, 1) < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          v16 = ModerncoreAtomTable();
      }
      else
      {
        v16 = *(_QWORD *)(v53 + 136);
      }
    }
    *a3 = v16;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      v41 = PsGetCurrentThreadWin32Thread();
      v42 = v41;
      if ( v41 )
      {
        v43 = *(_DWORD *)(v41 + 24);
        v51 = v43;
        if ( (*(_DWORD *)(v42 + 44) || *(_DWORD *)(v42 + 48) || v43 > 0)
          && dword_1C01C7F10 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
        {
          TlgCreateWsz(&v78, L"LeaveCrit");
          v80 = 4LL;
          v79 = &v51;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v42 + 28), 0LL, 4u, &v77);
        }
        *(_DWORD *)(v42 + 44) = 0;
        v54 = 0uLL;
        *(_OWORD *)(v42 + 28) = 0uLL;
      }
    }
    v24 = PsGetCurrentThreadWin32Thread();
    if ( v24 )
    {
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
        && (qword_1C01C3310 & 0x200000010000000LL) != 0
        && (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
          McTemplateK0xqx(
            *(_QWORD *)(v24 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v45,
            LowPart - *(_DWORD *)(v24 + 8),
            0,
            *(_QWORD *)(v24 + 16));
      }
    }
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( (int)IsW32pProcessCalloutSupported() < 0 )
        goto LABEL_92;
      result = W32pProcessCallout(a3);
      break;
    case 1u:
      if ( (int)IsW32pThreadCalloutSupported() < 0 )
        goto LABEL_92;
      result = W32pThreadCallout(*a3, *((unsigned int *)a3 + 2));
      break;
    case 3u:
      if ( gbPowerCalloutsReady && gbVideoInitialized )
        return QueuePowerRequest(a3, 0LL);
      else
        return 3221225473LL;
    case 4u:
      return UserPowerStateCallout(a3);
    case 5u:
      return UserPowerInfoCallout(*(_DWORD *)a3, a2, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
    case 6u:
      if ( (int)IsUserJobCalloutSupported() < 0 )
        goto LABEL_92;
      result = UserJobCallout(a3);
      break;
    case 8u:
      if ( (int)IsDesktopOpenProcedureSupported() < 0 )
        goto LABEL_92;
      result = DesktopOpenProcedure(a3);
      break;
    case 9u:
      if ( (int)IsOkayToCloseDesktopSupported() < 0 )
        goto LABEL_92;
      result = OkayToCloseDesktop(a3);
      break;
    case 0xAu:
      if ( (int)IsUnmapDesktopSupported() < 0 )
        goto LABEL_92;
      result = UnmapDesktop(a3);
      break;
    case 0xBu:
      if ( (int)IsFreeDesktopSupported() < 0 )
        goto LABEL_92;
      result = FreeDesktop(a3);
      break;
    case 0xCu:
      if ( (int)IsOkayToCloseWindowStationSupported() < 0 )
        goto LABEL_92;
      result = OkayToCloseWindowStation(a3);
      break;
    case 0xDu:
      if ( (int)IsDestroyWindowStationSupported() < 0 )
        goto LABEL_92;
      result = DestroyWindowStation(a3);
      break;
    case 0xEu:
      if ( (int)IsFreeWindowStationSupported() < 0 )
        goto LABEL_92;
      result = FreeWindowStation(a3);
      break;
    case 0xFu:
      if ( (int)IsParseWindowStationSupported() < 0 )
        goto LABEL_92;
      result = ParseWindowStation(a3);
      break;
    case 0x10u:
      if ( (int)IsWindowStationOpenProcedureSupported() < 0 )
LABEL_92:
        result = 3221225659LL;
      else
        result = WindowStationOpenProcedure(a3);
      break;
    case 0x11u:
      return 0LL;
    case 0x12u:
      result = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
      break;
    case 0x13u:
      result = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
      break;
    case 0x14u:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
                 *(_QWORD *)(a3[1] + 8),
                 a3);
      break;
    case 0x15u:
      v25 = 0;
      v26 = *(_QWORD *)(*a3 + 8);
      if ( v26 )
        v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, a3);
      result = v25;
      break;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C01CD680)(a3);
      result = UserProcessFreezeCallout(a3);
      break;
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C01CD688)(a3);
      result = UserProcessThawCallout(a3);
      break;
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C01CDB40)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C01CDB48)(a3);
      return 0LL;
    case 0x1Au:
      result = W32pQuerySubsystemProcess((struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *)a3);
      break;
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
      result = RIMObjectManagerCallout(a2, a3);
      break;
    case 0x1Fu:
      result = WakeRITForShutdown();
      break;
    case 0x20u:
      v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v28 )
        v28[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58, 1);
      v29 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v58);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v29;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v52);
      for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
      {
        gpducstulHead = i[2];
        v31 = *i;
        i[2] = 0LL;
        if ( !*(_DWORD *)(v31 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v32 = (__int64 *)GetDomainLockRef(8LL);
        if ( v32 == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        tagObjLock::UnLock((tagObjLock *)v32);
        HMUnlockObject(*i);
        tagObjLock::LockExclusive((tagObjLock *)v32);
      }
      tagObjLock::UnLock(v52);
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit(v33);
      return 0LL;
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
      result = CoreMsgObjectCallout(a2, a3);
      break;
    case 0x25u:
      result = UserProcessTimerDelayCallout(a3);
      break;
    case 0x26u:
      result = UserProcessTimerStatisticsCallout(a3);
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      result = 3221225485LL;
      break;
  }
  return result;
}
