/*
 * XREFs of PoDeletePowerRequest @ 0x1406F0730
 * Callers:
 *     PoUnregisterSystemState @ 0x1402F7270 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
