/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140142794
 * Callers:
 *     PopThermalSxEntry @ 0x140142514 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018BED4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402DC234 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402DC284 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1402E2898 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14041714C;
  result = 0LL;
  byte_14041714C = 0;
  if ( byte_14041714D )
  {
    byte_14041714D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140417150) / 0x989680uLL, a3);
  }
  return result;
}
