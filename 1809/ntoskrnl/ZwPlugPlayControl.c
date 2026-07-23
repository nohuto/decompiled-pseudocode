/*
 * XREFs of ZwPlugPlayControl @ 0x1401BA870
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x1405875BC (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406B0750 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406B5024 (PlugPlayGetDeviceStatus.c)
 *     PlugPlayGetDeviceProperty @ 0x1406C7080 (PlugPlayGetDeviceProperty.c)
 *     PlugPlayGetRelatedDevice @ 0x1406FD870 (PlugPlayGetRelatedDevice.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14083A018 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceRelations @ 0x140901F3C (PlugPlayGetDeviceRelations.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPlugPlayControl(PLUGPLAY_CONTROL_CLASS PlugPlayControlClass, PVOID Buffer, ULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PlugPlayControlClass);
}
