/*
 * XREFs of IoGetAttachedDevice @ 0x140044170
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400887D0 (IopAttachDeviceToDeviceStackSafe.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400ED890 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoAdjustStackSizeForRedirection @ 0x140297F30 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CC4 (IopShutdownBaseFileSystems.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1406F08F4 (IopCopyOffloadCapable.c)
 *     FsRtlQueryOpen @ 0x14084E03C (FsRtlQueryOpen.c)
 *     PipSendGuestAssignedNotification @ 0x1408775AC (PipSendGuestAssignedNotification.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
