/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C008ABF0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0091EE4 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0152FE0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C008AD88 (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C008ADF0 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  int v4; // edx
  HANDLE v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rsi
  HANDLE v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // [rsp+28h] [rbp-70h]
  tagObjLock *v23; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v26[32]; // [rsp+60h] [rbp-38h] BYREF

  if ( this[343] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit();
      while ( 1 )
      {
        v5 = this[343];
        LOBYTE(v22) = 0;
        v23 = (tagObjLock *)-200000LL;
        v6 = ZwRemoveIoCompletionEx(v5, v25, 1LL, v24, &v23, v22);
        if ( v6 < 0 )
          break;
        if ( v6 == 258 )
          goto LABEL_6;
      }
      LODWORD(v22) = v6;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x15u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v22);
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26, 1);
      v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
      while ( 1 )
      {
        v15 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v17 = *v15;
        v15[2] = 0LL;
        if ( !*(_DWORD *)(v17 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v15);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v23);
    }
    v16 = this[344];
    if ( v16 )
    {
      ProtectHandle(v16, v4, 0LL, 0);
      ObCloseHandle(this[344], 1);
      this[344] = 0LL;
    }
    ZwClose(this[343]);
    this[343] = 0LL;
  }
}
