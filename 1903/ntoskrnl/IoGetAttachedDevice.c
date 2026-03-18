/*
 * XREFs of IoGetAttachedDevice @ 0x1400440D0
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140099A40 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400EBD70 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1402981D0 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x1405A7CE4 (IopShutdownBaseFileSystems.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1406EEDD4 (IopCopyOffloadCapable.c)
 *     FsRtlQueryOpen @ 0x14084E93C (FsRtlQueryOpen.c)
 *     PipSendGuestAssignedNotification @ 0x140877EAC (PipSendGuestAssignedNotification.c)
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
