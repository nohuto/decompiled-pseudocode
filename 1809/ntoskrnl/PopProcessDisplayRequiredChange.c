/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x1405896FC
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400027C4 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140002E88 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14000327C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return PoEnergyContextUpdateComponentPower(a1);
  return result;
}
