/*
 * XREFs of McGenEventRegister @ 0x1C0014030
 * Callers:
 *     DriverEntry @ 0x1C005CAF8 (DriverEntry.c)
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
    return EtwRegister(&MS_USBXHCI_ETW_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
  return result;
}
