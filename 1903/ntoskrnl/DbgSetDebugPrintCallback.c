/*
 * XREFs of DbgSetDebugPrintCallback @ 0x14030B1C0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E7358 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406E75F4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x14030B220 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030B33C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
