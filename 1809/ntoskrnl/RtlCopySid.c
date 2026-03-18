/*
 * XREFs of RtlCopySid @ 0x1406491B0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1401893C0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1402FF870 (SepGetSidValuesDump.c)
 *     SeQueryUserSidToken @ 0x1406102AC (SeQueryUserSidToken.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     SepDuplicateSid @ 0x140648FC0 (SepDuplicateSid.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAssignProcessQuotaBlock @ 0x14065A154 (PspAssignProcessQuotaBlock.c)
 *     SepSetTokenPackage @ 0x14065BD08 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C260 (SepGetLowBoxNumberEntry.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     SepAdjustGroups @ 0x1406B5C28 (SepAdjustGroups.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CE738 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727950 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C58 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140857928 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x140892720 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D84 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1408A1EC4 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4324 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1408A6478 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6694 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67F4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6950 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
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
