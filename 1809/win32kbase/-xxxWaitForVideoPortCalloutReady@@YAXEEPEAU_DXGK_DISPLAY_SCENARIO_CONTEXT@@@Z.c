/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E23AC
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
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
 *     McTemplateK0tt @ 0x1C00EB4AC (McTemplateK0tt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(
        struct _MCGEN_TRACE_CONTEXT *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // bp
  char v5; // si
  ULONG v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 *v20; // rdi
  tagObjLock *v21; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v5 = (char)a1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( gfMonitorPowerInProgress )
      {
        v6 = 1;
        Object[0] = gpevtMonitorPowerWaiter;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = (struct _MCGEN_TRACE_CONTEXT *)v6++;
        Object[(_QWORD)a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23, 1);
      v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v23);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
      while ( 1 )
      {
        v20 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v15 = *v20;
        v20[2] = 0LL;
        if ( !*(_DWORD *)(v15 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v20);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v21);
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0(a1, &StopWaitForVideoPortCalloutReady, (const GUID *)&Context.Flags);
}
