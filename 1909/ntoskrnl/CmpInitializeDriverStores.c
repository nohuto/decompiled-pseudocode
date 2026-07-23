/*
 * XREFs of CmpInitializeDriverStores @ 0x140A0B5C0
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1401C2090 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1401C23D0 (ZwCreateSymbolicLinkObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38B84 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  NTSTATUS v2; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v4; // rsi
  __int64 **v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v9; // rdx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  _STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+C0h] [rbp+40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  v2 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1000uLL);
      Destination.Buffer = v4;
      *(_QWORD *)&Destination.Length = 0x10000000LL;
      RtlAppendUnicodeToString(&Destination, L"\\SystemRoot");
      RtlInitUnicodeString(&DestinationString, L"SYSTEM");
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = DirectoryHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      Destination.MaximumLength = Destination.Length;
      ObjectAttributes.Attributes = 592;
      v2 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Destination);
      if ( v2 >= 0 )
      {
        ZwClose(SymbolicLinkHandle);
        v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 296LL);
        v6 = *v5;
        while ( v6 != (__int64 *)v5 )
        {
          if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
          {
            RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
            v2 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
            if ( v2 < 0 )
              break;
            Destination.Buffer = v4;
            *(_QWORD *)&Destination.Length = 0x10000000LL;
            RtlAppendUnicodeToString(&Destination, L"\\ArcName\\");
            RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            RtlFreeAnsiString(&DestinationString);
            SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath(v6[2]);
            v9 = v6[2];
            if ( SystemRelativeRegistryHiveFilePath > v9
              && (__int64)((SystemRelativeRegistryHiveFilePath - v9) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
            {
              DestinationString.Buffer = (wchar_t *)v6[2];
              DestinationString.Length = 2
                                       * ((__int64)(unsigned int)(SystemRelativeRegistryHiveFilePath
                                                                - *((_DWORD *)v6 + 4)) >> 1);
              DestinationString.MaximumLength = DestinationString.Length;
              RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            }
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
            Destination.MaximumLength = Destination.Length;
            ObjectAttributes.Attributes = 592;
            v2 = ZwCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Destination);
            if ( v2 < 0 )
              break;
            ZwClose(SymbolicLinkHandle);
          }
          v6 = (__int64 *)*v6;
          v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 296LL);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v2;
}
