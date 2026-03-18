/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C010C800
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C0073D6C (W32kEtwEnableCallback.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C002F724 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C008DF0C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     McTemplateK0qqqqq @ 0x1C011121C (McTemplateK0qqqqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1)
{
  __int64 v1; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  PERESOURCE *v28; // rdi
  __int64 v29; // r8
  __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // r15
  __int64 i; // rdi
  _QWORD *j; // r14
  int ThreadInfoFlags; // eax
  struct tagQ *v37; // rcx
  int v38; // r13d
  int v39; // r8d
  int v40; // [rsp+48h] [rbp-C0h] BYREF
  int v41; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE ThreadId; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v43[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  unsigned __int8 ActivityId_4; // [rsp+68h] [rbp-A0h]
  GUID ActivityId_8; // [rsp+6Ch] [rbp-9Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-88h] BYREF
  int *v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE *v51; // [rsp+D0h] [rbp-38h]
  __int64 v52; // [rsp+D8h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-28h] BYREF
  int *v54; // [rsp+100h] [rbp-8h]
  __int64 v55; // [rsp+108h] [rbp+0h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId_8.Data1 = 0LL;
  *(_QWORD *)ActivityId_8.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    ActivityId_4 = 1;
    v3 = PsGetCurrentThreadWin32Thread(v1);
    v44 = v3;
    if ( v3 && (*(int *)(v3 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId_8);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v41 = ActivityId_4;
          v48 = &v41;
          v49 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId_8, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v44 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
  {
    *(_DWORD *)(v44 + 44) = 1;
    *(GUID *)(v44 + 28) = ActivityId_8;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        LODWORD(ThreadId) = ActivityId_4;
        v51 = &ThreadId;
        v52 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId_8, 0LL, 3u, &v50);
        v11 = dword_1C020FB50;
      }
      if ( v11 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v40 = ActivityId_4;
        v54 = &v40;
        v55 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId_8, 0LL, 3u, &v53);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v12, v14);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v30 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v25 = *v30;
      v30[2] = 0LL;
      if ( !*(_DWORD *)(v25 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
      v28 = (PERESOURCE *)GetDomainLockRef(12LL, v22, v24);
      if ( v28 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29);
      ExReleaseResourceAndLeaveCriticalRegion(*v28);
      HMUnlockObject(*v30);
      tagDomLock::LockExclusive(v28);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C020F438 - 1) > 2u
    && (qword_1C020F420 & 0x8000000000040000uLL) != 0
    && (qword_1C020F428 & 0x8000000000040000uLL) == qword_1C020F428 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v13 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v13 >= 0xC8 && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq(
          v13,
          (unsigned int)&WaitCursorEvent,
          v14,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v31 = 0x8000000000080000uLL;
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C020F438 - 1) > 2u
    && (qword_1C020F420 & 0x8000000000080000uLL) != 0
    && (qword_1C020F428 & 0x8000000000080000uLL) == qword_1C020F428 )
  {
    v32 = grpWinStaList;
    v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v32 )
    {
      for ( i = *(_QWORD *)(v32 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = PsGetThreadId((PETHREAD)*(j - 92));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 92));
          v37 = (struct tagQ *)*(j - 39);
          v38 = *((_DWORD *)j + 108);
          v40 = ThreadInfoFlags;
          EtwpGetLastInputProcessTime(v37, v33, &v43[1], v43);
          LOBYTE(v13) = (_BYTE)Microsoft_Windows_Win32kEnableBits;
          if ( (char)Microsoft_Windows_Win32kEnableBits < 0 )
            McTemplateK0qqqqq(
              v33 - v38,
              (unsigned int)&ThreadInfoRundownEvent,
              v39,
              (_DWORD)ThreadId,
              v40,
              v38 != 0 ? v33 - v38 : 0,
              v43[1],
              v43[0]);
        }
      }
      v32 = *(_QWORD *)(v32 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v13, v31);
}
