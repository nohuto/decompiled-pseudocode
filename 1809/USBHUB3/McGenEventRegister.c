/*
 * XREFs of McGenEventRegister @ 0x1C0001214
 * Callers:
 *     DriverEntry @ 0x1C007D008 (DriverEntry.c)
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
    return EtwRegister(&MS_USBHUB3_ETW_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
  return result;
}
