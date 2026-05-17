/*
 * XREFs of RtlFirstFreeAce @ 0x180040DD0
 * Callers:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlpInheritAcl2 @ 0x180043E9C (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x1800450E0 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlAddAce @ 0x1800727A0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x18007BEB0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x18007E3E0 (RtlQueryInformationAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x180088390 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1DC (RtlpAddKnownObjectAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  v3 = 0;
  *a2 = 0LL;
  v4 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v4 < (unsigned __int64)*(unsigned __int16 *)(a1 + 2) + a1 )
    {
      ++v3;
      v4 += *(unsigned __int16 *)(v4 + 2);
      if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v4 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v4;
    return 1;
  }
}
