/*
 * XREFs of RtlFirstFreeAce @ 0x140631A10
 * Callers:
 *     RtlQueryInformationAcl @ 0x1405CA890 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405CBE40 (RtlAddAce.c)
 *     RtlpInheritAcl2 @ 0x14062FD60 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1406CD8F0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140893960 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140893FC4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408A76B8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A78D4 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A7A34 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A7B90 (SddlAddScopedPolicyIDAce.c)
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
