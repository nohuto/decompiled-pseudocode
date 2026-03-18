/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140167808
 * Callers:
 *     PopThermalSxEntry @ 0x140166CE0 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1402F79B4 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402F7A18 (PopThermalCsExit.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1402FF16C (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_1404429EC;
  result = 0LL;
  byte_1404429EC = 0;
  if ( byte_1404429ED )
  {
    byte_1404429ED = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_1404429F0) / 0x989680uLL, a3);
  }
  return result;
}
