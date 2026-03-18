/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C00F1030
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01490D0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v13; // r8
  __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 CurrentProcessWin32Process; // rax
  PVOID v18; // rdi
  __int64 v19; // rcx
  char *v20; // rcx
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23, 1);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&Object);
  while ( 1 )
  {
    v14 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v9 = *v14;
    v14[2] = 0LL;
    if ( !*(_DWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v14);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock((tagObjLock *)Object);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v16 = 0;
    UserSetLastError(6LL);
  }
  else
  {
    v16 = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    v18 = Object;
    v19 = *(_QWORD *)(CurrentProcessWin32Process + 896);
    if ( !v19 )
      goto LABEL_19;
    v20 = *(char **)(v19 + 96);
    if ( !v20 )
      goto LABEL_19;
    Object = 0LL;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, &Object) < 0 )
      goto LABEL_19;
    if ( v18 == Object )
    {
      v16 = 0;
      UserSetLastError(6LL);
    }
    ObfDereferenceObject(Object);
    if ( v16 == 1 )
LABEL_19:
      RIMIDERemoveInjectionDevice(v18);
    ObfDereferenceObject(v18);
  }
  UserSessionSwitchLeaveCrit();
  return v16;
}
