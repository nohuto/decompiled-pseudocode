/*
 * XREFs of PiCreateDriverDataDirectoryRoot @ 0x140A0FF08
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateFile @ 0x1401C16F0 (ZwCreateFile.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C23D0 (ZwCreateSymbolicLinkObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x14073C9DC (PiGetStateRootPath.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 */

__int64 PiCreateDriverDataDirectoryRoot()
{
  void *v0; // rdi
  NTSTATUS StateRootPath; // ebx
  unsigned int v2; // esi
  UNICODE_STRING Name; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *v8; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+7Fh] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  SymbolicLinkHandle = 0LL;
  v0 = 0LL;
  Interval.QuadPart = -1000000LL;
  *(_QWORD *)&Name.Length = 0LL;
  Name.Buffer = 0LL;
  v8 = 0LL;
  StateRootPath = PiGetStateRootPath(
                    L"DriverData",
                    L"\\SystemRoot\\System32\\Drivers\\DriverData",
                    LocationTypeFileSystem,
                    &Name);
  if ( StateRootPath >= 0 )
  {
    StateRootPath = PiAuGetDriverDataDirectorySecurityObject(&v8);
    if ( StateRootPath < 0 )
    {
      v0 = v8;
    }
    else
    {
      ObjectAttributes.RootDirectory = 0LL;
      v0 = v8;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.SecurityDescriptor = v8;
      v2 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &Name;
      do
      {
        StateRootPath = ZwCreateFile(
                          &FileHandle,
                          0x100001u,
                          &ObjectAttributes,
                          &IoStatusBlock,
                          0LL,
                          0x80u,
                          3u,
                          3u,
                          0x21u,
                          0LL,
                          0);
        if ( StateRootPath != -1073741766 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        ++v2;
      }
      while ( v2 < 0x32 );
      if ( StateRootPath >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\DriverData");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 80;
        StateRootPath = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
      }
    }
  }
  RtlFreeAnsiString(&Name);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( SymbolicLinkHandle )
    ZwClose(SymbolicLinkHandle);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)StateRootPath;
}
