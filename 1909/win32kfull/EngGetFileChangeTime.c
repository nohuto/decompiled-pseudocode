/*
 * XREFs of EngGetFileChangeTime @ 0x1C027A3B0
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02987E0 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

BOOL __stdcall EngGetFileChangeTime(HANDLE h, LARGE_INTEGER *pChangeTime)
{
  BOOL v4; // ebx
  const WCHAR *v5; // rdx
  void *FileHandle; // [rsp+60h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  _QWORD FileInformation[5]; // [rsp+B8h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 0;
  IoStatusBlock.Pointer = 0LL;
  FileHandle = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v5 = (const WCHAR *)*((_QWORD *)h + 10);
  if ( !v5 )
  {
    pChangeTime->QuadPart = 0LL;
    return 1;
  }
  if ( (*((_DWORD *)h + 10) & 1) != 0 )
  {
    *pChangeTime = *(LARGE_INTEGER *)h;
    return 1;
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 3u, 0x10u, 0LL, 0) >= 0 )
  {
    if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      v4 = 1;
      *pChangeTime = (LARGE_INTEGER)FileInformation[2];
    }
    ZwClose(FileHandle);
  }
  return v4;
}
