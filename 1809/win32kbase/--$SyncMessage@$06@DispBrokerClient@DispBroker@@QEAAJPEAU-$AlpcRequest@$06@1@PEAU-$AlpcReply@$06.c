/*
 * XREFs of ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C00E100C (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
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
 *     ??$InitMessage@U?$AlpcRequest@$06@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcRequest@$06@1@@Z @ 0x1C00E06DC (--$InitMessage@U-$AlpcRequest@$06@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU-$AlpcReque.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00E0F64 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<7>(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 *v22; // rdi
  _QWORD *v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+48h] [rbp-70h] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  tagObjLock *v27; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-58h] BYREF

  v6 = -1073741823;
  DispBroker::DispBrokerClient::ReferencePort(a1, &v24);
  v7 = v24;
  if ( v24 )
  {
    UserSessionSwitchLeaveCrit();
    DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcRequest<7>>(v8, a2);
    v25 = *(_QWORD *)(a1 + 24);
    v26 = 72LL;
    v6 = ZwAlpcSendWaitReceivePort(
           v7[1],
           0x20000LL,
           a2,
           0LL,
           a3,
           &v26,
           0LL,
           (unsigned __int64)&v25 & -(__int64)(v25 != 0));
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28, 1);
    v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v27);
    while ( 1 )
    {
      v22 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v17 = *v22;
      v22[2] = 0LL;
      if ( !*(_DWORD *)(v17 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v22);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v27);
  }
  DispBroker::DispBrokerClientReference::Assign((void **)&v24, 0LL);
  return v6;
}
