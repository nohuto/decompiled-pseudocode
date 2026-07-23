/*
 * XREFs of RtlFirstFreeAce @ 0x180040DD0
 * Callers:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlpInheritAcl2 @ 0x180043E9C (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x1800450E0 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlAddAce @ 0x1800727A0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x18007BEC0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x18007E3F0 (RtlQueryInformationAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800883A0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1EC (RtlpAddKnownObjectAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v3; // ecx
  PACL v4; // r8

  v3 = 0;
  *FirstFree = 0LL;
  v4 = Acl + 1;
  if ( Acl->AceCount )
  {
    while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v3;
      v4 = (PACL)((char *)v4 + v4->AclSize);
      if ( v3 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v4;
    return 1;
  }
}
