/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1408BA2A4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140195F40 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x1408BA0D0 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
