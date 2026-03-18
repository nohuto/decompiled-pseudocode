/*
 * XREFs of W32CalloutDispatch @ 0x1C005A060
 * Callers:
 *     <none>
 * Callees:
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C0002F08 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C001060C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     UserProcessFreezeCallout @ 0x1C005A850 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C005A980 (UserProcessThawCallout.c)
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C00A13DC (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 *     UserPowerStateCallout @ 0x1C00A54D0 (UserPowerStateCallout.c)
 *     UserProcessTimerDelayCallout @ 0x1C00A77A8 (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00A792C (UserProcessTimerStatisticsCallout.c)
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 *     RIMObjectManagerCallout @ 0x1C00F1BE0 (RIMObjectManagerCallout.c)
 *     CoreMsgObjectCallout @ 0x1C01653FC (CoreMsgObjectCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 ThreadWin32Thread; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // r15
  struct tagTHREADINFO **v13; // rax
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v22; // r8d
  LONGLONG v23; // r14
  LARGE_INTEGER v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 ProcessJob; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // esi
  __int64 v36; // rcx
  LARGE_INTEGER *v37; // rbx
  struct tagTHREADINFO *v38; // rbx
  struct tagTHREADINFO **v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *i; // r14
  __int64 v46; // rcx
  PVOID v47; // rbx
  PVOID v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v58; // rdx
  _QWORD *v59; // r12
  __int64 v60; // rbx
  DWORD LowPart; // eax
  int v62; // r8d
  __int64 v63; // [rsp+30h] [rbp-48h] BYREF
  tagObjLock *v64; // [rsp+88h] [rbp+10h] BYREF
  struct _KTHREAD *v65; // [rsp+98h] [rbp+20h]

  if ( (_DWORD)a2 == 7 )
  {
    if ( (int)IsNtGdiFlushUserBatchSupported() >= 0 )
      NtGdiFlushUserBatch();
    return 0LL;
  }
  else if ( (_DWORD)a2 == 2 )
  {
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v65 = CurrentThread;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    v20 = PsGetCurrentThreadWin32Thread(v16, v15, v17);
    if ( v20 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v18 = 0x200000010000000LL;
      v23 = PerformanceCounter.QuadPart - *(_QWORD *)(v20 + 8);
      v24 = PerformanceCounter;
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
      {
        v19 = (unsigned __int8)byte_1C019A1D8;
        LOBYTE(v19) = byte_1C019A1D8 - 1;
        if ( (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
          && (qword_1C019A1C0 & 0x200000010000000LL) != 0
          && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8
          && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          McTemplateK0xqx(v19, (unsigned int)&AcquiredExclusiveUserCritEvent, v22, v23, 0, gullUserCritAcquireToken);
        }
      }
      if ( v23 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && v24.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
          McTemplateK0xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v22,
            v23,
            1000000 * v23 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        W32KEtwUserCritAcquireDelayExLastTelemetryQPC = v24.QuadPart;
      }
      CurrentThread = v65;
      *(_QWORD *)(v20 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( &gDomainTlLock == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    if ( (struct _KTHREAD *)qword_1C01A0D30 == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&gDomainTlLock, 0LL);
    v27 = (__int64 *)gpducstulHead;
    for ( qword_1C01A0D30 = (__int64)KeGetCurrentThread(); gpducstulHead; v27 = (__int64 *)gpducstulHead )
    {
      gpducstulHead = v27[2];
      v54 = *v27;
      v27[2] = 0LL;
      if ( !*(_DWORD *)(v54 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
      DomainLockRef = GetDomainLockRef(8LL, v25);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v56, v55);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v27);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v58);
    }
    if ( (struct _KTHREAD *)qword_1C01A0D30 == KeGetCurrentThread() )
    {
      qword_1C01A0D30 = 0LL;
      ExReleasePushLockExclusiveEx(&gDomainTlLock, 0LL);
    }
    else
    {
      _InterlockedDecrement(&dword_1C01A0D38);
      ExReleasePushLockSharedEx(&gDomainTlLock, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( ThreadWin32Thread
      && (*(_DWORD *)(ThreadWin32Thread + 480) & 0x20000000) != 0
      && (v33 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 760LL), (*(_DWORD *)(v33 + 24) & 0x20) != 0) )
    {
      v5 = *(_QWORD *)(v33 + 16);
    }
    else
    {
      v28 = PsGetCurrentProcess();
      ProcessJob = PsGetProcessJob(v28);
      v30 = ProcessJob;
      if ( !ThreadWin32Thread && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v59 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v59[1] == v30 )
              break;
            v59 = (_QWORD *)*v59;
          }
          while ( v59 );
        }
        v5 = v59[2];
      }
      else if ( (int)IsReferenceWindowStationSupported() < 0
             || (v31 = PsGetCurrentProcess(),
                 ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v31),
                 (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v63, 1) < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          v5 = ModerncoreAtomTable();
      }
      else
      {
        v5 = *(_QWORD *)(v63 + 136);
      }
    }
    v34 = (unsigned int)gcSwitchInProgressWaiters;
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
      && (qword_1C019A1C0 & 0x200000010000000LL) != 0
      && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8 )
    {
      v60 = PsGetCurrentThreadWin32Thread(v33, 0x200000010000000LL, v34);
      if ( v60 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          McTemplateK0xqx(
            *(_QWORD *)(v60 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v62,
            LowPart - *(_DWORD *)(v60 + 8),
            0,
            *(_QWORD *)(v60 + 16));
      }
    }
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    *a3 = v5;
    return 0LL;
  }
  else
  {
    switch ( (int)a2 )
    {
      case 0:
        if ( (int)IsW32pProcessCalloutSupported() < 0 )
          goto LABEL_99;
        result = W32pProcessCallout(a3);
        break;
      case 1:
        if ( (int)IsW32pThreadCalloutSupported() < 0 )
          goto LABEL_99;
        result = W32pThreadCallout(*a3, *((unsigned int *)a3 + 2));
        break;
      case 3:
        if ( gbPowerCalloutsReady && gbVideoInitialized )
          return QueuePowerRequest(a3, 0LL);
        else
          return 3221225473LL;
      case 4:
        return UserPowerStateCallout(a3);
      case 5:
        return UserPowerInfoCallout(*(_DWORD *)a3, a2, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
      case 6:
        if ( (int)IsUserJobCalloutSupported() < 0 )
          goto LABEL_99;
        result = UserJobCallout(a3);
        break;
      case 8:
        if ( (int)IsDesktopOpenProcedureSupported() < 0 )
          goto LABEL_99;
        result = DesktopOpenProcedure(a3);
        break;
      case 9:
        if ( (int)IsOkayToCloseDesktopSupported() < 0 )
          goto LABEL_99;
        result = OkayToCloseDesktop(a3);
        break;
      case 10:
        if ( (int)IsUnmapDesktopSupported() < 0 )
          goto LABEL_99;
        result = UnmapDesktop(a3);
        break;
      case 11:
        if ( (int)IsFreeDesktopSupported() < 0 )
          goto LABEL_99;
        result = FreeDesktop(a3);
        break;
      case 12:
        if ( (int)IsOkayToCloseWindowStationSupported() < 0 )
          goto LABEL_99;
        result = OkayToCloseWindowStation(a3);
        break;
      case 13:
        if ( (int)IsDestroyWindowStationSupported() < 0 )
          goto LABEL_99;
        result = DestroyWindowStation(a3);
        break;
      case 14:
        if ( (int)IsFreeWindowStationSupported() < 0 )
          goto LABEL_99;
        result = FreeWindowStation(a3);
        break;
      case 15:
        if ( (int)IsParseWindowStationSupported() < 0 )
          goto LABEL_99;
        result = ParseWindowStation(a3);
        break;
      case 16:
        if ( (int)IsWindowStationOpenProcedureSupported() < 0 )
LABEL_99:
          result = 3221225659LL;
        else
          result = WindowStationOpenProcedure(a3);
        break;
      case 17:
        return 0LL;
      case 18:
        result = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        break;
      case 19:
        result = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        break;
      case 20:
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
                   *(_QWORD *)(a3[1] + 8),
                   a3);
        break;
      case 21:
        v35 = 0;
        v36 = *(_QWORD *)(*a3 + 8);
        if ( v36 )
          v35 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, a3);
        result = v35;
        break;
      case 22:
        ((void (__fastcall *)(__int64 *))qword_1C01A17E0)(a3);
        result = UserProcessFreezeCallout(a3);
        break;
      case 23:
        ((void (__fastcall *)(__int64 *))qword_1C01A17E8)(a3);
        result = UserProcessThawCallout(a3);
        break;
      case 24:
        ((void (__fastcall *)(__int64, __int64))qword_1C01A1CA0)(*a3, a3[1]);
        return 0LL;
      case 25:
        ((void (__fastcall *)(__int64 *))qword_1C01A1CA8)(a3);
        return 0LL;
      case 26:
        v47 = gpepCSRSS;
        if ( gpepCSRSS && !(unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) )
          v47 = 0LL;
        *a3 = (__int64)v47;
        return 0LL;
      case 27:
      case 28:
      case 29:
      case 30:
        result = RIMObjectManagerCallout((unsigned int)a2, a3);
        break;
      case 31:
        WakeRITForShutdown();
        return 0LL;
      case 32:
        v37 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((int)a2, a2, 0x1C0000000uLL);
        if ( v37 )
          v37[1] = KeQueryPerformanceCounter(0LL);
        v38 = 0LL;
        while ( 1 )
        {
          v39 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v39 )
            v38 = *v39;
          v48 = (PVOID)PsGetCurrentProcess();
          if ( v48 )
          {
            if ( v48 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v38 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v38 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v41, v40, v42);
        gptiCurrent = v38;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v64);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = i[2];
          v49 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v49 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43);
          v52 = GetDomainLockRef(8LL, v43);
          if ( v52 == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50);
          tagObjLock::UnLock((tagObjLock *)v52);
          HMUnlockObject(*i);
          tagObjLock::LockExclusive((struct _KTHREAD **)v52, v53);
        }
        tagObjLock::UnLock(v64);
        if ( a3 && a3 == g_pepDwm )
          vReleaseDwmHitTestWaiters();
        UserSessionSwitchLeaveCrit(v46);
        return 0LL;
      case 33:
      case 34:
      case 35:
      case 36:
        result = CoreMsgObjectCallout((unsigned int)a2, a3);
        break;
      case 37:
        result = UserProcessTimerDelayCallout(a3);
        break;
      case 38:
        result = UserProcessTimerStatisticsCallout(a3);
        break;
      default:
        MicrosoftTelemetryAssertTriggeredNoArgsKM((int)a2, a2);
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
