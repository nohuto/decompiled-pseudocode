/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1405BCE84
 * Callers:
 *     NtCreateTokenEx @ 0x1405BC550 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x1406097C0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406099A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x140654F70 (NtCreateLowBoxToken.c)
 *     NtAdjustGroupsToken @ 0x1406B58D0 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1406C6B60 (NtFilterToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
