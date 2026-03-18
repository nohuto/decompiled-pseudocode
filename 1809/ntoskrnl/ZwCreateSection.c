/*
 * XREFs of ZwCreateSection @ 0x1401B8AB0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x14000F16C (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x140176BDC (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140178C38 (RtlFileMapMapView.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     ExpGetGlobalLocaleSection @ 0x14067A590 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067EE2C (PiLookupInDDB.c)
 *     NtGetNlsSectionPtr @ 0x1406C4E00 (NtGetNlsSectionPtr.c)
 *     ExInitializeLeapSecondData @ 0x140733FE0 (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14081A238 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CBD0C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF30 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408D901C (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DDA4C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408EE06C (AslpFileLargeMapCreate.c)
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
