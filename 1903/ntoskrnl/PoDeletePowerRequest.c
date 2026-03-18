/*
 * XREFs of PoDeletePowerRequest @ 0x14069E3E0
 * Callers:
 *     PoUnregisterSystemState @ 0x1402F77C0 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp((unsigned int *)PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
