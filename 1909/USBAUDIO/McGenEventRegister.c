/*
 * XREFs of McGenEventRegister @ 0x1C0001A3C
 * Callers:
 *     DeviceCreate @ 0x1C0001BE0 (DeviceCreate.c)
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
    return EtwRegister(&EXBUSAUD_PROVIDER, McGenControlCallbackV2, CallbackContext, RegHandle);
  return result;
}
