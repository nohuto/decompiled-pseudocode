/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x1400EB30C
 * Callers:
 *     PoRegisterSystemState @ 0x1402F7690 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14069D770 (NtSetThreadExecutionState.c)
 * Callees:
 *     PoClearPowerRequest @ 0x1400EB380 (PoClearPowerRequest.c)
 *     PoSetPowerRequest @ 0x1400EB3B0 (PoSetPowerRequest.c)
 */

NTSTATUS __fastcall PopApplyLegacyPowerRequestFlags(PVOID PowerRequest, char a2, char a3)
{
  NTSTATUS result; // eax

  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestSystemRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestSystemRequired);
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestDisplayRequired);
  }
  if ( (a3 & 0x40) != 0 )
  {
    if ( (a2 & 0x40) != 0 )
      return PoSetPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
    else
      return PoClearPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
  }
  return result;
}
