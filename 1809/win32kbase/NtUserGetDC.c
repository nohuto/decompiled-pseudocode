/*
 * XREFs of NtUserGetDC @ 0x1C00281A0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0028720 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

HDC __fastcall NtUserGetDC(void *a1)
{
  int v2; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  PVOID CurrentProcess; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  HDC DCEx; // rdi
  void **v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v26; // [rsp+60h] [rbp-A8h]
  GUID ActivityId; // [rsp+64h] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+E8h] [rbp-20h] BYREF
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]

  v2 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v26 = 0;
    v16 = PsGetCurrentThreadWin32Thread();
    v25 = v16;
    if ( v16 )
    {
      v20 = *(_DWORD *)(v16 + 24);
      if ( v20 > 0 || *(_DWORD *)(v25 + 48) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C01C7F10 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
          {
            TlgCreateWsz(&pDesc, L"WaitForCrit");
            v21 = v26;
            v32 = &v21;
            v30 = &v20;
            v31 = 4LL;
            v33 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D532, &ActivityId, 0LL, 5u, &pData);
          }
        }
      }
    }
  }
  else
  {
    v25 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    _InterlockedAdd(&gcDITHitTestWaiters, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v25);
  EtwTraceAcquiredSharedUserCrit();
  if ( a1 )
  {
    v7 = ValidateHwndEx(a1, 1, 0);
    if ( !v7 )
    {
      DCEx = 0LL;
      goto LABEL_22;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 768LL)
                   + 24LL) & 1;
  else
    v8 = 0;
  if ( !v8 )
  {
LABEL_17:
    if ( v7 )
    {
LABEL_18:
      v9 = 0x10000LL;
      v10 = (_QWORD *)v7;
LABEL_19:
      DCEx = (HDC)GetDCEx(v10, 0LL, v9);
      goto LABEL_20;
    }
    goto LABEL_31;
  }
  if ( v7 )
    goto LABEL_18;
  v13 = *(void ***)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 24LL);
  if ( v13 )
    v14 = *v13;
  else
    v14 = 0LL;
  if ( !ValidateHwndEx(v14, 1, 0) )
  {
    v2 = 0;
    goto LABEL_17;
  }
LABEL_31:
  v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( v15 )
  {
    v9 = 3LL;
    v10 = *(_QWORD **)(*(_QWORD *)(v15 + 8) + 24LL);
    goto LABEL_19;
  }
  DCEx = 0LL;
LABEL_20:
  if ( !v2 )
  {
    GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    GreSelectVisRgnShared(DCEx);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  }
LABEL_22:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v17 = PsGetCurrentThreadWin32Thread();
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_DWORD *)(v17 + 24);
      v22 = v19;
      if ( (*(_DWORD *)(v18 + 44) || *(_DWORD *)(v18 + 48) || v19 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&v35, L"LeaveCrit");
        v36 = &v22;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v18 + 28), 0LL, 4u, &v34);
      }
      *(_DWORD *)(v18 + 44) = 0;
      v23 = 0LL;
      v24 = 0LL;
      *(_OWORD *)(v18 + 28) = 0u;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
