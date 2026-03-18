/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1400F0028
 * Callers:
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140301550 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140301610 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
