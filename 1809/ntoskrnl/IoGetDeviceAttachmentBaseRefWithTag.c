/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C
 * Callers:
 *     PoStoreRequester @ 0x140002BAC (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140002E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     PopThermalTraceRundownEvents @ 0x140141D48 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401425F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x14017273C (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018BEF4 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018BF84 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140288268 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1402D37C0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E1F70 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2090 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E21C0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E27CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2B04 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402E2C30 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1403071BC (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x140568C68 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB158 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406DB1D8 (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x140725190 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14075158C (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407516E0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14075174C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755AF0 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14075C320 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x14083B8B4 (PiControlGetDeviceStack.c)
 *     PoThermalCounterSetCallback @ 0x14086C280 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x14087340C (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140874918 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140874A14 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14087C6B0 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140019D54 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF30 (KeAcquireQueuedSpinLock.c)
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
