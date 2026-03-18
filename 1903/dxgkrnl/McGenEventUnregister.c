/*
 * XREFs of McGenEventUnregister @ 0x1C0040624
 * Callers:
 *     DxgkEtwShutdown @ 0x1C0040600 (DxgkEtwShutdown.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240718 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONGLONG v2; // rcx
  ULONG result; // eax

  v2 = *RegHandle;
  if ( !v2 )
    return 0;
  result = EtwUnregister(v2);
  *RegHandle = 0LL;
  return result;
}
