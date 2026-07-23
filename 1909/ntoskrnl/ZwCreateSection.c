/*
 * XREFs of ZwCreateSection @ 0x1401C1590
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1400ED5AC (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14017FF2C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExpGetGlobalLocaleSection @ 0x1406D35B8 (ExpGetGlobalLocaleSection.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140915D2C (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B1B4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14092B9E8 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
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
