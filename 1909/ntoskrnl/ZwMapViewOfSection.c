/*
 * XREFs of ZwMapViewOfSection @ 0x1401C1150
 * Callers:
 *     CmSiMapViewOfSection @ 0x1400ED4D8 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140915D2C (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B1B4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14092B9E8 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x1409F9864 (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C564 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C73C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
