/*
 * XREFs of PoDeletePowerRequest @ 0x140589E00
 * Callers:
 *     PoUnregisterSystemState @ 0x1402DBEE0 (PoUnregisterSystemState.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
