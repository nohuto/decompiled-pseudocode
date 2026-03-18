/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C000260C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0064020 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0066D14 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0067138 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 */

__int64 XilCommonBuffer_ReleaseBuffer()
{
  return CommonBuffer_ReleaseBuffer();
}
