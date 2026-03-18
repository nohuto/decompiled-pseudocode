/*
 * XREFs of ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0148CD0
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004E244 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
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
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C0094E2C (ApiSetEditionInputExtensibilityCallout.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0148EDC (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C014901C (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithDeviceLock(
        InputExtensibilityCallout *this,
        struct DEVICEINFO *a2,
        struct _CLIENT_DEVICE_NOTIFICATION *a3)
{
  CInputThread *v6; // rdi
  bool v7; // bl
  void *v8; // rbp
  bool v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 *v23; // rdi
  tagObjLock *v24; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-50h] BYREF

  if ( *((_DWORD *)a3 + 1) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expected that device being passed only for PNP_NOTIFICATION");
  v6 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v7 = CInputThread::_CalledOnInputThread(v6);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    KeBugCheck(0x164u);
  v8 = (void *)*((_QWORD *)a2 + 4);
  v9 = *((_DWORD *)a3 + 1) == 0;
  if ( InputExtensibilityCallout::PrepareForUserModeCallout(this, (struct RawInputManagerDeviceObject *)v8, v9) )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, (__int64)a3);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v10, v12);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25, 1);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
    while ( 1 )
    {
      v23 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v18 = *v23;
      v23[2] = 0LL;
      if ( !*(_DWORD *)(v18 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v23);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v24);
    InputExtensibilityCallout::UserModeCalloutCompleted(this, v8, v9);
  }
}
