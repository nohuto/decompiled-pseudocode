/*
 * XREFs of DbgSetDebugPrintCallback @ 0x14030AC70
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E8458 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1406E86F4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x14030ACD0 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030ADEC (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
