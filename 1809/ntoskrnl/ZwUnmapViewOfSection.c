/*
 * XREFs of ZwUnmapViewOfSection @ 0x1401B86D0
 * Callers:
 *     RtlFileMapFree @ 0x1400F5144 (RtlFileMapFree.c)
 *     CmSiUnmapViewOfSection @ 0x14013608C (CmSiUnmapViewOfSection.c)
 *     RtlFileMapMapView @ 0x140178C58 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14067EE0C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14081A218 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1408CBCEC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF10 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1408D8FFC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1408DD514 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1408EE318 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1409BDAE4 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x1409C2418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, v2);
}
