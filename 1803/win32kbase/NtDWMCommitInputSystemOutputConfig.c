/*
 * XREFs of NtDWMCommitInputSystemOutputConfig @ 0x1C00B3180
 * Callers:
 *     <none>
 * Callees:
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
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C0131C18 (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtDWMCommitInputSystemOutputConfig(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rsi
  __int64 v20; // rcx
  PVOID v21; // rax
  CInputConfig *v22; // rcx
  NTSTATUS v23; // eax
  ULONG v24; // ecx
  __int64 v25; // rcx
  tagObjLock *v27; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v27);
  while ( 1 )
  {
    v19 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v14 = *v19;
    v19[2] = 0LL;
    if ( !*(_DWORD *)(v14 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    DomainLockRef = GetDomainLockRef(8LL, v12);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v19);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v18);
  }
  tagObjLock::UnLock(v27);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
  v21 = (PVOID)PsGetCurrentProcess(v20);
  if ( !v21 || v21 != g_pepDwm )
  {
    v24 = 5;
    goto LABEL_26;
  }
  v23 = CInputConfig::CommitConfiguration(v22);
  if ( v23 < 0 )
  {
    v24 = RtlNtStatusToDosError(v23);
LABEL_26:
    UserSetLastError(v24);
    goto LABEL_27;
  }
  v3 = 1LL;
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
  UserSessionSwitchLeaveCrit(v25);
  return v3;
}
