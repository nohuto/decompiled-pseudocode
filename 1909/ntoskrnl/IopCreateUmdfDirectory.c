/*
 * XREFs of IopCreateUmdfDirectory @ 0x140A1CE88
 * Callers:
 *     IopCreateRootDirectories @ 0x140A1CD9C (IopCreateRootDirectories.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     RtlLengthRequiredSid @ 0x14061C800 (RtlLengthRequiredSid.c)
 *     NtCreateDirectoryObject @ 0x140681350 (NtCreateDirectoryObject.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool_0; // rax
  _DWORD *v3; // rdi
  NTSTATUS Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+30h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  HANDLE IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  WORD2(IdentifierAuthority) = 1280;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LODWORD(IdentifierAuthority) = 0;
  SeLocalSystemSid = (unsigned __int8 *)SeExports->SeLocalSystemSid;
  v1 = RtlLengthRequiredSid(6u);
  Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v1);
  v3 = Pool_0;
  if ( Pool_0 )
  {
    Acl = RtlInitializeSid(Pool_0, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 6u);
    if ( Acl >= 0 )
    {
      v3[2] = 80;
      v3[3] = -1642288911;
      v3[4] = 582572993;
      v3[5] = 1835434367;
      v3[6] = 1344795993;
      v3[7] = 749280709;
      v5 = 4 * (*((unsigned __int8 *)v3 + 1) + SeLocalSystemSid[1]) + 40;
      v6 = (ACL *)IopVerifierExAllocatePool_0(PagedPool, v5);
      v7 = v6;
      if ( v6 )
      {
        Acl = RtlCreateAcl(v6, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                if ( Acl >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"\\UMDFCommunicationPorts");
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                  ObjectAttributes.Attributes = 528;
                  Acl = NtCreateDirectoryObject(&IdentifierAuthority, 0xF000Fu, &ObjectAttributes);
                  if ( Acl >= 0 )
                    ObCloseHandle(IdentifierAuthority, 0);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
