/*
 * XREFs of DrvGetCurrentDpiInfo @ 0x1C004FB04
 * Callers:
 *     NtGdiGetCurrentDpiInfo @ 0x1C004FA70 (NtGdiGetCurrentDpiInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C004FC2C (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserGetHDevFromMonitor @ 0x1C004FC90 (UserGetHDevFromMonitor.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 HDevFromMonitor; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int CurrentDpiInfoFromHDev; // ebx
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-19h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int8 v21; // [rsp+40h] [rbp-9h]
  GUID ActivityId; // [rsp+44h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+Fh] BYREF
  int *v24; // [rsp+78h] [rbp+2Fh]
  int v25; // [rsp+80h] [rbp+37h]
  int v26; // [rsp+84h] [rbp+3Bh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v21 = 0;
    v18 = PsGetCurrentThreadWin32Thread(v4);
    v20 = v18;
    if ( v18 && (*(int *)(v18 + 24) > 0 || *(_DWORD *)(v20 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v26 = 0;
          v19 = v21;
          v24 = &v19;
          v25 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v20 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v20);
  EtwTraceAcquiredSharedUserCrit();
  HDevFromMonitor = UserGetHDevFromMonitor(a1);
  if ( HDevFromMonitor )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(HDevFromMonitor, a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  UserSessionSwitchLeaveCrit(v15, v14);
  return CurrentDpiInfoFromHDev;
}
