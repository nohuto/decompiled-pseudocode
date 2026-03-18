/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1C0065F90
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ApiSetInternalSetCursorPos @ 0x1C0140DD8 (ApiSetInternalSetCursorPos.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // r14d
  __int64 v5; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  CInputThread *v17; // rdi
  bool v18; // bl
  __int64 v19; // rcx
  char v20; // bl
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 v28; // rax
  tagObjLock *v29; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v12, v11, v13);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
  while ( 1 )
  {
    v16 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v22 = *v16;
    v16[2] = 0LL;
    if ( !*(_DWORD *)(v22 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    DomainLockRef = GetDomainLockRef(8LL, v14);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v16);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v26);
  }
  tagObjLock::UnLock(v29);
  v17 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v17, 0LL);
  v18 = CInputThread::_CalledOnInputThread(v17);
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
    goto LABEL_26;
  if ( v3 )
  {
    if ( !v4 || (v3 & 0xFFFFFFFC) != 0 || *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v27 = 87;
      goto LABEL_28;
    }
    if ( gptiForeground && v4 == ((unsigned int)PsGetThreadProcessId(*(PETHREAD *)gptiForeground) & 0xFFFFFFFC) )
    {
      if ( (v3 & 2) != 0 )
        *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = v3;
      InputDelegation::CInputDelegationInfo::gInstance = v4;
      goto LABEL_15;
    }
LABEL_26:
    v27 = 5;
LABEL_28:
    UserSetLastError(v27);
    goto LABEL_16;
  }
  v20 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
  if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
  {
    v28 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
    v19 = 0LL;
    InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
    if ( (v20 & 2) != 0 )
      ApiSetInternalSetCursorPos((unsigned int)v28, HIDWORD(v28), 1LL);
    if ( (v20 & 1) != 0 )
      *(_DWORD *)(gpqForeground + 388) |= 1u;
  }
LABEL_15:
  v5 = 1LL;
LABEL_16:
  UserSessionSwitchLeaveCrit(v19);
  return v5;
}
