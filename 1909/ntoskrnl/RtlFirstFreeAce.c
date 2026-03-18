/*
 * XREFs of RtlFirstFreeAce @ 0x1405C8D30
 * Callers:
 *     RtlQueryInformationAcl @ 0x1405C7990 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405C8C00 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x1405DBDB0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x14069E9D4 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406E0460 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1408D0280 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D08D4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408E32A4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E34B8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3618 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3774 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlFirstFreeAce(PACL Acl, PACE *Ace)
{
  unsigned int v3; // ecx
  struct _ACE *v4; // r8

  v3 = 0;
  *Ace = 0LL;
  v4 = (struct _ACE *)&Acl[1];
  if ( Acl->AceCount )
  {
    while ( v4 < (struct _ACE *)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (struct _ACE *)((char *)v4 + v4->Header.AceSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= (struct _ACE *)((char *)Acl + Acl->AclSize) )
      *Ace = v4;
    return 1;
  }
}
