/*
 * XREFs of NdisSetTimer @ 0x1C001CC60
 * Callers:
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     ndisMStartInitMode @ 0x1C010B520 (ndisMStartInitMode.c)
 * Callees:
 *     NdisMSetTimer @ 0x1C0014ED0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((__int64)Timer, MillisecondsToDelay);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}
