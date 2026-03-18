/*
 * XREFs of ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00EFC90 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00F05A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00F0740 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00F0910 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00F1030 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0149320 (InputExtensibilityCalloutGuard.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(
        InputExtensibilityCallout *this,
        __int64 a2,
        __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rbx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *v11; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v20; // r8
  __int64 *v21; // rdi
  int v22; // [rsp+38h] [rbp-39h] BYREF
  tagObjLock *v23; // [rsp+40h] [rbp-31h] BYREF
  __int128 v24; // [rsp+48h] [rbp-29h]
  _BYTE v25[32]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  int *v28; // [rsp+A8h] [rbp+37h]
  int v29; // [rsp+B0h] [rbp+3Fh]
  int v30; // [rsp+B4h] [rbp+43h]

  while ( *((_BYTE *)this + 8) )
  {
    ++*((_DWORD *)this + 3);
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3);
      v5 = CurrentThreadWin32Thread;
      if ( CurrentThreadWin32Thread )
      {
        v6 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
        v7 = *(_DWORD *)(v5 + 44) == 0;
        v22 = v6;
        if ( (!v7 || *(_DWORD *)(v5 + 48) || v6 > 0)
          && dword_1C01C7F10 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
        {
          TlgCreateWsz(&pDesc, L"LeaveCrit");
          v30 = 0;
          v28 = &v22;
          v29 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v5 + 28), 0LL, 4u, &pData);
        }
        *(_DWORD *)(v5 + 44) = 0;
        v24 = 0uLL;
        *(_OWORD *)(v5 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(*((PVOID *)this + 2), UserRequest, 0, 0, 0LL);
    v11 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
    if ( v11 )
      v11[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25, 1);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
    while ( 1 )
    {
      v21 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v16 = *v21;
      v21[2] = 0LL;
      if ( !*(_DWORD *)(v16 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v21);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v23);
  }
}
