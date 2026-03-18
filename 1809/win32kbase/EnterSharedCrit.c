/*
 * XREFs of EnterSharedCrit @ 0x1C0028600
 * Callers:
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00FE790 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

struct tagTHREADINFO *__fastcall EnterSharedCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-98h] BYREF
  int v11; // [rsp+34h] [rbp-94h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v13; // [rsp+40h] [rbp-88h]
  GUID ActivityId; // [rsp+44h] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-48h] BYREF
  int *v17; // [rsp+90h] [rbp-38h]
  __int64 v18; // [rsp+98h] [rbp-30h]
  int *v19; // [rsp+A0h] [rbp-28h]
  __int64 v20; // [rsp+A8h] [rbp-20h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v13 = 0;
    v9 = PsGetCurrentThreadWin32Thread();
    v12 = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 24);
      if ( v10 > 0 || *(_DWORD *)(v12 + 48) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C01C7F10 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
          {
            TlgCreateWsz(&pDesc, L"WaitForCrit");
            v11 = v13;
            v19 = &v11;
            v17 = &v10;
            v18 = 4LL;
            v20 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D532, &ActivityId, 0LL, 5u, &pData);
          }
        }
      }
    }
  }
  else
  {
    v12 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
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
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v12);
  EtwTraceAcquiredSharedUserCrit();
  return v5;
}
