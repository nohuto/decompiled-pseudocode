/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1402EC9F0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C5790 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C5A2C (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1402ECA50 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECB6C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
