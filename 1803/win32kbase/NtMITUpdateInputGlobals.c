/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C00B5350
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
 *     UpconvertTime @ 0x1C0068DB0 (UpconvertTime.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int16 v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rdi
  CInputThread *v26; // rdi
  bool v27; // bl
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  tagObjLock *v31; // [rsp+30h] [rbp-28h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17);
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
  while ( 1 )
  {
    v25 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v20 = *v25;
    v25[2] = 0LL;
    if ( !*(_DWORD *)(v20 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    DomainLockRef = GetDomainLockRef(8LL, v18);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v25);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v24);
  }
  tagObjLock::UnLock(v31);
  v26 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v26, 0LL);
  v27 = CInputThread::_CalledOnInputThread(v26);
  ExReleasePushLockSharedEx(v26, 0LL);
  KeLeaveCriticalRegion();
  if ( v27 )
  {
    v29 = UpconvertTime(v8);
    CInputGlobals::UpdateInputGlobals(gpInputGlobals, v29, v7, v6, a4, a5);
    v9 = 1;
  }
  UserSessionSwitchLeaveCrit(v28);
  return v9;
}
