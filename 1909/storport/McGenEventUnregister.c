/*
 * XREFs of McGenEventUnregister @ 0x1C00394B4
 * Callers:
 *     RaDeleteDriver @ 0x1C007482C (RaDeleteDriver.c)
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
