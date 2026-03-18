/*
 * XREFs of RtlLockBootStatusData @ 0x140738E00
 * Callers:
 *     PopBootStatSet @ 0x140738B08 (PopBootStatSet.c)
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 *     PoClearTransitionMarker @ 0x140769D38 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x14077916C (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408B4550 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408B47B8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlpGetBootStatusPath @ 0x1401764D4 (RtlpGetBootStatusPath.c)
 *     RtlInitializeBootStatDataCache @ 0x140197FBC (RtlInitializeBootStatDataCache.c)
 *     RtlpAcquireBootStatusLock @ 0x1401BF964 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1401BF994 (RtlpReleaseBootStatusLock.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  WCHAR *v2; // rdi
  int v3; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE FileHandlea; // [rsp+B8h] [rbp+38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v8 = 0;
  SourceString = 0LL;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
    {
      *FileHandle = BootStatFileHandle;
      goto LABEL_10;
    }
    goto LABEL_4;
  }
  RtlpGetBootStatusPath(&SourceString, &v8);
  v2 = (WCHAR *)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v3 < 0 )
  {
    BootStatFileHandle = 0LL;
    BootStatReferenceCount = 0;
    BootStatFileHandleAcquired = 0;
    if ( FileHandle )
      *FileHandle = 0LL;
  }
  else
  {
    BootStatFileHandle = FileHandlea;
    BootStatFileHandleAcquired = 1;
    RtlInitializeBootStatDataCache();
    if ( !FileHandle )
    {
LABEL_4:
      BootStatKeepHandleOpen = 1;
      goto LABEL_10;
    }
    *FileHandle = FileHandlea;
  }
LABEL_10:
  RtlpReleaseBootStatusLock();
  if ( v8 )
    ExFreePoolWithTag(v2, 0);
  return v3;
}
