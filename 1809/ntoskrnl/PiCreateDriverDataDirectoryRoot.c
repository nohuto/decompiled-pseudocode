/*
 * XREFs of PiCreateDriverDataDirectoryRoot @ 0x1409DA820
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401B9A50 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409DA9A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 */

__int64 PiCreateDriverDataDirectoryRoot()
{
  void *v0; // rdi
  NTSTATUS StateRootPath; // ebx
  unsigned int v2; // esi
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING v5; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *v8; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  SymbolicLinkHandle = 0LL;
  v0 = 0LL;
  v8 = 0LL;
  Interval.QuadPart = -1000000LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  StateRootPath = PiGetStateRootPath(
                    L"DriverData",
                    L"\\SystemRoot\\System32\\Drivers\\DriverData",
                    LocationTypeFileSystem,
                    &DestinationString);
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
      ObjectAttributes.ObjectName = &DestinationString;
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
        RtlInitUnicodeString(&v5, L"\\DriverData");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &v5;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 80;
        StateRootPath = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( SymbolicLinkHandle )
    ZwClose(SymbolicLinkHandle);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)StateRootPath;
}
