/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C0070AD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     InternalVkKeyScanEx @ 0x1C0070C40 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0071450 (HKLtoPKL.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v5; // si
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int16 v19; // bx
  __int64 v21; // rax
  int v22; // [rsp+30h] [rbp-19h] BYREF
  __int64 v23; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int8 v24; // [rsp+40h] [rbp-9h]
  GUID ActivityId; // [rsp+44h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+Fh] BYREF
  int *v27; // [rsp+78h] [rbp+2Fh]
  int v28; // [rsp+80h] [rbp+37h]
  int v29; // [rsp+84h] [rbp+3Bh]

  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v24 = 0;
    v21 = PsGetCurrentThreadWin32Thread(v6);
    v23 = v21;
    if ( v21 && (*(int *)(v21 + 24) > 0 || *(_DWORD *)(v23 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v29 = 0;
          v22 = v24;
          v27 = &v22;
          v28 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v23 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
  EtwTraceAcquiredSharedUserCrit();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 )
    v18 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v18 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( v18 )
    v19 = InternalVkKeyScanEx(v5, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 32LL));
  else
    v19 = -1;
  UserSessionSwitchLeaveCrit(v17, v16);
  return v19;
}
