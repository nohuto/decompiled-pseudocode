/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x14087C8A4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018BED4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x14087C6D0 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
