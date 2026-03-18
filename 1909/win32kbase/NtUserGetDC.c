/*
 * XREFs of NtUserGetDC @ 0x1C002A0F0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgn @ 0x1C0017C00 (GreSelectVisRgn.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0026630 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002AB70 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // [rsp+30h] [rbp-98h] BYREF
  __int128 v26; // [rsp+38h] [rbp-90h]
  __int64 v27; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int8 v28; // [rsp+50h] [rbp-78h]
  GUID ActivityId; // [rsp+54h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-60h] BYREF
  int *v31; // [rsp+88h] [rbp-40h]
  __int64 v32; // [rsp+90h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v33; // [rsp+98h] [rbp-30h] BYREF

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v28 = 0;
    v20 = PsGetCurrentThreadWin32Thread();
    v27 = v20;
    if ( v20 && (*(int *)(v20 + 24) > 0 || *(_DWORD *)(v27 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v25 = v28;
          v31 = &v25;
          v32 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v27 = 0LL;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v27);
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
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    GreSelectVisRgn(DCEx, (__int64)RectRgnIndirect, 1u);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
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
    v12 = (unsigned int)gdwInAtomicOperation;
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
    v22 = PsGetCurrentThreadWin32Thread();
    v23 = v22;
    if ( v22 )
    {
      v24 = *(_DWORD *)(v22 + 24);
      if ( (*(_DWORD *)(v23 + 44) || *(_DWORD *)(v23 + 48) || v24 > 0)
        && dword_1C020CB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14A1, (LPCGUID)(v23 + 28), 0LL, 2u, &v33);
      }
      *(_DWORD *)(v23 + 44) = 0;
      v26 = 0uLL;
      *(_OWORD *)(v23 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit(v12, v11, v15);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
