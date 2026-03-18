/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x14069DF70
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400EC750 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x140694094 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
