/*
 * XREFs of DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00442A0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00420B0 (GreLockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0045230 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

struct PDEV *__fastcall DxgkEngAcquireWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
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
  int v13; // edx
  __int64 v14; // r8
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *result; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // [rsp+38h] [rbp-19h] BYREF
  struct PDEV *v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int8 v24; // [rsp+50h] [rbp-1h]
  GUID ActivityId; // [rsp+54h] [rbp+3h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  int *v27; // [rsp+88h] [rbp+37h]
  int v28; // [rsp+90h] [rbp+3Fh]
  int v29; // [rsp+94h] [rbp+43h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v24 = 0;
    v20 = PsGetCurrentThreadWin32Thread(v4);
    v23 = v20;
    if ( v20 && (*(int *)(v20 + 24) > 0 || *(_DWORD *)(v23 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v29 = 0;
          v21 = v24;
          v27 = &v21;
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
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v23);
  EtwTraceAcquiredSharedUserCrit();
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v17 )
  {
    result = hdevEnumerate(i, v13, v14);
    v17 = (__int64)result;
    if ( !result )
      break;
    v22 = result;
    v18 = *((_QWORD *)result + 322);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v17 + 40);
      if ( (v19 & 0x400) == 0 && (v19 & 0x20000) == 0 && *(_QWORD *)(v18 + 240) == a1 && *(_DWORD *)(v18 + 256) < a2 )
      {
        GreLockDisplayDevice(v17);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v22,
          (struct _SURFOBJ *)((*(_QWORD *)(v17 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v17 + 2552) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
  return result;
}
