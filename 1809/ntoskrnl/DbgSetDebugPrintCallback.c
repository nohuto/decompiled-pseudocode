/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1402EC8F0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C57B0 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C5A4C (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1402EC950 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECA6C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
