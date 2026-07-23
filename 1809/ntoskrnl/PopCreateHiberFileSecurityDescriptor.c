/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x140748E78
 * Callers:
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *Src; // rsi
  unsigned int v4; // eax
  __int64 v5; // rbp
  ACL *v6; // rax
  ACL *v7; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v9; // rcx
  _BYTE *IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  LODWORD(IdentifierAuthority) = 0;
  v1 = 0LL;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x72626968u);
  Src = PoolWithTag;
  if ( !PoolWithTag )
    return v0;
  if ( RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Src, 0) = 0;
    v4 = 4 * Src[1] + 24;
    if ( v4 >= 4 * (unsigned int)Src[1] + 16 )
    {
      v5 = v4;
      v6 = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x72626968u);
      v1 = v6;
      if ( v6 )
      {
        if ( RtlCreateAcl(v6, v5, 2u) >= 0 && (int)RtlpAddKnownAce(v1, 2u, 0, 0x10000, Src, 0) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v5 + 40, 0x72626968u);
          v0 = v7;
          if ( v7 )
          {
            memmove(&v7[5], v1, (unsigned int)v5);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v9 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_10;
              v9 = v0;
            }
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
    }
  }
LABEL_10:
  ExFreePoolWithTag(Src, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
