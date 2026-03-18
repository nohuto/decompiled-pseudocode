/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C000B0E8
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005C760 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_PrepareInterrupter @ 0x1C005EFF0 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C005F3D4 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, _DWORD *a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
