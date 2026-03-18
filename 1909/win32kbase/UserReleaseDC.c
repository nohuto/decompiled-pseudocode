/*
 * XREFs of UserReleaseDC @ 0x1C0089370
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v5; // rdi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  int v17; // [rsp+38h] [rbp-9h] BYREF
  __int64 v18; // [rsp+40h] [rbp-1h] BYREF
  unsigned __int8 v19; // [rsp+48h] [rbp+7h]
  GUID ActivityId; // [rsp+4Ch] [rbp+Bh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v22; // [rsp+80h] [rbp+3Fh]
  __int64 v23; // [rsp+88h] [rbp+47h]

  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v19 = 0;
    v16 = PsGetCurrentThreadWin32Thread(v3);
    v18 = v16;
    if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v18 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v17 = v19;
          v22 = &v17;
          v23 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v18 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
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
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v18);
  EtwTraceAcquiredSharedUserCrit();
  LOBYTE(v2) = (unsigned int)ReleaseCacheDC(a1, 0, v12) != 2;
  UserSessionSwitchLeaveCrit(v14, v13);
  return v2;
}
