/*
 * XREFs of PoUnregisterSystemState @ 0x1402F7270
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1406F0730 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
