/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1408B9B74
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1408B99A0 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
