/*
 * XREFs of ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@G@Z @ 0x1C00E09C8
 * Callers:
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C00E1164 (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
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
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00951B0 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??$InitMessage@U?$AlpcRequest@$07@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcRequest@$07@1@@Z @ 0x1C00E077C (--$InitMessage@U-$AlpcRequest@$07@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcReque.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<8>(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 *v24; // rdi
  _QWORD *v26; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  tagObjLock *v29; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v30[32]; // [rsp+60h] [rbp-58h] BYREF

  v8 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, &v26);
  v9 = v26;
  if ( v26 )
  {
    UserSessionSwitchLeaveCrit();
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcRequest<8>>(v10, (_DWORD *)a2);
    *(_WORD *)a2 += a4;
    *(_WORD *)(a2 + 2) += a4;
    v27 = *(_QWORD *)(a1 + 24);
    v28 = 72LL;
    v8 = ZwAlpcSendWaitReceivePort(
           v9[1],
           0x20000LL,
           a2,
           0LL,
           a3,
           &v28,
           0LL,
           (unsigned __int64)&v27 & -(__int64)(v27 != 0));
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30, 1);
    v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
    while ( 1 )
    {
      v24 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v19 = *v24;
      v24[2] = 0LL;
      if ( !*(_DWORD *)(v19 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v24);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v29);
  }
  DispBroker::DispBrokerClientReference::Assign((void **)&v26, 0LL);
  return v8;
}
