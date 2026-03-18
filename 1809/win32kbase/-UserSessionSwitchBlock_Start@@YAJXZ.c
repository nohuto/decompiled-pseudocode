/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C00965B0 (UserPowerStateCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0097530 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00A3990 (PowerOffMonitor.c)
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
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rdi
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v17; // r8
  tagObjLock *v18; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-30h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v4 = IsResourceAcquiredExclusiveLite;
  if ( IsResourceAcquiredExclusiveLite )
  {
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19, 1);
    v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v18);
    while ( 1 )
    {
      v10 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v13 = *v10;
      v10[2] = 0LL;
      if ( !*(_DWORD *)(v13 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v17);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v10);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v18);
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
    goto LABEL_12;
  }
  if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2)
    && (unsigned int)RtlGetActiveConsoleId() == gSessionId
    && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  v11 = -1073086428;
LABEL_13:
  if ( !v4 )
    UserSessionSwitchLeaveCrit();
  return v11;
}
