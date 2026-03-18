/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C014C5A4
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C014E5F0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C014E080 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01522F0 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v17; // r8
  __int64 *v18; // r14
  unsigned int v19; // edx
  unsigned __int64 v20; // rbx
  tagObjLock *v22; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-40h] BYREF

  v5 = a4;
  v6 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23, 1);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  while ( 1 )
  {
    v18 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v13 = *v18;
    v18[2] = 0LL;
    if ( !*(_DWORD *)(v13 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v18);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v22);
  if ( a2 )
  {
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        if ( !*(_DWORD *)(gpKL + 116) )
        {
          v19 = *(_DWORD *)(a2 + 492);
          if ( *(_DWORD *)(gpKL + 104) != v19 || *(_DWORD *)(gpKL + 108) != *(_DWORD *)(a2 + 496) )
          {
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, v19, *(_DWORD *)(a2 + 496));
            *(_DWORD *)(gpKL + 104) = *(_DWORD *)(a2 + 492);
            *(_DWORD *)(gpKL + 108) = *(_DWORD *)(a2 + 496);
          }
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) == 0 && v6 )
    {
      v20 = v6 + v5;
      do
      {
        if ( v6 >= v20 )
          break;
        if ( a5 )
          ProcessKeyboardInjectedInputViaRim(v6, a2);
        else
          ProcessKeyboardInputWorker(v6, a2, 1LL);
        v6 += 12LL;
      }
      while ( v6 );
    }
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
