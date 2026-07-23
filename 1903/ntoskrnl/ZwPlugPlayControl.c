/*
 * XREFs of ZwPlugPlayControl @ 0x1401C2670
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x140622CF0 (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406D2FF0 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406D9984 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406E0BB0 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1406E7B50 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140863640 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140863B10 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x1408739E8 (PiCMSetProblem.c)
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
