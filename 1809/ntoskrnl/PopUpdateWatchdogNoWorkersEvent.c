/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14000630C
 * Callers:
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x1402E4E70 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1402E4F30 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1400B8AA0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
