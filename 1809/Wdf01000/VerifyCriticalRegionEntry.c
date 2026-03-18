/*
 * XREFs of VerifyCriticalRegionEntry @ 0x1C0045C2C
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C03A0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C04C0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C0560 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C0680 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C0720 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C0840 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C08D0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C0960 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C09F0 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C0B10 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C0BA0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C0C30 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C0CC0 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C0D50 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C0DE0 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C0E70 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C0F10 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C0FB0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C1040 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C1210 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C13F0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C15D0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C17A0 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C1830 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C1920 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifyCriticalRegionEntry(unsigned __int8 *CritRegion)
{
  if ( KeGetCurrentIrql() <= 1u )
    *CritRegion = KeAreApcsDisabled();
}
