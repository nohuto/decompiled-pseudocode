/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C0116580
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetSystemDpiForProcess(char *Handle)
{
  char *v1; // r14
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rax
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *v30; // rdi
  __int64 v31; // r8
  PVOID v32; // rbx
  NTSTATUS v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edi
  __int64 v38; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  char *v44; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v47; // [rsp+58h] [rbp-A8h]
  GUID ActivityId; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+A0h] [rbp-60h] BYREF
  int *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+D0h] [rbp-30h] BYREF
  int *v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]

  v1 = Handle;
  v44 = Handle;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v4 = PsGetCurrentThreadWin32Thread(v2);
    v46 = v4;
    if ( v4 && (*(int *)(v4 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v52 = 0;
          v41 = v47;
          v50 = &v41;
          v51 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v46 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v46 && (*(_DWORD *)(v46 + 48) || *(int *)(v46 + 24) > 0) )
  {
    *(_DWORD *)(v46 + 44) = 1;
    *(GUID *)(v46 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v56 = 0;
        v42 = v47;
        v54 = &v42;
        v55 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v53);
        v12 = dword_1C020CB50;
      }
      if ( v12 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v60 = 0;
        v43 = v47;
        v58 = &v43;
        v59 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v57);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v13, v15);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v26 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v26[2];
        v27 = *v26;
        v26[2] = 0LL;
        if ( !*(_DWORD *)(v27 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
        v30 = (PERESOURCE *)GetDomainLockRef(12LL, v23, v25);
        if ( v30 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31);
        ExReleaseResourceAndLeaveCriticalRegion(*v30);
        HMUnlockObject(*v26);
        tagDomLock::LockExclusive(v30);
        v26 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v1 = v44;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  v32 = 0LL;
  if ( (unsigned __int64)(v1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  }
  else
  {
    v33 = ObReferenceObjectByHandle(v1, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v32 = Object;
    if ( v33 < 0 )
    {
      UserSetLastError(87LL, v34);
      v37 = 0;
      goto LABEL_57;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v38 = 87LL;
      goto LABEL_54;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v32);
  }
  if ( CurrentProcessWin32Process )
  {
    v37 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
    goto LABEL_55;
  }
  v38 = 5023LL;
LABEL_54:
  UserSetLastError(v38, v35);
  v37 = 0;
LABEL_55:
  if ( v32 )
    ObfDereferenceObject(v32);
LABEL_57:
  UserSessionSwitchLeaveCrit(v36, v35);
  return v37;
}
