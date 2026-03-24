/*
 * XREFs of PopSqmThermalHibernate @ 0x14087C8A4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018BEF4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x14087C6B0 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
