/*
 * XREFs of ZwAlpcSetInformation @ 0x1401B9450
 * Callers:
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1409DD8CC (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
