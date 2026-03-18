/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140661AF0
 * Callers:
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140621FBC (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406617B0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140685F00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x1406863A0 (NtApphelpCacheControl.c)
 *     sub_1406A3BA4 @ 0x1406A3BA4 (sub_1406A3BA4.c)
 *     IopOpenSystemVariableDevice @ 0x14085C38C (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408A3EAC (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesDisk @ 0x1409F509C (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409F51F8 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F5A3C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A3F35C (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A3FCD8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FECC (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
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
