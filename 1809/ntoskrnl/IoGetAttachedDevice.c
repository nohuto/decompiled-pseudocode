/*
 * XREFs of IoGetAttachedDevice @ 0x1400B9230
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132720 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x140282C60 (IoAdjustStackSizeForRedirection.c)
 *     IopShutdownBaseFileSystems @ 0x140577E88 (IopShutdownBaseFileSystems.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1406CF1FC (IopCopyOffloadCapable.c)
 *     FsRtlQueryOpen @ 0x140814EDC (FsRtlQueryOpen.c)
 *     VfFilterAttach @ 0x140942F44 (VfFilterAttach.c)
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
