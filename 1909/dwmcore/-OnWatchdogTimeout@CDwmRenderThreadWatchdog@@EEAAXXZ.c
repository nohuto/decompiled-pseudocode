/*
 * XREFs of ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x18018BF50
 * Callers:
 *     <none>
 * Callees:
 *     ??B_Atomic_int@std@@QEBAHXZ @ 0x18018BED8 (--B_Atomic_int@std@@QEBAHXZ.c)
 */

void __fastcall CDwmRenderThreadWatchdog::OnWatchdogTimeout(CDwmRenderThreadWatchdog *this)
{
  CDwmRenderThreadWatchdog *v1; // rdx
  volatile signed __int32 *v2; // rcx
  unsigned int v3; // eax

  if ( (unsigned int)std::_Atomic_int::operator int((unsigned int *)this + 10) )
    v3 = *((_DWORD *)v1 + 13);
  else
    v3 = *((_DWORD *)v1 + 12);
  _InterlockedExchangeAdd(v2, v3);
  CDwmRenderThreadWatchdog::SendTelemetry(v1);
}
