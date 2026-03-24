/*
 * XREFs of RtlUIntAdd @ 0x140001568
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C4A10 (EtwpSetProviderTraitsCommon.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x1405DBC90 (CmpIncrementCachedSecurityRefcount.c)
 *     sub_1406244D4 @ 0x1406244D4 (sub_1406244D4.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_1406917AC @ 0x1406917AC (sub_1406917AC.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0200 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E60 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     WmipProbeWnodeWorker @ 0x1406AA1AC (WmipProbeWnodeWorker.c)
 *     VrpUpdateKeyInformation @ 0x14080CF74 (VrpUpdateKeyInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538D4 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B64 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E78 (EtwpGetTraceGuidInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}
