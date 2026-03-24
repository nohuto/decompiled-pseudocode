/*
 * XREFs of ZwPlugPlayControl @ 0x1401BA710
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1405865BC (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406AF4B0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406B3D84 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x1406C5DE0 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1406FC5D0 (PlugPlayGetRelatedDevice.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x140838DB8 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x140900C7C (PlugPlayGetDeviceRelations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PlugPlayControlClass, Buffer, *(_QWORD *)&BufferSize);
}
