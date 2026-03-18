/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C017D090
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0180A00 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017D560 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int cData; // [rsp+20h] [rbp-C1h]
  int v43; // [rsp+30h] [rbp-B1h] BYREF
  int v44; // [rsp+34h] [rbp-ADh] BYREF
  int v45; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v46; // [rsp+40h] [rbp-A1h]
  __int64 v47; // [rsp+48h] [rbp-99h]
  unsigned __int8 v48; // [rsp+50h] [rbp-91h]
  GUID ActivityId; // [rsp+54h] [rbp-8Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-79h] BYREF
  int *v51; // [rsp+88h] [rbp-59h]
  int v52; // [rsp+90h] [rbp-51h]
  int v53; // [rsp+94h] [rbp-4Dh]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+98h] [rbp-49h] BYREF
  int *v55; // [rsp+B8h] [rbp-29h]
  int v56; // [rsp+C0h] [rbp-21h]
  int v57; // [rsp+C4h] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v58; // [rsp+C8h] [rbp-19h] BYREF
  int *v59; // [rsp+E8h] [rbp+7h]
  int v60; // [rsp+F0h] [rbp+Fh]
  int v61; // [rsp+F4h] [rbp+13h]

  v46 = a2;
  v7 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v47 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v53 = 0;
          v43 = v48;
          v51 = &v43;
          v52 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v47 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v12 )
      v11 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v11 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
  {
    *(_DWORD *)(v47 + 44) = 1;
    *(GUID *)(v47 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v57 = 0;
        v44 = v48;
        v55 = &v44;
        v56 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v54);
        v18 = dword_1C020FB50;
      }
      if ( v18 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v61 = 0;
        v45 = v48;
        v59 = &v45;
        v60 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v58);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v19, v21);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    v32 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      do
      {
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
        v33 = *v32;
        v32[2] = 0LL;
        if ( !*(_DWORD *)(v33 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
        v36 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31);
        if ( v36 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
        ExReleaseResourceAndLeaveCriticalRegion(*v36);
        HMUnlockObject(*v32);
        tagDomLock::LockExclusive(v36);
        v32 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
      v7 = v46;
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  LOBYTE(cData) = a5;
  v38 = CKeyboardProcessor::ProcessInputNoLock(v20, v7, a3, a4, cData);
  UserSessionSwitchLeaveCrit(v40, v39);
  return v38;
}
