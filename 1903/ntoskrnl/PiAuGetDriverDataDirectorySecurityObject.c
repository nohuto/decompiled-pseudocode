/*
 * XREFs of PiAuGetDriverDataDirectorySecurityObject @ 0x140A0F918
 * Callers:
 *     PiCreateDriverDataDirectoryRoot @ 0x140A0F770 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7A30 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1405D6ED0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140680150 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DEC40 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x14073AF20 (RtlAddAccessAllowedAceEx.c)
 */

__int64 __fastcall PiAuGetDriverDataDirectorySecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ACL *PoolWithTag; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  PSID v7; // rbp
  ULONG v8; // eax
  ULONG v9; // ebx
  PVOID v10; // rax
  _BYTE SecurityDescriptor[48]; // [rsp+30h] [rbp-48h] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+10h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  v2 = 0LL;
  v3 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeExports->SeUserModeDriversSid + 1))
     + 56;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x20207050u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v3, 2u);
    if ( Acl >= 0 )
    {
      v7 = SeLocalSystemSid;
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeExports->SeUserModeDriversSid);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v7, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v7, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                    {
                      v9 = v8;
                      v10 = ExAllocatePoolWithTag(PagedPool, v8, 0x20207050u);
                      v2 = v10;
                      if ( v10 )
                      {
                        memset(v10, 0, v9);
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, &BufferLength);
                        if ( Acl >= 0 )
                        {
                          *a1 = v2;
                          v2 = 0LL;
                        }
                      }
                      else
                      {
                        Acl = -1073741670;
                      }
                    }
                    else
                    {
                      Acl = -1073741595;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
