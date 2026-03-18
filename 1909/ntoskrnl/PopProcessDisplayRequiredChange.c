/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x1406F0DAC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400D6518 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x1400D6A84 (PoClearPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D88B0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x140687604 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
