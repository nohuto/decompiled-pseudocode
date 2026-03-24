/*
 * XREFs of ZwCreateSection @ 0x1401B8AD0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x14000F16C (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x140176BFC (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140178C58 (RtlFileMapMapView.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     ExpGetGlobalLocaleSection @ 0x14067A570 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067EE0C (PiLookupInDDB.c)
 *     NtGetNlsSectionPtr @ 0x1406C4DE0 (NtGetNlsSectionPtr.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407403F4 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14081A218 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CBCEC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF10 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408D8FFC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DDA2C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408EE04C (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
