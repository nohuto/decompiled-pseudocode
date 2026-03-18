/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C0112910
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     PtiFromThreadId @ 0x1C007B720 (PtiFromThreadId.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0094DC0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  CInputThread *v13; // rsi
  unsigned int CurrentThreadId; // eax
  int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  int v23; // [rsp+38h] [rbp-19h] BYREF
  __int64 v24; // [rsp+40h] [rbp-11h] BYREF
  unsigned __int8 v25; // [rsp+48h] [rbp-9h]
  GUID ActivityId; // [rsp+4Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+Fh] BYREF
  int *v28; // [rsp+80h] [rbp+2Fh]
  __int64 v29; // [rsp+88h] [rbp+37h]

  v1 = a1;
  v2 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v25 = 0;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v24 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v24 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v23 = v25;
          v28 = &v23;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v24 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v24);
  EtwTraceAcquiredSharedUserCrit();
  v13 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v13, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v15 = *((_DWORD *)v13 + 10);
  v16 = CurrentThreadId;
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 == v15 )
  {
    v21 = (struct tagTHREADINFO *)PtiFromThreadId(v1);
    if ( v21 )
    {
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v21, 0);
      v2 = 1LL;
      goto LABEL_27;
    }
    v18 = 87LL;
  }
  else
  {
    v18 = 5LL;
  }
  UserSetLastError(v18, v17);
LABEL_27:
  UserSessionSwitchLeaveCrit(v20, v19);
  return v2;
}
