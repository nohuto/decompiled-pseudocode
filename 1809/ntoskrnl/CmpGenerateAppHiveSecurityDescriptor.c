/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5218
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14075BB98 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CADE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CAF70 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1406308A0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     RtlCreateSecurityDescriptor @ 0x14064FE90 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140654290 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406555B0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140655610 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406AFA10 (RtlAbsoluteToSelfRelativeSD.c)
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
  ACL Sacl; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  v2 = 0LL;
  P = 0LL;
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
      RtlCreateAcl(&Acl, 0xECu, 2u);
      RtlpAddKnownAce(&Acl, 2u, 2, 983103, (unsigned __int8 *)SeWorldSid, 0);
      RtlpAddKnownAce(&Acl, 2u, 2, 983103, (unsigned __int8 *)SeAllAppPackagesSid, 0);
      RtlpAddKnownAce(&Acl, 2u, 2, 983103, *(unsigned __int8 **)&SeRestrictedSid, 0);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 1;
      RtlAddMandatoryAce(&Sacl, v9, 0, SeLowMandatorySid, AceType, LabelSid);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
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
