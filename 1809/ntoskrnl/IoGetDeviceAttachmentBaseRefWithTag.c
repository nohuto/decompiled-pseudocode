/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C
 * Callers:
 *     PoStoreRequester @ 0x140002BAC (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140002E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     PopThermalTraceRundownEvents @ 0x140141D28 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401425D0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x14017271C (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018BED4 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018BF64 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140288168 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1402D36C0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E1E70 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E1F90 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E20C0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E26CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2A04 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402E2B30 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1403070BC (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x140568C68 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB178 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406DB1F8 (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x1407251B0 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1407515AC (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140751700 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14075176C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140755B10 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14075C340 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x14083B8D4 (PiControlGetDeviceStack.c)
 *     PoThermalCounterSetCallback @ 0x14086C2A0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x14087342C (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140874938 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140874A34 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14087C6D0 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140019D54 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
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
