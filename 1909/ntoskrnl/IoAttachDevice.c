/*
 * XREFs of IoAttachDevice @ 0x140855420
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoAttachDeviceToDeviceStackSafe @ 0x1400887B0 (IoAttachDeviceToDeviceStackSafe.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoAttachDevice(
        PDEVICE_OBJECT SourceDevice,
        PUNICODE_STRING TargetDevice,
        PDEVICE_OBJECT *AttachedDevice)
{
  NTSTATUS result; // eax
  int v6; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.ObjectName = TargetDevice;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  result = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x80000040);
  if ( result >= 0 )
  {
    v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ZwClose(FileHandle);
      v6 = IoAttachDeviceToDeviceStackSafe(SourceDevice, RelatedDeviceObject, AttachedDevice);
      ObfDereferenceObject(Object);
    }
    return v6;
  }
  return result;
}
