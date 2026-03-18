/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1400B387C
 * Callers:
 *     PopSetWatchdog @ 0x1400B35A0 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140301AA0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140301B60 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
