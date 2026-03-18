/*
 * XREFs of NtUserGetDC @ 0x1C0029560
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgn @ 0x1C00162B0 (GreSelectVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserGetDC(__int64 a1)
{
  int v2; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 DCEx; // rdi
  __int64 v15; // r8
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct HOBJ__ *RectRgnIndirect; // rbx
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  int v29; // [rsp+30h] [rbp-98h] BYREF
  __int128 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int8 v32; // [rsp+50h] [rbp-78h]
  GUID ActivityId; // [rsp+54h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-60h] BYREF
  int *v35; // [rsp+88h] [rbp-40h]
  __int64 v36; // [rsp+90h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v37; // [rsp+98h] [rbp-30h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v32 = 0;
    v20 = PsGetCurrentThreadWin32Thread();
    v31 = v20;
    if ( v20 && (*(int *)(v20 + 24) > 0 || *(_DWORD *)(v31 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v29 = v32;
          v35 = &v29;
          v36 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v31 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v31);
  EtwTraceAcquiredSharedUserCrit();
  if ( a1 )
  {
    v13 = (_QWORD *)ValidateHwndEx(a1, 1, 0);
    if ( !v13 )
    {
      DCEx = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 760LL) + 24LL) & 1) != 0 )
  {
    if ( !v13 )
    {
      v17 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                        + 24LL);
      if ( v17 )
        v18 = *v17;
      else
        v18 = 0LL;
      if ( !ValidateHwndEx(v18, 1, 0) )
        v2 = 0;
      goto LABEL_29;
    }
LABEL_16:
    DCEx = GetDCEx(v13, 0LL, 0x10000LL);
    goto LABEL_17;
  }
  if ( v13 )
    goto LABEL_16;
LABEL_29:
  v19 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
  if ( v19 )
    DCEx = GetDCEx(*(_QWORD **)(*(_QWORD *)(v19 + 8) + 24LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v2 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v22, v23);
    GreSelectVisRgn(DCEx, (__int64)RectRgnIndirect, 1u);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v24, v25);
  }
LABEL_17:
  v15 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v15);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v26 = PsGetCurrentThreadWin32Thread();
    v27 = v26;
    if ( v26 )
    {
      v28 = *(_DWORD *)(v26 + 24);
      if ( (*(_DWORD *)(v27 + 44) || *(_DWORD *)(v27 + 48) || v28 > 0)
        && dword_1C020FB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v27 + 28), 0LL, 2u, &v37);
      }
      *(_DWORD *)(v27 + 44) = 0;
      v30 = 0uLL;
      *(_OWORD *)(v27 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
