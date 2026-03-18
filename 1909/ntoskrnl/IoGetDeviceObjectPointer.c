/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1406907A0
 * Callers:
 *     sub_140623A38 @ 0x140623A38 (sub_140623A38.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x14064BE70 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14064C310 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x14085BA8C (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408A36EC (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesDisk @ 0x1409F4FAC (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F594C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F12C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FAA8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FC9C (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return v7;
}
