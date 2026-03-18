/*
 * XREFs of RtlCopySid @ 0x140644850
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1401934E0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x14031DBD4 (SepGetSidValuesDump.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SepAdjustGroups @ 0x14061DB88 (SepAdjustGroups.c)
 *     SepGetLowBoxNumberEntry @ 0x14061E218 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14061F30C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     SepSetTokenPackage @ 0x14064462C (SepSetTokenPackage.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406446E0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAssignProcessQuotaBlock @ 0x140667248 (PspAssignProcessQuotaBlock.c)
 *     RtlAddMandatoryAce @ 0x140680534 (RtlAddMandatoryAce.c)
 *     SepDuplicateSid @ 0x1406E3A3C (SepDuplicateSid.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x140758BB0 (RtlAddProcessTrustLabelAce.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x14089131C (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x1408D0980 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D0CA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D0FD4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1408E07C0 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2A30 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1408E399C (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E3BB0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3D10 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3E6C (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
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
