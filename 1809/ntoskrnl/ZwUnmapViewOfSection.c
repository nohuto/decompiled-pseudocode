/*
 * XREFs of ZwUnmapViewOfSection @ 0x1401B8830
 * Callers:
 *     RtlFileMapFree @ 0x1400F51C4 (RtlFileMapFree.c)
 *     CmSiUnmapViewOfSection @ 0x14013618C (CmSiUnmapViewOfSection.c)
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14067FFCC (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14081B418 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CCFAC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CD1D0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408DA2BC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1408DE7D4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1408EF5D8 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1409BEAE4 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x1409C3418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
