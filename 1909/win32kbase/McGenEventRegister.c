/*
 * XREFs of McGenEventRegister @ 0x1C00A8C10
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
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
