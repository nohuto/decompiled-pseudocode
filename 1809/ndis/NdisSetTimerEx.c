/*
 * XREFs of NdisSetTimerEx @ 0x1C00648F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0025EE0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimerEx(PNDIS_TIMER NdisTimer, UINT MillisecondsToDelay, PVOID FunctionContext)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  NdisTimer->Dpc.DeferredContext = FunctionContext;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((_LIST_ENTRY *)NdisTimer, MillisecondsToDelay);
  else
    KeSetTimer(&NdisTimer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &NdisTimer->Dpc);
}
