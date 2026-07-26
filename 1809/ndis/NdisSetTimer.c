/*
 * XREFs of NdisSetTimer @ 0x1C00154D0
 * Callers:
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     ndisMStartInitMode @ 0x1C00BCF2C (ndisMStartInitMode.c)
 * Callees:
 *     NdisMSetTimer @ 0x1C0025EE0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer(&Timer->Timer);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}
