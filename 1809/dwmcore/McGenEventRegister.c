/*
 * XREFs of McGenEventRegister @ 0x180084C84
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180084B40 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
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
             (PENABLECALLBACK)McGenControlCallbackV2,
             Microsoft_Windows_Dwm_Core_Provider_Context,
             Microsoft_Windows_Dwm_Core_Provider_Context);
  return result;
}
