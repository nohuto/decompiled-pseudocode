/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1401428B4
 * Callers:
 *     PopThermalSxEntry @ 0x140142634 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402DC524 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402DC574 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1402E2B88 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14041820C;
  result = 0LL;
  byte_14041820C = 0;
  if ( byte_14041820D )
  {
    byte_14041820D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140418210) / 0x989680uLL, a3);
  }
  return result;
}
