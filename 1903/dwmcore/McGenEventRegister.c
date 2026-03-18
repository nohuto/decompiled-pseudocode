/*
 * XREFs of McGenEventRegister @ 0x1800A9220
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800A90DC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !Microsoft_Windows_Dwm_Core_Provider_Context[0] )
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             McGenControlCallbackV2,
             Microsoft_Windows_Dwm_Core_Provider_Context,
             Microsoft_Windows_Dwm_Core_Provider_Context);
  return result;
}
