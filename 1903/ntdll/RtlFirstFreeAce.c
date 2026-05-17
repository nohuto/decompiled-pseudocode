/*
 * XREFs of RtlFirstFreeAce @ 0x180014B00
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 *     sub_18001167C @ 0x18001167C (sub_18001167C.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     RtlAddAce @ 0x1800689C0 (RtlAddAce.c)
 *     RtlDeleteAce @ 0x1800775C0 (RtlDeleteAce.c)
 *     RtlQueryInformationAcl @ 0x180077F10 (RtlQueryInformationAcl.c)
 *     sub_18008817C @ 0x18008817C (sub_18008817C.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008AEA0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6EC0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E70D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7580 (RtlAddScopedPolicyIDAce.c)
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
