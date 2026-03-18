/*
 * XREFs of EngQueryFileTimeStamp @ 0x1C027A590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

LARGE_INTEGER __stdcall EngQueryFileTimeStamp(LPWSTR pwsz)
{
  NTSTATUS v2; // ebx
  LARGE_INTEGER v4; // [rsp+30h] [rbp-49h] BYREF
  void *FileHandle; // [rsp+38h] [rbp-41h] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  _QWORD FileInformation[5]; // [rsp+98h] [rbp+1Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v4.QuadPart = 0LL;
  RtlInitUnicodeString(&DestinationString, pwsz);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x10u) >= 0 )
  {
    v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    ZwClose(FileHandle);
    if ( !v2 )
    {
      v6 = FileInformation[2];
      GreSystemTimeToLocalTime(&v6, &v4);
    }
  }
  return v4;
}
