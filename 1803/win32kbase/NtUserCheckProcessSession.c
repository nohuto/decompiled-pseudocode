/*
 * XREFs of NtUserCheckProcessSession @ 0x1C006C360
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     xxxDwmCheckProcessSession @ 0x1C006C480 (xxxDwmCheckProcessSession.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCheckProcessSession(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
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
  __int64 *v15; // rsi
  __int64 v16; // rcx
  PVOID v17; // rax
  ULONG v18; // ecx
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // rdx
  tagObjLock *v27; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0LL;
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
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v27);
  while ( 1 )
  {
    v15 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v22 = *v15;
    v15[2] = 0LL;
    if ( !*(_DWORD *)(v22 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    DomainLockRef = GetDomainLockRef(8LL, v13);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v15);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v26);
  }
  tagObjLock::UnLock(v27);
  v17 = (PVOID)PsGetCurrentProcess(v16);
  if ( v17 && v17 == g_pepDwm )
  {
    v21 = xxxDwmCheckProcessSession(v3);
    if ( v21 >= 0 )
    {
      v4 = 1LL;
      goto LABEL_16;
    }
    v18 = RtlNtStatusToDosError(v21);
  }
  else
  {
    v18 = 5;
  }
  UserSetLastError(v18);
LABEL_16:
  UserSessionSwitchLeaveCrit(v19);
  return v4;
}
