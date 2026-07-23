/*
 * XREFs of ZwAlpcCreatePort @ 0x1401B9210
 * Callers:
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1409DD8CC (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
