/*
 * XREFs of NtUserEnableTouchPad @ 0x1C00B5B60
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPISystemError @ 0x1C0013C10 (EtwTraceUIPISystemError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EnablePTPDevices @ 0x1C00AAA90 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  signed int v4; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // rdx
  __int64 *v20; // rsi
  __int64 v21; // rcx
  tagObjLock *v23; // [rsp+58h] [rbp+10h] BYREF
  char v24; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
  while ( 1 )
  {
    v20 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v15 = *v20;
    v20[2] = 0LL;
    if ( !*(_DWORD *)(v15 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    DomainLockRef = GetDomainLockRef(8LL, v13);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v20);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v19);
  }
  tagObjLock::UnLock(v23);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  v23 = (tagObjLock *)-4294955008LL;
  if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), -4294955008LL, 0) )
  {
    LOBYTE(v4) = v3 != 0;
    v4 = EnablePTPDevices(v4);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL, 13);
    UserSetLastError(5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
  UserSessionSwitchLeaveCrit(v21);
  return v4;
}
