/*
 * XREFs of PoUnregisterSystemState @ 0x1402DBEE0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140589E00 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
