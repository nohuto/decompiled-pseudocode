/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140680150 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406804D0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140680534 (RtlAddMandatoryAce.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DEC40 (RtlAbsoluteToSelfRelativeSD.c)
 */

PVOID __fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  PVOID v2; // rdi
  NTSTATUS v3; // eax
  void **v4; // r14
  NTSTATUS v5; // eax
  PVOID v6; // rsi
  void *v7; // rbx
  void *v8; // rdi
  ULONG v9; // edx
  PVOID PoolWithTag; // rax
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  PVOID TokenInformation; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-C0h] BYREF
  ACL Sacl[12]; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl[30]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset(Acl, 0, 0xECuLL);
  memset(SecurityDescriptor, 0, 0x28uLL);
  memset(Sacl, 0, 0x54uLL);
  P = 0LL;
  v2 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v3 = SeQueryInformationToken(v1, TokenOwner, &TokenInformation);
  v4 = (void **)TokenInformation;
  if ( v3 >= 0 )
  {
    v5 = SeQueryInformationToken(v1, TokenPrimaryGroup, &P);
    v6 = P;
    if ( v5 >= 0 )
    {
      v7 = *v4;
      v8 = *(void **)P;
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v7, 0);
      RtlSetGroupSecurityDescriptor(SecurityDescriptor, v8, 0);
      RtlCreateAcl(Acl, 0xECu, 2u);
      RtlpAddKnownAce(Acl, 2u, 2, 983103, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(Acl, 2u, 2, 983103, (unsigned __int8 *)SeAllAppPackagesSid, 0);
      RtlpAddKnownAce(Acl, 2u, 2, 983103, *(unsigned __int8 **)&SeRestrictedSid, 0);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
      RtlCreateAcl(Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 1;
      RtlAddMandatoryAce(Sacl, v9, 0, SeLowMandatorySid, AceType, LabelSid);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
      LODWORD(TokenInformation) = 0;
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, (PULONG)&TokenInformation);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)TokenInformation, 0x65536D43u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, (PULONG)&TokenInformation);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v2;
}
