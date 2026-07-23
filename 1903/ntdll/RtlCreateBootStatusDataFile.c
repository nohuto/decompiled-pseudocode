/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800EAAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800EAF70 @ 0x1800EAF70 (sub_1800EAF70.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  const WCHAR *v0; // rcx
  char v1; // di
  int v2; // ebx
  PCWSTR SourceString; // [rsp+60h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+Fh] BYREF
  char v8; // [rsp+E0h] [rbp+67h] BYREF
  char Buffer; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  v1 = 0;
  SourceString = 0LL;
  Buffer = 1;
  v8 = 0;
  if ( v0 )
  {
    RtlInitUnicodeString(&DestinationString, v0);
  }
  else
  {
    sub_1800EAF70(&SourceString, &v8);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v1 = v8;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v2 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v2 >= 0 )
  {
    --ByteOffset.QuadPart;
    v2 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 1u, &ByteOffset, 0LL);
    if ( v2 >= 0 )
      v2 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
  return v2;
}
