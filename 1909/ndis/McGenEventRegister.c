/*
 * XREFs of McGenEventRegister @ 0x1C00327BC
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  ULONG result; // eax

  result = 0;
  if ( !*RegHandle )
    return EtwRegister(ProviderId, McGenControlCallbackV2, CallbackContext, RegHandle);
  return result;
}
