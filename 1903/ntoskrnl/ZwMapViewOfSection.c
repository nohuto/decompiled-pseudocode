/*
 * XREFs of ZwMapViewOfSection @ 0x1401C05D0
 * Callers:
 *     CmSiMapViewOfSection @ 0x140098E34 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14085411C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409095AC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409097E4 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14091B754 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14092BF74 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x1409F9954 (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C038 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C210 (CmpSetSystemBiosInformation.c)
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
