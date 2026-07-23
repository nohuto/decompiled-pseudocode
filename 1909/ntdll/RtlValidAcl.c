/*
 * XREFs of RtlValidAcl @ 0x180014E40
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180014B60 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x180014D00 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x180068C10 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x180077A40 (RtlDeleteAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008881C (RtlpAddKnownObjectAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008B540 (RtlAddProcessTrustLabelAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E6FB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E71C0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7670 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x1800E83A8 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800E858C (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800E8680 (RtlpValidCompoundAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r15
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  ACL *v6; // rcx
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int8 AclRevision; // cl
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r10
  char *v13; // rax
  unsigned __int8 v14; // al
  unsigned __int8 Sbz1; // al
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    v4 = 0;
    v5 = 1730063;
    while ( 1 )
    {
      if ( v4 >= Acl->AceCount )
        return 1;
      v6 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount >= (unsigned __int16 *)v6 )
        return 0;
      v7 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v8 = *v7;
      if ( (PACL)((char *)v3 + v8) > v6 )
        return 0;
      AclRevision = v3->AclRevision;
      if ( v3->AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
      {
        if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
          return 0;
        if ( (unsigned int)v8 < 0x10 )
          return 0;
        if ( v3[1].AclRevision != 1 )
          return 0;
        Sbz1 = v3[1].Sbz1;
        if ( Sbz1 > 0xFu || v8 < 4 * (unsigned __int64)Sbz1 + 16 )
          return 0;
      }
      else if ( AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(AclRevision - 5) <= 3u
             || (unsigned __int8)(AclRevision - 11) <= 1u
             || (unsigned __int8)(AclRevision - 15) <= 1u )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 || (unsigned int)v8 < 0xC )
          return 0;
        v10 = *(_DWORD *)&v3[1].AclRevision & 1;
        v11 = 16 * v10 + 16;
        if ( (*(_DWORD *)&v3[1].AclRevision & 2) == 0 )
          v11 = 16 * v10;
        v12 = (unsigned int)v11;
        if ( v8 < v11 + 24 )
          return 0;
        v13 = (char *)v3 + ((*(_DWORD *)&v3[1].AclRevision & 2) != 0 ? 0x10 : 0);
        if ( v13[16 * v10 + 12] != 1 )
          return 0;
        v14 = v13[16 * v10 + 13];
        if ( v14 > 0xFu || v8 < v12 + 4 * ((unsigned __int64)v14 + 5) )
          return 0;
      }
      else if ( AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( AclRevision == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v8 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v7);
      ++v4;
    }
  }
  return 0;
}
