/*
 * XREFs of McGenEventUnregister @ 0x1C00B7D44
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !W32kControlGuid_Context )
    return 0;
  result = EtwUnregister(W32kControlGuid_Context);
  W32kControlGuid_Context = 0LL;
  return result;
}
