/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C
 * Callers:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400EBF60 (IoGetDeviceAttachmentBaseRef.c)
 *     PoStoreRequester @ 0x1400EC4BC (PoStoreRequester.c)
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011DBF8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011E148 (FsRtlReleaseFileForModWrite.c)
 *     PopThermalTraceRundownEvents @ 0x14015C684 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140167438 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1401675B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140167860 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140167A2C (PopTraceThermalRequestActiveActivity.c)
 *     PopAllocateIrp @ 0x140173114 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x140195F40 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140195FE0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PoSetSystemWakeDevice @ 0x1402EDDE0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1402FEE5C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402FEF7C (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402FF0AC (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402FF828 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402FF954 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x140324C44 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x1405985F0 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x14071DD8C (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14071DE0C (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x14076F080 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140778EB8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140779084 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1407790F8 (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x14077B720 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x140781844 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x140876A0C (PiControlGetDeviceStack.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408A4758 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PoThermalCounterSetCallback @ 0x1408A8BE0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1408B01B4 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408B167C (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408B1778 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1408BA0D0 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1409F5560 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x1400EC070 (IopGetDeviceAttachmentBase.c)
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
