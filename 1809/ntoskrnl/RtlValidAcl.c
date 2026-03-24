/*
 * XREFs of RtlValidAcl @ 0x140631700
 * Callers:
 *     RtlValidRelativeSecurityDescriptor @ 0x1405AD180 (RtlValidRelativeSecurityDescriptor.c)
 *     SepCheckAcl @ 0x1405BD9A0 (SepCheckAcl.c)
 *     RtlAddAce @ 0x1405CAE40 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x1406308A0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x14069B990 (RtlValidSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x14069D750 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406CC650 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727930 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140892700 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D64 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408A6458 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6674 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6930 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406C33DC (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1408932FC (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x140893500 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14089357C (RtlpValidObjectAce.c)
 */

BOOLEAN __stdcall RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  unsigned int v3; // ebp
  PACL v4; // rbx
  int v5; // r15d
  ACL *v6; // rdx
  USHORT *v7; // rsi
  unsigned __int64 v8; // rcx
  UCHAR AclRevision; // dl
  UCHAR Sbz1; // al
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = 0;
      v4 = Acl + 1;
      if ( !Acl->AceCount )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v4->AceCount >= (USHORT *)v6 )
          break;
        v7 = &v4->AclSize;
        if ( (USHORT *)(((unsigned __int64)&v4->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v4->AclSize )
          break;
        v8 = *v7;
        if ( (PACL)((char *)v4 + v8) > v6 )
          break;
        AclRevision = v4->AclRevision;
        if ( v4->AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[1].AclRevision != 1 )
            return 0;
          Sbz1 = v4[1].Sbz1;
          if ( Sbz1 > 0xFu || v8 < 4 * (unsigned __int64)Sbz1 + 16 )
            return 0;
        }
        else if ( AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(AclRevision - 5) <= 3u
               || (unsigned __int8)(AclRevision - 11) <= 1u
               || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( AclRevision == 18 )
        {
          result = RtlpValidAttributeAce(v4);
          if ( !result )
            return result;
        }
        else if ( AclRevision == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 = (PACL)((char *)v4 + *v7);
        if ( v3 >= Acl->AceCount )
          return 1;
      }
    }
  }
  return 0;
}
