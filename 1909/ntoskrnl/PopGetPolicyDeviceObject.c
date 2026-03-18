/*
 * XREFs of PopGetPolicyDeviceObject @ 0x14074E1D0
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateFile @ 0x1401C16F0 (ZwCreateFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 */

PDEVICE_OBJECT __fastcall PopGetPolicyDeviceObject(UNICODE_STRING *a1, PFILE_OBJECT *a2)
{
  PDEVICE_OBJECT v3; // rdi
  PFILE_OBJECT v4; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+67h] BYREF
  PFILE_OBJECT FileObject; // [rsp+D8h] [rbp+77h] BYREF

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v3 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileObject = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0) >= 0 )
  {
    if ( (int)ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)FileHandle,
                0,
                (__int64)IoFileObjectType,
                0,
                0x64506F50u,
                &FileObject,
                0LL,
                0LL) >= 0 )
    {
      v4 = FileObject;
      RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
      v3 = RelatedDeviceObject;
      if ( RelatedDeviceObject )
      {
        ObfReferenceObjectWithTag(RelatedDeviceObject, 0x64506F50u);
        *a2 = v4;
        v4 = 0LL;
      }
      if ( v4 )
        ObfDereferenceObjectWithTag(v4, 0x64506F50u);
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return v3;
}
