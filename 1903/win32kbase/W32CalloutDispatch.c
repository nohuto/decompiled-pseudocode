/*
 * XREFs of W32CalloutDispatch @ 0x1C0023550
 * Callers:
 *     <none>
 * Callees:
 *     ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x1C0005B04 (-W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     CoreMsgObjectCallout @ 0x1C0043300 (CoreMsgObjectCallout.c)
 *     QueuePowerRequest @ 0x1C00588A0 (QueuePowerRequest.c)
 *     UserPowerStateCallout @ 0x1C0059C88 (UserPowerStateCallout.c)
 *     UserPowerInfoCallout @ 0x1C0062AE4 (UserPowerInfoCallout.c)
 *     RIMObjectManagerCallout @ 0x1C006CF40 (RIMObjectManagerCallout.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C008B93C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C008DEB4 (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserProcessFreezeCallout @ 0x1C0095764 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C00963AC (UserProcessThawCallout.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C0106FCC (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C010A644 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C010AA5C (UserProcessTimerStatisticsCallout.c)
 *     ActivationObjectCallout @ 0x1C0121630 (ActivationObjectCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 result; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagKERNELHANDLETABLEENTRY *i; // r15
  struct _KTHREAD *CurrentThread; // r15
  __int64 v28; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 ProcessJob; // rax
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v40; // r8
  unsigned int v41; // esi
  __int64 v42; // rcx
  LARGE_INTEGER *v43; // rbx
  __int64 v44; // rax
  struct tagTHREADINFO *v45; // rbx
  struct tagTHREADINFO **v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r9d
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct tagKERNELHANDLETABLEENTRY *j; // r15
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  PERESOURCE *v68; // rdi
  __int64 v69; // r8
  __int64 v70; // rax
  unsigned int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  PERESOURCE *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // rax
  _QWORD *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rbx
  int v81; // eax
  int v82; // [rsp+30h] [rbp-D0h] BYREF
  int v83; // [rsp+34h] [rbp-CCh] BYREF
  int v84; // [rsp+38h] [rbp-C8h] BYREF
  int v85; // [rsp+3Ch] [rbp-C4h] BYREF
  int v86; // [rsp+40h] [rbp-C0h] BYREF
  int v87; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v89; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v91; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v93; // [rsp+80h] [rbp-80h]
  unsigned __int8 v94; // [rsp+88h] [rbp-78h]
  GUID pActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+D0h] [rbp-30h] BYREF
  int *v100; // [rsp+F0h] [rbp-10h]
  __int64 v101; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v102; // [rsp+100h] [rbp+0h] BYREF
  int *v103; // [rsp+120h] [rbp+20h]
  __int64 v104; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v105; // [rsp+130h] [rbp+30h] BYREF
  int *v106; // [rsp+150h] [rbp+50h]
  __int64 v107; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v108; // [rsp+160h] [rbp+60h] BYREF
  int *v109; // [rsp+180h] [rbp+80h]
  __int64 v110; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v111; // [rsp+190h] [rbp+90h] BYREF
  int *v112; // [rsp+1B0h] [rbp+B0h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0
    && (unsigned int)GreIsCurrentProcessSystemCritical()
    && a2 > 1 )
  {
    return 3221227292LL;
  }
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
    *(_QWORD *)&pActivityId.Data1 = 0LL;
    *(_QWORD *)pActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v94 = 1;
      v70 = PsGetCurrentThreadWin32Thread();
      v93 = v70;
      if ( v70 && (*(int *)(v70 + 24) > 0 || *(_DWORD *)(v93 + 48)) )
      {
        EtwActivityIdControl(3u, &pActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v85 = v94;
            v106 = &v85;
            v107 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v105);
          }
        }
      }
    }
    else
    {
      v93 = 0LL;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v93 && (*(_DWORD *)(v93 + 48) || *(int *)(v93 + 24) > 0) )
    {
      *(_DWORD *)(v93 + 44) = 1;
      *(GUID *)(v93 + 28) = pActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v86 = v94;
          v109 = &v86;
          v110 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v108);
          v71 = dword_1C020FB50;
        }
        if ( v71 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v87 = v94;
          v112 = &v87;
          v113 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v111);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      for ( i = gpducstulHead; gpducstulHead; i = gpducstulHead )
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
        v72 = *(_QWORD *)i;
        *((_QWORD *)i + 2) = 0LL;
        if ( !*(_DWORD *)(v72 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v75 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v75 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v76);
        ExReleaseResourceAndLeaveCriticalRegion(*v75);
        HMUnlockObject(*(_QWORD *)i);
        tagDomLock::LockExclusive((tagDomLock *)v75);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    CurrentThread = KeGetCurrentThread();
    v28 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v32 = ThreadWin32Thread;
    if ( ThreadWin32Thread
      && (*(_DWORD *)(ThreadWin32Thread + 480) & 0x20000000) != 0
      && (v77 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 760LL),
          v31 = *(unsigned int *)(v77 + 24),
          (v31 & 0x20) != 0) )
    {
      v28 = *(_QWORD *)(v77 + 16);
    }
    else
    {
      v33 = PsGetCurrentProcess(v31, v30);
      ProcessJob = PsGetProcessJob(v33);
      v35 = ProcessJob;
      if ( !v32 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v78 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v78[1] == v35 )
              break;
            v78 = (_QWORD *)*v78;
          }
          while ( v78 );
        }
        v28 = v78[2];
      }
      else if ( (int)IsReferenceWindowStationSupported() < 0
             || (v38 = PsGetCurrentProcess(v37, v36),
                 ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v38),
                 (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v88, 1) < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          v28 = ModerncoreAtomTable();
      }
      else
      {
        v28 = *(_QWORD *)(v88 + 136);
      }
    }
    *a3 = v28;
    v40 = (unsigned int)gcSwitchInProgressWaiters;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v40);
      if ( (_DWORD)gdwInAtomicOperation )
      {
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v79 = PsGetCurrentThreadWin32Thread();
      v80 = v79;
      if ( v79 )
      {
        v81 = *(_DWORD *)(v79 + 24);
        if ( (*(_DWORD *)(v80 + 44) || *(_DWORD *)(v80 + 48) || v81 > 0)
          && dword_1C020FB50 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v80 + 28), 0LL, 2u, &v114);
        }
        *(_DWORD *)(v80 + 44) = 0;
        v89 = 0uLL;
        *(_OWORD *)(v80 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    return 0LL;
  }
  switch ( a2 )
  {
    case 0u:
      if ( (int)IsW32pProcessCalloutSupported() < 0 )
        goto LABEL_89;
      result = W32pProcessCallout(a3);
      break;
    case 1u:
      if ( (int)IsW32pThreadCalloutSupported() < 0 )
        goto LABEL_89;
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
      return UserPowerInfoCallout(*(_DWORD *)a3, v5, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
    case 6u:
      if ( (int)IsUserJobCalloutSupported() < 0 )
        goto LABEL_89;
      result = UserJobCallout(a3);
      break;
    case 8u:
      if ( (int)IsDesktopOpenProcedureSupported() < 0 )
        goto LABEL_89;
      result = DesktopOpenProcedure(a3);
      break;
    case 9u:
      if ( (int)IsOkayToCloseDesktopSupported() < 0 )
        goto LABEL_89;
      result = OkayToCloseDesktop(a3);
      break;
    case 0xAu:
      if ( (int)IsUnmapDesktopSupported() < 0 )
        goto LABEL_89;
      result = UnmapDesktop(a3);
      break;
    case 0xBu:
      if ( (int)IsFreeDesktopSupported() < 0 )
        goto LABEL_89;
      result = FreeDesktop(a3);
      break;
    case 0xCu:
      if ( (int)IsOkayToCloseWindowStationSupported() < 0 )
        goto LABEL_89;
      result = OkayToCloseWindowStation(a3);
      break;
    case 0xDu:
      if ( (int)IsDestroyWindowStationSupported() < 0 )
        goto LABEL_89;
      result = DestroyWindowStation(a3);
      break;
    case 0xEu:
      if ( (int)IsFreeWindowStationSupported() < 0 )
        goto LABEL_89;
      result = FreeWindowStation(a3);
      break;
    case 0xFu:
      if ( (int)IsParseWindowStationSupported() < 0 )
        goto LABEL_89;
      result = ParseWindowStation(a3);
      break;
    case 0x10u:
      if ( (int)IsWindowStationOpenProcedureSupported() < 0 )
LABEL_89:
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
      v41 = 0;
      v42 = *(_QWORD *)(*a3 + 8);
      if ( v42 )
        v41 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, a3);
      result = v41;
      break;
    case 0x16u:
      ((void (__fastcall *)(__int64 *))qword_1C0215040)(a3);
      result = UserProcessFreezeCallout(a3);
      break;
    case 0x17u:
      ((void (__fastcall *)(__int64 *))qword_1C0215048)(a3);
      result = UserProcessThawCallout(a3);
      break;
    case 0x18u:
      ((void (__fastcall *)(__int64, __int64))qword_1C0215208)(*a3, a3[1]);
      return 0LL;
    case 0x19u:
      ((void (__fastcall *)(__int64 *))qword_1C0215210)(a3);
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
      v43 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v43 )
        v43[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v91 = 1;
        v44 = PsGetCurrentThreadWin32Thread();
        v90 = v44;
        if ( v44 && (*(int *)(v44 + 24) > 0 || *(_DWORD *)(v90 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v82 = v91;
              v97 = &v82;
              v98 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
            }
          }
        }
      }
      else
      {
        v90 = 0LL;
      }
      v45 = 0LL;
      while ( 1 )
      {
        v46 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v46 )
          v45 = *v46;
        v49 = (PVOID)PsGetCurrentProcess(v48, v47);
        if ( v49 )
        {
          if ( v49 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v51, v50) == gpepCSRSS && v45 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v45 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v90 && (*(_DWORD *)(v90 + 48) || *(int *)(v90 + 24) > 0) )
      {
        *(_DWORD *)(v90 + 44) = 1;
        *(GUID *)(v90 + 28) = ActivityId;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v83 = v91;
            v100 = &v83;
            v101 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v99);
            v52 = dword_1C020FB50;
          }
          if ( v52 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v84 = v91;
            v103 = &v84;
            v104 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v102);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v45;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        v56 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v56 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57);
        if ( ExIsResourceAcquiredExclusiveLite(*v56) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v60);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v56);
        for ( j = gpducstulHead; gpducstulHead; j = gpducstulHead )
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)j + 2);
          v65 = *(_QWORD *)j;
          *((_QWORD *)j + 2) = 0LL;
          if ( !*(_DWORD *)(v65 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v61, v63);
          v68 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v68 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v66, v69);
          ExReleaseResourceAndLeaveCriticalRegion(*v68);
          HMUnlockObject(*(_QWORD *)j);
          tagDomLock::LockExclusive((tagDomLock *)v68);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v56);
      }
      if ( a3 && a3 == g_pepDwm )
        vReleaseDwmHitTestWaiters();
      UserSessionSwitchLeaveCrit(v53);
      return 0LL;
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
      result = CoreMsgObjectCallout(a2, a3);
      break;
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
      result = ActivationObjectCallout(a2, a3);
      break;
    case 0x29u:
      result = UserProcessTimerDelayCallout(a3);
      break;
    case 0x2Au:
      result = UserProcessTimerStatisticsCallout(a3);
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0x1C0000000uLL, v5, v6);
      result = 3221225485LL;
      break;
  }
  return result;
}
