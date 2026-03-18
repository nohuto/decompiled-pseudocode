/*
 * XREFs of VerifyCriticalRegionEntry @ 0x1C0045308
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C43C0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C44E0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C4580 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C46A0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C4740 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C4860 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C48F0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C4980 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C4A10 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C4B30 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C4BC0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C4C50 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C4CE0 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C4D70 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C4E00 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C4E90 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C4F30 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C4FD0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C5060 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C5230 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C5410 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C55F0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C57C0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C5850 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C5940 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifyCriticalRegionEntry(unsigned __int8 *CritRegion)
{
  if ( KeGetCurrentIrql() <= 1u )
    *CritRegion = KeAreApcsDisabled();
}
