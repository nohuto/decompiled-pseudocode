/*
 * XREFs of IopApplySystemPartitionProt @ 0x140A3A4B4
 * Callers:
 *     IopProtectSystemPartition @ 0x140A21504 (IopProtectSystemPartition.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140189608 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x1401C34F0 (ZwSetSecurityObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlAddAccessAllowedAce @ 0x140680120 (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  ULONG v2; // ebx
  ACL *PoolWithTagPriority; // rax
  ACL *v4; // rdi
  NTSTATUS Acl; // ebx
  __int64 v7; // r9
  HANDLE FileHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A0h] [rbp-68h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  strcpy(pszFormat, "\\ArcName\\%s");
  v2 = 4 * (*((unsigned __int8 *)SeLocalSystemSid + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1)) + 56;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTagPriority(
                                   PagedPool,
                                   v2,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x20206F49u);
  v4 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  Acl = RtlCreateAcl(PoolWithTagPriority, v2, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, SeLocalSystemSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v4, 2u, 0xE0020000, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = *(_QWORD *)(a1 + 192);
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = 0LL;
            *(_QWORD *)&UnicodeString.Length = 0LL;
            UnicodeString.Buffer = 0LL;
            IoStatusBlock.Pointer = 0LL;
            IoStatusBlock.Information = 0LL;
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v7);
            RtlInitAnsiString(&DestinationString, pszDest);
            Acl = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
            if ( Acl >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = &UnicodeString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ZwOpenFile(&FileHandle, 0x40000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
              RtlFreeAnsiString(&UnicodeString);
              if ( Acl >= 0 )
              {
                Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)Acl;
}
