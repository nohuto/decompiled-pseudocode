/*
 * XREFs of McGenEventUnregister @ 0x1800D9408
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9258 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Dwm_Core_Provider_Context[0] )
    return 0;
  result = EventUnregister(Microsoft_Windows_Dwm_Core_Provider_Context[0]);
  Microsoft_Windows_Dwm_Core_Provider_Context[0] = 0LL;
  return result;
}
