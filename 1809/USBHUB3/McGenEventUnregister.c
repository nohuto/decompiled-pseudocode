/*
 * XREFs of McGenEventUnregister @ 0x1C0001244
 * Callers:
 *     DriverCleanup @ 0x1C0001BA0 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !MS_USBHUB3_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBHUB3_ETW_PROVIDER_Context);
  MS_USBHUB3_ETW_PROVIDER_Context = 0LL;
  return result;
}
