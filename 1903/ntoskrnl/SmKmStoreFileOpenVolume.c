/*
 * XREFs of SmKmStoreFileOpenVolume @ 0x1408EB2A0
 * Callers:
 *     SmKmEtwAppendProductName @ 0x140324DBC (SmKmEtwAppendProductName.c)
 *     SmKmStoreFileCreate @ 0x1408EA5A4 (SmKmStoreFileCreate.c)
 *     SmcCacheStart @ 0x1408EBE14 (SmcCacheStart.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmStoreFileOpenVolume(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  BOOLEAN v6; // si
  int v7; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v17[528]; // [rsp+C0h] [rbp-40h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v17, 0, 0x208uLL);
  FileHandle = 0LL;
  v6 = IoSetThreadHardErrorMode(0);
  v7 = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)v17, 0x208u, &v13, 0);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v7 >= 0 )
    {
      v8 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 >= 0 )
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        *a2 = v9;
        v9 = 0LL;
        *a3 = RelatedDeviceObject;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v7;
}
