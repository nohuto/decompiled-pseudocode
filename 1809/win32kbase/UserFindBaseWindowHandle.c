/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C00F3FDC
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0072F88 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
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
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     LockProcessByClientId @ 0x1C007BB68 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     HMFindEntry @ 0x1C00EB920 (HMFindEntry.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(__int64 a1, int *a2, __int64 a3)
{
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v16; // r8
  __int64 *v17; // rsi
  __int64 ProcessWin32Process; // rax
  char *v19; // rbx
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  tagObjLock *v22; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-58h] BYREF

  v5 = WPP_GLOBAL_Control;
  v6 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x12u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23, 1);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  while ( 1 )
  {
    v17 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v12 = *v17;
    v17[2] = 0LL;
    if ( !*(_DWORD *)(v12 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v17);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v22);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  if ( (int)LockProcessByClientId(*a2, &Object) < 0 )
  {
    WPP_RECORDER_SF_q(gBaseLog, 2u, 0x10u, 0x14u, (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids, *a2);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&gHmLock, 0LL);
    v23[0] = a1;
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v23[2] = 0LL;
    v23[1] = ProcessWin32Process;
    v19 = HMFindEntry((__int64)v23, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    ObfDereferenceObject(Object);
    if ( v19 )
    {
      v6 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v19 - (_BYTE *)qword_1C01CBA58) >> 5));
      ExReleasePushLockSharedEx(&gHmLock, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qq(gBaseLog, 5u, 0x10u, 0x13u, (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids, a1, *a2);
    ExReleasePushLockSharedEx(&gHmLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x15u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
LABEL_21:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v6;
}
