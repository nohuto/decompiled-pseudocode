/*
 * XREFs of RtlCopySid @ 0x1406583A0
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x140193CC0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x14031D624 (SepGetSidValuesDump.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     SepAdjustGroups @ 0x14061F6A4 (SepAdjustGroups.c)
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140620E2C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     SepSetTokenPackage @ 0x14065817C (SepSetTokenPackage.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAssignProcessQuotaBlock @ 0x140694668 (PspAssignProcessQuotaBlock.c)
 *     RtlAddMandatoryAce @ 0x14069E9D4 (RtlAddMandatoryAce.c)
 *     SepDuplicateSid @ 0x1406E4EEC (SepDuplicateSid.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 *     MiLoadHotPatchForUserSid @ 0x14088EA08 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140890B3C (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x1408D0280 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D08D4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1408E00C0 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2330 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1408E32A4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E34B8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3618 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3774 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
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
