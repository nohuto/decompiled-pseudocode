/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1405BDE84
 * Callers:
 *     NtCreateTokenEx @ 0x1405BD550 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x14060A7C0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14060A9A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     NtAdjustGroupsToken @ 0x1406B6B70 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
