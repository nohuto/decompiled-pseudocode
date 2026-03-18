/*
 * XREFs of EnterCrit @ 0x1C00287D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     McTemplateK0xqx @ 0x1C00EB610 (McTemplateK0xqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  __int64 v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v10; // r8d
  LONGLONG v11; // rdi
  void *QuadPart; // rbp
  bool v13; // zf
  __int64 DomainLockRef; // rbx
  _QWORD *i; // r14
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 *v20; // rdi
  int v21; // [rsp+30h] [rbp-A8h] BYREF
  int v22; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int8 v24; // [rsp+40h] [rbp-98h]
  GUID ActivityId; // [rsp+44h] [rbp-94h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-58h] BYREF
  int *v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+98h] [rbp-40h]
  int *v30; // [rsp+A0h] [rbp-38h]
  __int64 v31; // [rsp+A8h] [rbp-30h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v24 = 1;
    v17 = PsGetCurrentThreadWin32Thread();
    v23 = v17;
    if ( v17 )
    {
      v21 = *(_DWORD *)(v17 + 24);
      if ( v21 > 0 || *(_DWORD *)(v23 + 48) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C01C7F10 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
          {
            TlgCreateWsz(&pDesc, L"WaitForCrit");
            v22 = v24;
            v30 = &v22;
            v28 = &v21;
            v29 = 4LL;
            v31 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D532, &ActivityId, 0LL, 5u, &pData);
          }
        }
      }
    }
  }
  else
  {
    v23 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && a2 && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
  v8 = PsGetCurrentThreadWin32Thread();
  if ( v8 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = PerformanceCounter.QuadPart - *(_QWORD *)(v8 + 8);
    QuadPart = (void *)PerformanceCounter.QuadPart;
    v13 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v8 + 8) = PerformanceCounter;
    if ( !v13 )
    {
      v18 = (unsigned __int8)byte_1C01C3328;
      if ( (unsigned __int8)(byte_1C01C3328 - 1) > 2u
        && (qword_1C01C3310 & 0x200000010000000LL) != 0
        && (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318
        && SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
      {
        LOBYTE(v18) = byte_1C01C3328 - 1;
        McTemplateK0xqx(v18, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v11, 0, gullUserCritAcquireToken);
      }
    }
    if ( v11 >= *((__int64 *)&WPP_MAIN_CB.Reserved + 1)
      && (signed __int64)((__int64)QuadPart - (unsigned __int64)WPP_MAIN_CB.Reserved) >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v10,
          v11,
          1000000 * v11 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      WPP_MAIN_CB.Reserved = QuadPart;
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  DomainLockRef = GetDomainLockRef(8LL);
  if ( (__int64 *)DomainLockRef == &gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(struct _KTHREAD **)(DomainLockRef + 8) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(DomainLockRef, 0LL);
  *(_QWORD *)(DomainLockRef + 8) = KeGetCurrentThread();
  for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v19 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v19 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v20 = (__int64 *)GetDomainLockRef(8LL);
    if ( v20 == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    tagObjLock::UnLock((tagObjLock *)v20);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((tagObjLock *)v20);
  }
  if ( *(struct _KTHREAD **)(DomainLockRef + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(DomainLockRef + 8) = 0LL;
    ExReleasePushLockExclusiveEx(DomainLockRef, 0LL);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(DomainLockRef + 16));
    ExReleasePushLockSharedEx(DomainLockRef, 0LL);
  }
  KeLeaveCriticalRegion();
  return v5;
}
