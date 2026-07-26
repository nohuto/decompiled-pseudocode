/*
 * XREFs of NdisSetPeriodicTimer @ 0x1C009C9E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0014ED0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetPeriodicTimer(PNDIS_TIMER NdisTimer, UINT MillisecondsPeriod)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((__int64)NdisTimer, MillisecondsPeriod);
  else
    KeSetTimerEx(
      &NdisTimer->Timer,
      (LARGE_INTEGER)(-10000LL * (int)MillisecondsPeriod),
      MillisecondsPeriod,
      &NdisTimer->Dpc);
}
