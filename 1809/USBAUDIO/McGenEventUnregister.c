/*
 * XREFs of McGenEventUnregister @ 0x1C0001A6C
 * Callers:
 *     DeviceRemove @ 0x1C00020F0 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !EXBUSAUD_PROVIDER_Context )
    return 0;
  result = EtwUnregister(EXBUSAUD_PROVIDER_Context);
  EXBUSAUD_PROVIDER_Context = 0LL;
  return result;
}
