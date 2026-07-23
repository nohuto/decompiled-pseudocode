/*
 * XREFs of IopApplySystemPartitionProt @ 0x1409F5F40
 * Callers:
 *     IopProtectSystemPartition @ 0x1409DF514 (IopProtectSystemPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCchPrintfA @ 0x14018E100 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  ULONG v2; // ebx
  ACL *PoolWithTagPriority; // rax
  ACL *v4; // rdi
  NTSTATUS Acl; // ebx
  HANDLE FileHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

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
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, *(_QWORD *)(a1 + 192));
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
