/*
 * XREFs of UserEnterUserCritSecShared @ 0x1C002C760
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 UserEnterUserCritSecShared()
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  struct tagTHREADINFO **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  PVOID CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1h] BYREF
  unsigned __int8 v12; // [rsp+40h] [rbp+7h]
  GUID ActivityId; // [rsp+44h] [rbp+Bh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+1Fh] BYREF
  int *v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+80h] [rbp+47h]
  int v17; // [rsp+84h] [rbp+4Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v12 = 0;
    v9 = PsGetCurrentThreadWin32Thread();
    v11 = v9;
    if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v11 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v17 = 0;
          v10 = v12;
          v15 = &v10;
          v16 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v11 = 0LL;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v2 )
      v1 = *v2;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v3);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v7, v6) == gpepCSRSS && v1 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v1 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v11);
  return EtwTraceAcquiredSharedUserCrit();
}
