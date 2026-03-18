/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C01190C0
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0117010 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0029EDC (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002C014 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C002C14C (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00595E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1C00776F0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v13; // r8
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 CurrentProcessWin32Process; // rax
  tagDomLock *v19; // rbx
  __int64 v20; // rcx
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  tagDomLock *v27; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v28[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28, 1);
  v3 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v3;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(
      (PERESOURCE **)&v27,
      v4,
      v5);
    while ( 1 )
    {
      v14 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v9 = *v14;
      v14[2] = 0LL;
      if ( !*(_DWORD *)(v9 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v6, v8);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
      tagDomLock::UnLockExclusive(DomainLockRef);
      HMUnlockObject(*v14);
      tagDomLock::LockExclusive(DomainLockRef);
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v27);
  }
  v27 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)&v27) < 0 )
  {
    v17 = 0;
    UserSetLastError(6LL, v15);
  }
  else
  {
    v17 = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    v19 = v27;
    v20 = *(_QWORD *)(CurrentProcessWin32Process + 888);
    if ( !v20 )
      goto LABEL_19;
    v21 = *(char **)(v20 + 96);
    if ( !v21 )
      goto LABEL_19;
    v27 = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v21, 3u, 1, (PVOID *)&v27) < 0 )
      goto LABEL_19;
    if ( v19 == v27 )
    {
      v17 = 0;
      UserSetLastError(6LL, v22);
    }
    CompositionObject::Release(v27);
    if ( v17 == 1 )
    {
LABEL_19:
      v23 = *((_QWORD *)v19 + 53);
      RIMLockExclusive(v23 + 104);
      if ( (*((_DWORD *)v19 + 72) & 4) == 0 )
        RIMIDERemoveInjectionDevice(v19);
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v23 + 104));
    }
    CompositionObject::Release(v19);
  }
  UserSessionSwitchLeaveCrit(v25, v24);
  return v17;
}
