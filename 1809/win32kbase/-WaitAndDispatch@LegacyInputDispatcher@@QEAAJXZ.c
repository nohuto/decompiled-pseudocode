/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C004A890
 * Callers:
 *     <none>
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
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C004AA00 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C004AA24 (-Dispatch@LegacyInputDispatcher@@QEBAJJ@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS v2; // eax
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  tagObjLock *v20; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[32]; // [rsp+48h] [rbp-30h] BYREF

  while ( 1 )
  {
    if ( NeedsUpdateKeyboardLEDs() )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21, 1);
      v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v21);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v20);
      while ( 1 )
      {
        v14 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v15 = *v14;
        v14[2] = 0LL;
        if ( !*(_DWORD *)(v15 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v14);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v20);
      if ( NeedsUpdateKeyboardLEDs() )
        CKeyboardSensor::UpdateKeyboardLEDs((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      UserSessionSwitchLeaveCrit();
    }
    v2 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v4 = v2;
    if ( v2 < 0 )
      break;
    v5 = *((unsigned int *)this + 13);
    if ( v2 >= (unsigned int)v5 )
      break;
    v6 = *((unsigned int *)this + 10);
    v7 = v6;
    if ( (unsigned int)v6 >= (unsigned int)v5 && (_DWORD)v6 != 64 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v3);
      v7 = *((_DWORD *)this + 10);
    }
    if ( v4 < v7 || v7 == 64 )
      break;
    LegacyInputDispatcher::Dispatch(this, v4);
  }
  return v4;
}
