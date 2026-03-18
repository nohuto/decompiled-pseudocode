/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC
 * Callers:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x1400D5214 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x1400D8A48 (PoStoreRequester.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011D3E8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011D938 (FsRtlReleaseFileForModWrite.c)
 *     PopThermalTraceRundownEvents @ 0x14015CD24 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140166E88 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140167004 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401672B0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14016747C (PopTraceThermalRequestActiveActivity.c)
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401967C0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PoSetSystemWakeDevice @ 0x1402EDB40 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1402FE90C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402FEA2C (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402FEB5C (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF2D8 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402FF404 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x140324694 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1405985CC (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x14071FC1C (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14071FC9C (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x140771EE0 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14077C498 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x14077C664 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14077C6D8 (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077DFF0 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140783BA4 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x14087610C (PiControlGetDeviceStack.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408A3F98 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408A8440 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408AFA14 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408B0EDC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408B0FD8 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408B99A0 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140088AD0 (IopGetDeviceAttachmentBase.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}
