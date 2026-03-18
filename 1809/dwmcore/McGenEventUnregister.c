/*
 * XREFs of McGenEventUnregister @ 0x1801E0EE8
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180084E48 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
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
