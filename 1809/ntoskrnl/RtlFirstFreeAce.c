/*
 * XREFs of RtlFirstFreeAce @ 0x1406309F0
 * Callers:
 *     RtlQueryInformationAcl @ 0x1405C9890 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405CAE40 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14062ED40 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1406308A0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406CC650 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727930 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140892700 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D64 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408A6458 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6674 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6930 (SddlAddScopedPolicyIDAce.c)
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
