/*
 * XREFs of RtlFirstFreeAce @ 0x1405C8830
 * Callers:
 *     RtlQueryInformationAcl @ 0x1405C7490 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405C8700 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x1405DB610 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x140680534 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406DF150 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140758BB0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1408D0980 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D0CA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D0FD4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408E399C (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E3BB0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3D10 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3E6C (SddlAddScopedPolicyIDAce.c)
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
