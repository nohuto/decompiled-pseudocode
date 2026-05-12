/*
 * XREFs of McGenEventRegister @ 0x1C00233D8
 * Callers:
 *     RaInitializeDriver @ 0x1C006E864 (RaInitializeDriver.c)
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
  if ( !StorPortEventProvider_Context )
    return EtwRegister(
             &StorPortEventProvider,
             McGenControlCallbackV2,
             &StorPortEventProvider_Context,
             &StorPortEventProvider_Context);
  return result;
}
