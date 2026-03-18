/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140167DB8
 * Callers:
 *     PopThermalSxEntry @ 0x140167290 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140195F40 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402F7F04 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402F7F68 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1402FF6BC (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140442A4C;
  result = 0LL;
  byte_140442A4C = 0;
  if ( byte_140442A4D )
  {
    byte_140442A4D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140442A50) / 0x989680uLL, a3);
  }
  return result;
}
