/*
 * XREFs of KiCustomAccessRoutine3 @ 0x1401CE9B0
 * Callers:
 *     PopThermalZoneDpc @ 0x140171560 (PopThermalZoneDpc.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1401CE990 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomAccessRoutine3(unsigned int *a1)
{
  return KiCustomRecurseRoutine3(((unsigned __int8)a1 & 3u) + 1, a1);
}
