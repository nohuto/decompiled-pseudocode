/*
 * XREFs of McGenEventRegister @ 0x1C0095AFC
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
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
  if ( !W32kControlGuid_Context )
    return EtwRegister(
             (LPCGUID)&Context.Flags,
             McGenControlCallbackV2,
             &W32kControlGuid_Context,
             &W32kControlGuid_Context);
  return result;
}
