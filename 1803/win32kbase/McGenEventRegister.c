/*
 * XREFs of McGenEventRegister @ 0x1C00AA730
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( W32kControlGuid_Context )
    return 0;
  else
    return EtwRegister(&W32kControlGuid, McGenControlCallbackV2, &W32kControlGuid_Context, &W32kControlGuid_Context);
}
