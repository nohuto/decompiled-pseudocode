/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C
 * Callers:
 *     PoStoreRequester @ 0x140002BAC (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140002E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     PopThermalTraceRundownEvents @ 0x140141E48 (PopThermalTraceRundownEvents.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401426F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x14018C0C4 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140288458 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x1402D39B0 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x1402E2160 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1402E2280 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402E23B0 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1402E2CF4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1402E2E20 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1403073AC (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x1406DC3F8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1406DC478 (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x14075277C (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407528D0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14075293C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140756CE0 (IopQueryInterfaceRecurseUp.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14075D510 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 *     PiControlGetDeviceStack @ 0x14083CB14 (PiControlGetDeviceStack.c)
 *     PoThermalCounterSetCallback @ 0x14086D4E0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x14087466C (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140875B78 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140875C74 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14087D910 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140019D54 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
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
