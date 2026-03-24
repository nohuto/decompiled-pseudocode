/*
 * XREFs of AslDoesDirectoryExistNtPath @ 0x1408E9560
 * Callers:
 *     SdbpCheckMatchingDir @ 0x1408E5CA0 (SdbpCheckMatchingDir.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B87F0 (ZwOpenFile.c)
 */

__int64 __fastcall AslDoesDirectoryExistNtPath(PCWSTR SourceString)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+10h] BYREF

  v1 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 1u);
  if ( v2 >= 0 )
  {
    ZwClose(FileHandle);
    return 1;
  }
  if ( v2 == -1073741790 || v2 == -1073741757 )
    return 1;
  return v1;
}
