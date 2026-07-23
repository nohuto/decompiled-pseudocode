/*
 * XREFs of RtlFileMapInitializeByNtPath @ 0x1400F4F54
 * Callers:
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlFileMapInitializeByNtPath(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 5u, 1u, 0x60u, 0LL, 0);
  if ( v4 < 0 )
  {
    v5 = FileHandle;
  }
  else
  {
    v5 = 0LL;
    *(_QWORD *)a1 = FileHandle;
    v4 = 0;
    FileHandle = 0LL;
    *(_BYTE *)(a1 + 48) = 1;
  }
  if ( v5 )
    ZwClose(v5);
  return (unsigned int)v4;
}
