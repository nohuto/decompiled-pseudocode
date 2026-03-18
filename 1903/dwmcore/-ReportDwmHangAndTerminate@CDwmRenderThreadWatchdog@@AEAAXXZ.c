/*
 * XREFs of ?ReportDwmHangAndTerminate@CDwmRenderThreadWatchdog@@AEAAXXZ @ 0x18018D64C
 * Callers:
 *     ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x18018D620 (-OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800AC2A4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDwmRenderThreadWatchdog::ReportDwmHangAndTerminate(CDwmRenderThreadWatchdog *this)
{
  DWORD CurrentProcessId; // eax
  void *v3; // rcx
  DWORD ThreadId; // eax
  unsigned int v5; // eax
  signed int v6; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v8; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter((LARGE_INTEGER *)this + 7);
  if ( !IsDebuggerPresent() )
  {
    SuspendThread(*((HANDLE *)this + 4));
    CurrentProcessId = GetCurrentProcessId();
    v3 = (void *)*((_QWORD *)this + 4);
    v8 = CurrentProcessId;
    ThreadId = GetThreadId(v3);
    v5 = ReportCoreHang(&v8, 1LL, ThreadId, 4099LL);
    v6 = wil::details::NtStatusToHr((wil::details *)v5);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
  }
}
