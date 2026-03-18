/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14000630C
 * Callers:
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x1402E4D70 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1402E4E30 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
