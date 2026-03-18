/*
 * XREFs of EnterSharedCrit @ 0x1C0059A90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 */

struct tagTHREADINFO *__fastcall EnterSharedCrit(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v14; // r8d
  LONGLONG v15; // rdi
  __int64 QuadPart; // rbp
  int v18; // ecx

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( v4
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v3 && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    QuadPart = PerformanceCounter.QuadPart;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
    {
      v18 = (unsigned __int8)byte_1C019A1D8;
      if ( (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
        && (qword_1C019A1C0 & 0x200000010000000LL) != 0
        && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8
        && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v18) = byte_1C019A1D8 - 1;
        McTemplateK0xqx(v18, (unsigned int)&AcquiredSharedUserCritEvent, v14, v15, 0, gullUserCritAcquireToken);
      }
    }
    if ( v15 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v14,
          v15,
          1000000 * v15 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, QuadPart);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  return v6;
}
