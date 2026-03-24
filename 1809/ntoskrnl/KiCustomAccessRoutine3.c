/*
 * XREFs of KiCustomAccessRoutine3 @ 0x1401C7860
 * Callers:
 *     PopThermalZoneDpc @ 0x1401901D0 (PopThermalZoneDpc.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1401C7840 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomAccessRoutine3(unsigned int *a1)
{
  return KiCustomRecurseRoutine3(((unsigned __int8)a1 & 3u) + 1, a1);
}
