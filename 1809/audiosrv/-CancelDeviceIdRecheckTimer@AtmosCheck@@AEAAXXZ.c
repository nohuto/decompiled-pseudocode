/*
 * XREFs of ?CancelDeviceIdRecheckTimer@AtmosCheck@@AEAAXXZ @ 0x18013802C
 * Callers:
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013C1EC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::CancelDeviceIdRecheckTimer(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  struct _TP_TIMER *v3; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v3 )
  {
    if ( IsThreadpoolTimerSet(v3) )
    {
      SetThreadpoolTimer(v3, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v3, 1);
    }
    CloseThreadpoolTimer(v3);
  }
}
