/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1401427B4
 * Callers:
 *     PopThermalSxEntry @ 0x140142534 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018BEF4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402DC334 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402DC384 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1402E2998 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14041724C;
  result = 0LL;
  byte_14041724C = 0;
  if ( byte_14041724D )
  {
    byte_14041724D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140417250) / 0x989680uLL, a3);
  }
  return result;
}
