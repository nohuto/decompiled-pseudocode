/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1402ECBE0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C6A30 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406C6CCC (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1402ECC40 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECD5C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
