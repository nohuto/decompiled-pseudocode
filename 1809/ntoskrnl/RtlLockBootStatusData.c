/*
 * XREFs of RtlLockBootStatusData @ 0x140718CA0
 * Callers:
 *     PopBootStatSet @ 0x1407184E4 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x140744FE0 (PoClearTransitionMarker.c)
 *     CmCompleteRegistryInitialization @ 0x1407455D4 (CmCompleteRegistryInitialization.c)
 *     PopBootStatGet @ 0x1407530B0 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x140877270 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408774D8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlInitializeBootStatDataCache @ 0x14018DC28 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x14018DDA0 (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x1401B87D0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  int v1; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v7; // [rsp+A8h] [rbp+28h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE FileHandlea; // [rsp+B8h] [rbp+38h] BYREF

  SourceString = 0LL;
  v1 = 0;
  v7 = 0;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
      *FileHandle = BootStatFileHandle;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v7);
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v1 < 0 )
    {
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      if ( FileHandle )
        *FileHandle = 0LL;
    }
    else
    {
      BootStatFileHandle = FileHandlea;
      BootStatFileHandleAcquired = 1;
      RtlInitializeBootStatDataCache();
      if ( FileHandle )
        *FileHandle = FileHandlea;
      else
        BootStatKeepHandleOpen = 1;
    }
    if ( v7 )
      ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  return v1;
}
