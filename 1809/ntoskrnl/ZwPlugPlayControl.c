/*
 * XREFs of ZwPlugPlayControl @ 0x1401BA6F0
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1405865BC (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406AF4D0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406B3DA4 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x1406C5E00 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1406FC5F0 (PlugPlayGetRelatedDevice.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x140838DD8 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x140900C9C (PlugPlayGetDeviceRelations.c)
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
