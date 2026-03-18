/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14061DCF4
 * Callers:
 *     NtCreateTokenEx @ 0x14061D360 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x14061F370 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1406207D0 (NtFilterToken.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x1406796D0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406798B0 (NtAdjustPrivilegesToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
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
