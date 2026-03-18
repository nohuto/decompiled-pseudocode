/*
 * XREFs of PiAuGetStateDirectorySecurityObject @ 0x140864270
 * Callers:
 *     PiOpenDirectoryWithRoot @ 0x14085F394 (PiOpenDirectoryWithRoot.c)
 * Callees:
 *     RtlLengthSid @ 0x140004100 (RtlLengthSid.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DFF50 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall PiAuGetStateDirectorySecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rsi
  int Acl; // ebx
  PSID v9; // rbp
  unsigned __int8 *Src; // r14
  ULONG v11; // eax
  size_t v12; // rbx
  PVOID v13; // rax
  _BYTE SecurityDescriptor[48]; // [rsp+30h] [rbp-58h] BYREF
  ULONG BufferLength; // [rsp+98h] [rbp+10h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  v2 = 0LL;
  v3 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
  v5 = RtlLengthSid(SeLocalSystemSid) + 48 + 2 * v4;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x20207050u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v5, 2u);
    if ( Acl >= 0 )
    {
      v9 = SeLocalSystemSid;
      Acl = RtlpAddKnownAce(v7, 2u, 3, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Src = (unsigned __int8 *)SeAliasAdminsSid;
        Acl = RtlpAddKnownAce(v7, 2u, 3, 0x80000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v7, 2u, 2, 32, Src, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v7, 2u, 3, 0x80000000, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v7, 2u, 2, 32, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v9, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0);
                      if ( Acl >= 0 )
                      {
                        if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                          && (v11 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v11, v11 >= 0x28) )
                        {
                          v12 = v11;
                          v13 = ExAllocatePoolWithTag(PagedPool, v11, 0x20207050u);
                          v2 = v13;
                          if ( v13 )
                          {
                            memset(v13, 0, v12);
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
      }
    }
    ExFreePoolWithTag(v7, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
