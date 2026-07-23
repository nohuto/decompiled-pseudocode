/*
 * XREFs of ZwCreateSection @ 0x1401B8C30
 * Callers:
 *     CmSiCreateSectionForFile @ 0x14000F16C (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x140176CFC (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     ExpGetGlobalLocaleSection @ 0x14067B730 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x14067FFCC (PiLookupInDDB.c)
 *     NtGetNlsSectionPtr @ 0x1406C6080 (NtGetNlsSectionPtr.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407415E4 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14081B418 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CCFAC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CD1D0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408DA2BC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DECEC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408EF30C (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
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
