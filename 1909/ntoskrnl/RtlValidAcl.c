/*
 * XREFs of RtlValidAcl @ 0x1405DDC30
 * Callers:
 *     RtlAddAce @ 0x1405C8C00 (RtlAddAce.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SepCheckAcl @ 0x14061E528 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1406407B0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14069E9D4 (RtlAddMandatoryAce.c)
 *     SeValidSecurityDescriptor @ 0x1406C37F0 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406E0460 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1408D0280 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D08D4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408E32A4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E34B8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3618 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3774 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406E7C84 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1408D0DCC (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1408D0FD0 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1408D104C (RtlpValidObjectAce.c)
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
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
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
