/*
 * XREFs of RtlCopySid @ 0x14064A350
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x140189520 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1402FFB60 (SepGetSidValuesDump.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SepDuplicateSid @ 0x14064A160 (SepDuplicateSid.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     SepAdjustGroups @ 0x1406B6EA8 (SepAdjustGroups.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CF9B8 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140858B68 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x140893960 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140893FC4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1408A3104 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A5564 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1408A76B8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A78D4 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A7A34 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A7B90 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
