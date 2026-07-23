/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140663050
 * Callers:
 *     sub_1405865D0 @ 0x1405865D0 (sub_1405865D0.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140662EB0 (NtApphelpCacheControl.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 *     IopAssignBootDriveLetter @ 0x1409D75AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x1409D77C0 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
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

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
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
