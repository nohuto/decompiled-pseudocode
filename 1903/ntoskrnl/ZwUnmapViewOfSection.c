/*
 * XREFs of ZwUnmapViewOfSection @ 0x1401C0610
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1401379A0 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x140153E28 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14085411C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409095AC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409097E4 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14091B27C (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14092C248 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1409F9810 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A0C038 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C210 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
