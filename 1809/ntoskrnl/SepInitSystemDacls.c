/*
 * XREFs of SepInitSystemDacls @ 0x1409AE07C
 * Callers:
 *     SepVariableInitialization @ 0x1409AC3EC (SepVariableInitialization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS SepInitSystemDacls()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int v3; // ecx
  int v4; // r10d
  ULONG v5; // esi
  int v6; // edx
  ULONG v7; // edi
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  ULONG v10; // ebp
  ULONG v11; // r14d
  ACL *v12; // rdi
  ULONG v13; // edx
  ACL *v14; // rsi
  ULONG v15; // edx
  ACL *v16; // r15
  ACL *v17; // r13
  ULONG v18; // edx
  ACL *v19; // r12
  PSID v20; // rbx
  ACL *v21; // r14
  PSID v22; // rbx
  PSID v23; // rbp
  void *v24; // rsi
  ULONG v25; // edx
  UCHAR v27; // [rsp+20h] [rbp-58h]
  PSID LabelSid; // [rsp+28h] [rbp-50h]
  ULONG AclLength; // [rsp+80h] [rbp+8h]
  ACL *AclLengtha; // [rsp+80h] [rbp+8h]
  ACL *Acl; // [rsp+88h] [rbp+10h]
  PACL Acla; // [rsp+88h] [rbp+10h]
  ACL *Dacl; // [rsp+90h] [rbp+18h]
  ACL *v34; // [rsp+98h] [rbp+20h]

  v0 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v1 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v2 = 4 * (v1 + v0) + 48;
  v3 = *((unsigned __int8 *)SeWorldSid + 1);
  v4 = *(unsigned __int8 *)(*(_QWORD *)&SeRestrictedSid + 1LL);
  v5 = v2 + 4 * v3 + 20;
  v6 = *((unsigned __int8 *)SeLocalServiceSid + 1);
  v7 = v5 + 4 * (v4 + 5);
  AclLength = v7;
  v8 = 4 * (v0 + v1 + v6 + v3) + 88;
  v9 = 4 * (v0 + v1 + *((unsigned __int8 *)SeOwnerRightsSid + 1)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *((unsigned __int8 *)SeAllAppPackagesSid + 1)
       + v6
       + *((unsigned __int8 *)SeServiceSid + 1)
       + *((unsigned __int8 *)SeNetworkServiceSid + 1));
  v11 = 4 * *((unsigned __int8 *)SeMediumMandatorySid + 1) + 28;
  SePublicDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicDefaultUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SePublicOpenDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicOpenUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SeSystemDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x63416553u);
  SeLocalServicePublicDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v8, 0x63416553u);
  SeAtomDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SepDefaultCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x63416553u);
  SepDefaultRecoveryCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x63416553u);
  SeMediumSacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x63416553u);
  RtlCreateAcl(SePublicDefaultDacl, v5, 2u);
  v12 = SePublicDefaultUnrestrictedDacl;
  Dacl = SePublicDefaultUnrestrictedDacl;
  RtlCreateAcl(SePublicDefaultUnrestrictedDacl, AclLength, 2u);
  v13 = v5;
  v14 = SePublicOpenDacl;
  v34 = SePublicOpenDacl;
  RtlCreateAcl(SePublicOpenDacl, v13, 2u);
  Acl = SePublicOpenUnrestrictedDacl;
  RtlCreateAcl(SePublicOpenUnrestrictedDacl, AclLength, 2u);
  RtlCreateAcl(SeSystemDefaultDacl, v2, 2u);
  v15 = v8;
  v16 = SeLocalServicePublicDacl;
  RtlCreateAcl(SeLocalServicePublicDacl, v15, 2u);
  v17 = SeAtomDacl;
  RtlCreateAcl(SeAtomDacl, AclLength, 2u);
  v18 = v9;
  v19 = SepDefaultCapeDacl;
  RtlCreateAcl(SepDefaultCapeDacl, v18, 2u);
  AclLengtha = SepDefaultRecoveryCapeDacl;
  RtlCreateAcl(SepDefaultRecoveryCapeDacl, v10, 2u);
  RtlCreateAcl(SeMediumSacl, v11, 2u);
  v20 = SeWorldSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x20000000u, SeWorldSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x20000000u, v20);
  RtlAddAccessAllowedAce(v14, 2u, 0xE0000000, v20);
  v21 = Acl;
  RtlAddAccessAllowedAce(Acl, 2u, 0xE0000000, v20);
  RtlAddAccessAllowedAce(v16, 2u, 0x20000000u, v20);
  RtlAddAccessAllowedAce(v17, 2u, 0x20000u, v20);
  v22 = SeLocalSystemSid;
  Acla = (PACL)SeLocalSystemSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, v22);
  RtlAddAccessAllowedAce(v14, 2u, 0x10000000u, v22);
  RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v22);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0x10000000u, v22);
  RtlAddAccessAllowedAce(v16, 2u, 0x10000000u, v22);
  RtlAddAccessAllowedAce(v17, 2u, 0x1F0000u, v22);
  v23 = SeAliasAdminsSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, v23);
  RtlAddAccessAllowedAce(v14, 2u, 0x10000000u, v23);
  RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v23);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0xA0020000, v23);
  RtlAddAccessAllowedAce(v16, 2u, 0x10000000u, v23);
  RtlAddAccessAllowedAce(v17, 2u, 0x1F0000u, v23);
  v24 = *(void **)&SeRestrictedSid;
  RtlAddAccessAllowedAce(v12, 2u, 0x20000000u, *(PSID *)&SeRestrictedSid);
  RtlAddAccessAllowedAce(v21, 2u, 0xA0000000, v24);
  RtlAddAccessAllowedAce(v17, 2u, 0x20000u, v24);
  RtlAddAccessAllowedAce(v16, 2u, 0x10000000u, SeLocalServiceSid);
  RtlAddAccessAllowedAce(v19, 2u, 0x1FFFFFu, v22);
  RtlAddAccessAllowedAce(v19, 2u, 0x1FFFFFu, v23);
  RtlAddAccessAllowedAce(v19, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, Acla);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, v23);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, SeLocalServiceSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, SeNetworkServiceSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, v24);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, SeServiceSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1200A9u, SeAllAppPackagesSid);
  LODWORD(LabelSid) = 2;
  RtlAddMandatoryAce(SeMediumSacl, v25, 0, (ULONG)SeMediumMandatorySid, v27, LabelSid);
  SePublicDefaultSd = (__int64)&SepPublicDefaultSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultSd, 1u, SePublicDefaultDacl, 0);
  SePublicDefaultUnrestrictedSd = (__int64)&SepPublicDefaultUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u, Dacl, 0);
  SePublicOpenSd = (__int64)&SepPublicOpenSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenSd, 1u, v34, 0);
  SePublicOpenUnrestrictedSd = (__int64)&SepPublicOpenUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u, v21, 0);
  SeSystemDefaultSd = &SepSystemDefaultSd;
  RtlCreateSecurityDescriptor(&SepSystemDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(SeSystemDefaultSd, 1u, SeSystemDefaultDacl, 0);
  SeLocalServicePublicSd = (__int64)&SepLocalServicePublicSd;
  RtlCreateSecurityDescriptor(&SepLocalServicePublicSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepLocalServicePublicSd, 1u, v16, 0);
  SeAtomSd = (__int64)&SepAtomSd;
  RtlCreateSecurityDescriptor(&SepAtomSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepAtomSd, 1u, v17, 0);
  SeDefaultCapeSd = (__int64)&SepDefaultCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultCapeSd, 1u, v19, 0);
  RtlSetOwnerSecurityDescriptor(&SepDefaultCapeSd, Acla, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultCapeSd, Acla, 0);
  SeDefaultRecoveryCapeSd = (__int64)&SepDefaultRecoveryCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u, AclLengtha, 0);
  RtlSetOwnerSecurityDescriptor(&SepDefaultRecoveryCapeSd, Acla, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultRecoveryCapeSd, Acla, 0);
  SeNullDaclSd = &SepNullDaclSd;
  RtlCreateSecurityDescriptor(&SepNullDaclSd, 1u);
  SeMediumDaclSd = &SepMediumDaclSd;
  RtlCreateSecurityDescriptor(&SepMediumDaclSd, 1u);
  RtlSetSaclSecurityDescriptor(&SepMediumDaclSd, 1u, SeMediumSacl, 0);
  RtlSetOwnerSecurityDescriptor(&SepMediumDaclSd, Acla, 0);
  return RtlSetGroupSecurityDescriptor(&SepMediumDaclSd, Acla, 0);
}
