/*
 * XREFs of IoGetAttachedDevice @ 0x1400B9190
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x140282F50 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x140578E88 (IopShutdownBaseFileSystems.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1406D047C (IopCopyOffloadCapable.c)
 *     FsRtlQueryOpen @ 0x1408160BC (FsRtlQueryOpen.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
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
