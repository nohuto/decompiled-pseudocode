/*
 * XREFs of PoUnregisterSystemState @ 0x1402F77C0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14069E3E0 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
