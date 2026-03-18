/*
 * XREFs of NtUserEnableTouchPad @ 0x1C00EE7F0
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
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C003B630 (EtwTraceUIPISystemError.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     EnablePTPDevices @ 0x1C00E51B0 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  signed int v4; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v14; // r8
  __int64 *v15; // rsi
  tagObjLock *v17; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v18[8]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19, 1);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v17);
  while ( 1 )
  {
    v15 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v10 = *v15;
    v15[2] = 0LL;
    if ( !*(_DWORD *)(v10 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v15);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v17);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v17 = (tagObjLock *)0xFFFFFFFF00002000LL;
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), 0xFFFFFFFF00002000uLL, 0) )
  {
    LOBYTE(v4) = v3 != 0;
    v4 = EnablePTPDevices(v4);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    UserSetLastError(5LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit();
  return v4;
}
