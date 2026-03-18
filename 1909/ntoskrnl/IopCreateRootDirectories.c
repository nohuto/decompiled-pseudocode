/*
 * XREFs of IopCreateRootDirectories @ 0x140A1CD9C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x140681350 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
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
