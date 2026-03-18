/*
 * XREFs of ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x18018D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDwmRenderThreadWatchdog::OnWatchdogTimeout(CDwmRenderThreadWatchdog *this)
{
  unsigned int v1; // eax

  if ( *((_DWORD *)this + 10) )
    v1 = *((_DWORD *)this + 13);
  else
    v1 = *((_DWORD *)this + 12);
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, v1);
  if ( *((_DWORD *)this + 10) >= *((_DWORD *)this + 11) )
    CDwmRenderThreadWatchdog::ReportDwmHangAndTerminate(this);
  else
    CDwmRenderThreadWatchdog::SendTelemetry(this);
}
