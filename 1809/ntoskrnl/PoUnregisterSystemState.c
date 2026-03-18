/*
 * XREFs of PoUnregisterSystemState @ 0x1402DBBF0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140588E00 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
