/*
 * XREFs of McGenEventUnregister @ 0x1C00380C4
 * Callers:
 *     RaDeleteDriver @ 0x1C0073958 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !StorPortEventProvider_Context )
    return 0;
  result = EtwUnregister(StorPortEventProvider_Context);
  StorPortEventProvider_Context = 0LL;
  return result;
}
