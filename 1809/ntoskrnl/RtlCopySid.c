/*
 * XREFs of RtlCopySid @ 0x140649190
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1401893E0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1402FF970 (SepGetSidValuesDump.c)
 *     SeQueryUserSidToken @ 0x1406102AC (SeQueryUserSidToken.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     SepDuplicateSid @ 0x140648FA0 (SepDuplicateSid.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649030 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAssignProcessQuotaBlock @ 0x14065A134 (PspAssignProcessQuotaBlock.c)
 *     SepSetTokenPackage @ 0x14065BCE8 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C240 (SepGetLowBoxNumberEntry.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     SepAdjustGroups @ 0x1406B5C08 (SepAdjustGroups.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CE718 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727930 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407495B0 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C38 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140857908 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x140892700 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D64 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1408A1EA4 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4304 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1408A6458 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6674 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6930 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
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
