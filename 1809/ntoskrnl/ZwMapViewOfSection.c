/*
 * XREFs of ZwMapViewOfSection @ 0x1401B8690
 * Callers:
 *     CmSiMapViewOfSection @ 0x14000F0A4 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x140178C58 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14067EE0C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14081A218 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CBCEC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF10 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408D8FFC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1408DDA2C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1408EE04C (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x1409BDC18 (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x1409C2418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
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
  return KiServiceInternal(SectionHandle, ProcessHandle, BaseAddress);
}
