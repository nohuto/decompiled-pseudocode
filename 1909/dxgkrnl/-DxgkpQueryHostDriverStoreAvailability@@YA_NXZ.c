/*
 * XREFs of ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C02773C0
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C00C6070 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

char DxgkpQueryHostDriverStoreAvailability(void)
{
  void *FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-51h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-9h] BYREF

  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  wcscpy(SourceString, L"\\SystemRoot\\System32\\HostDriverStore\\");
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u) < 0 )
    return 0;
  ZwClose(FileHandle);
  return 1;
}
