/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B5140
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     CleanupLogonProcess @ 0x1C00A8BA0 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B5364 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C00B5FC4 (ApiSetEditionBaseDriverUnloadUninitialize.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 Win32kNtUserCleanup(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  __int64 *v32; // rsi
  int v33; // [rsp+38h] [rbp-89h] BYREF
  int v34; // [rsp+3Ch] [rbp-85h] BYREF
  int v35; // [rsp+40h] [rbp-81h] BYREF
  __int64 v36; // [rsp+48h] [rbp-79h]
  unsigned __int8 v37; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v40; // [rsp+88h] [rbp-39h]
  __int64 v41; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+98h] [rbp-29h] BYREF
  int *v43; // [rsp+B8h] [rbp-9h]
  __int64 v44; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v45; // [rsp+C8h] [rbp+7h] BYREF
  int *v46; // [rsp+E8h] [rbp+27h]
  __int64 v47; // [rsp+F0h] [rbp+2Fh]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 15, 10, (__int64)&WPP_25a41ce831823187e450a784a1ab1b53_Traceguids);
  ApiSetEditionBaseDriverUnloadUninitialize();
  if ( gpresUser )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v37 = 1;
      v15 = PsGetCurrentThreadWin32Thread(v1);
      v36 = v15;
      if ( v15 && (*(int *)(v15 + 24) > 0 || *(_DWORD *)(v36 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v33 = v37;
            v40 = &v33;
            v41 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v36 = 0LL;
    }
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v4 )
        v3 = *v4;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9, v8) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v36 && (*(_DWORD *)(v36 + 48) || *(int *)(v36 + 24) > 0) )
    {
      *(_DWORD *)(v36 + 44) = 1;
      *(GUID *)(v36 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v34 = v37;
          v43 = &v34;
          v44 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v42);
          v16 = dword_1C020FB50;
        }
        if ( v16 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v35 = v37;
          v46 = &v35;
          v47 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v45);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v10, v11);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v32 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v27 = *v32;
        v32[2] = 0LL;
        if ( !*(_DWORD *)(v27 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v32);
        tagDomLock::LockExclusive(v30);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v13, v12);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( (int)IsCheckupHidLeakSupported() >= 0 )
    CheckupHidLeak();
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( (int)IsCleanupPlaySoundSupported() >= 0 )
    CleanupPlaySound();
  return 1LL;
}
