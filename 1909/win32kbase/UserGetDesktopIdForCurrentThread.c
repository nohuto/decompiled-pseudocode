/*
 * XREFs of UserGetDesktopIdForCurrentThread @ 0x1C008A470
 * Callers:
 *     NtDCompositionGetMaterialProperty @ 0x1C008A190 (NtDCompositionGetMaterialProperty.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall UserGetDesktopIdForCurrentThread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // rdi
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-9h] BYREF
  __int64 v17; // [rsp+38h] [rbp-1h] BYREF
  unsigned __int8 v18; // [rsp+40h] [rbp+7h]
  GUID ActivityId; // [rsp+44h] [rbp+Bh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+1Fh] BYREF
  int *v21; // [rsp+78h] [rbp+3Fh]
  __int64 v22; // [rsp+80h] [rbp+47h]

  v1 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v18 = 0;
    v15 = PsGetCurrentThreadWin32Thread(v2);
    v17 = v15;
    if ( v15 && (*(int *)(v15 + 24) > 0 || *(_DWORD *)(v17 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v16 = v18;
          v21 = &v16;
          v22 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v17 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
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
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v17);
  EtwTraceAcquiredSharedUserCrit();
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) )
  {
    v13 = *(__int64 ***)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL);
    v12 = *v13;
    v1 = **v13;
  }
  UserSessionSwitchLeaveCrit((__int64)v12, v11);
  return v1;
}
