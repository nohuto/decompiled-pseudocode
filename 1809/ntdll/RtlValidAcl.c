/*
 * XREFs of RtlValidAcl @ 0x180040E30
 * Callers:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800410A0 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1800415D0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x1800727A0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x18007BEC0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800883A0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1EC (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x1800EB29C (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800EB480 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800EB574 (RtlpValidCompoundAce.c)
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
  unsigned __int8 Sbz1; // al
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r10
  char *v14; // rax
  unsigned __int8 v15; // al
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
        v11 = *(_DWORD *)&v3[1].AclRevision & 1;
        v12 = 16 * v11 + 16;
        if ( (*(_DWORD *)&v3[1].AclRevision & 2) == 0 )
          v12 = 16 * v11;
        v13 = (unsigned int)v12;
        if ( v8 < v12 + 24 )
          return 0;
        v14 = (char *)v3 + ((*(_DWORD *)&v3[1].AclRevision & 2) != 0 ? 0x10 : 0);
        if ( v14[16 * v11 + 12] != 1 )
          return 0;
        v15 = v14[16 * v11 + 13];
        if ( v15 > 0xFu || v8 < v13 + 4 * ((unsigned __int64)v15 + 5) )
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
