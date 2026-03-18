/*
 * XREFs of IopCreateRootDirectories @ 0x140A1CBC0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x14068DDE0 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
{
  bool result; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = 0;
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
  {
    ObCloseHandle(DirectoryHandle, 0);
    RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
    if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
    {
      ObCloseHandle(DirectoryHandle, 0);
      RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
      if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
      {
        ObCloseHandle(DirectoryHandle, 0);
        if ( (int)IopCreateUmdfDirectory() >= 0 )
          return 1;
      }
    }
  }
  return result;
}
