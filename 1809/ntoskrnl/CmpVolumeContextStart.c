/*
 * XREFs of CmpVolumeContextStart @ 0x14075F708
 * Callers:
 *     CmpVolumeContextCreate @ 0x14075F680 (CmpVolumeContextCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwCreateFile @ 0x1401B8C30 (ZwCreateFile.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToGuid @ 0x1405A44B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A4540 (IoVolumeDeviceToGuidPath.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     CmpUuidCreate @ 0x140680A6C (CmpUuidCreate.c)
 */

__int64 __fastcall CmpVolumeContextStart(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+17h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)(a1 + 16) = &CmpVolumeManager;
  if ( a3 )
  {
    v5 = IoVolumeDeviceToGuid(a3, (GUID *)(a1 + 32));
    if ( v5 >= 0 )
    {
      v5 = IoVolumeDeviceToGuidPath(a3, (__int64)&DestinationString);
      if ( v5 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateFile(&FileHandle, 0x180u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x40u, 0LL, 0);
        if ( v5 >= 0 )
        {
          v5 = ObReferenceObjectByHandle(FileHandle, 0x180u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
          *(_QWORD *)(a1 + 48) = Object;
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
    }
  }
  else
  {
    v5 = CmpUuidCreate((UUID *)(a1 + 32));
    if ( v5 >= 0 )
      v5 = 0;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v5;
}
