/*
 * XREFs of VideoPortCallout @ 0x1C00E2830
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
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
 *     CreateKernelEvent @ 0x1C006C700 (CreateKernelEvent.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C00E19C4 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C00E4BD0 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *i; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  LARGE_INTEGER *v20; // rbx
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rbx
  __int64 v30; // r8
  int v31; // [rsp+48h] [rbp-9h] BYREF
  __int64 v32; // [rsp+50h] [rbp-1h] BYREF
  PVOID KernelEvent; // [rsp+58h] [rbp+7h]
  __int64 v34; // [rsp+60h] [rbp+Fh]
  PVOID Object[4]; // [rsp+68h] [rbp+17h] BYREF

  v34 = a1;
  v1 = a1;
  v32 = a1;
  v31 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v32 + 31) )
    {
      Object[0] = gpevtVideoInitialized;
      Object[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)Object, 1);
        v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)Object);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v7;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)Object);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = i[2];
          v12 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v12 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
          DomainLockRef = GetDomainLockRef(8);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*i);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        }
        tagObjLock::UnLock((tagObjLock *)Object[0]);
        v5 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v32, &v31);
        UserSessionSwitchLeaveCrit();
        if ( v5 < 0 )
        {
          if ( v31 )
          {
            v20 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18, v17, v19);
            if ( v20 )
              v20[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)Object, 1);
            v21 = EnterCritAvoidingDitHitTestHazard(0, 1);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)Object);
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v21;
            gbValidateHandleForIL = 1;
            CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)Object);
            v25 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = v25[2];
                v26 = *v25;
                v25[2] = 0LL;
                if ( !*(_DWORD *)(v26 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
                v29 = GetDomainLockRef(8);
                if ( v29 == &gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30);
                tagObjLock::UnLock((tagObjLock *)v29);
                HMUnlockObject(*v25);
                tagObjLock::LockExclusive((struct _KTHREAD **)v29);
                v25 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v1 = v34;
            }
            tagObjLock::UnLock((tagObjLock *)Object[0]);
            CSTRemove(4LL, &v32);
            UserSessionSwitchLeaveCrit();
          }
        }
        else
        {
          KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
          v5 = *(_DWORD *)(v1 + 24);
        }
      }
      else
      {
        v5 = -1073741816;
      }
    }
    else
    {
      v5 = -1073741823;
    }
    Win32FreePool((__int64)KernelEvent);
    *(_DWORD *)(v1 + 24) = v5;
  }
  else
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
  }
}
