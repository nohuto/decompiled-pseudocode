/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406B0CB0 (RtlAbsoluteToSelfRelativeSD.c)
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
