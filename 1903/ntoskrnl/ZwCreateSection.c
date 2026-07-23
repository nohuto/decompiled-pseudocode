/*
 * XREFs of ZwCreateSection @ 0x1401C0A10
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140098F08 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14017F83C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x14061E910 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x14067AE28 (ExpGetGlobalLocaleSection.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14085411C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409095AC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409097E4 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B754 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14092BF74 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(SectionHandle);
}
