/*
 * XREFs of ZwUnmapViewOfSection @ 0x1401C1190
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140137FE8 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1401544C8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14070BC7C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14085381C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140915D2C (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14091ACDC (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14092BCBC (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1409F9720 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C564 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C73C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
