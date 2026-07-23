/*
 * XREFs of ZwPlugPlayControl @ 0x1401C31F0
 * Callers:
 *     ExpHwidGetDeviceProperties @ 0x140626BA0 (ExpHwidGetDeviceProperties.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406D2350 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1406D95F4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406E22E0 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1406E8C50 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140862D40 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140863210 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x1408730E8 (PiCMSetProblem.c)
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
