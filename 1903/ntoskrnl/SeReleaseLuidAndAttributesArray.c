/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14061C1E4
 * Callers:
 *     NtCreateTokenEx @ 0x14061B850 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x14061D860 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x14061ECB0 (NtFilterToken.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x140673FC0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406741A0 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
