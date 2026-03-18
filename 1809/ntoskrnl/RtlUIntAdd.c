/*
 * XREFs of RtlUIntAdd @ 0x140001568
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C4A10 (EtwpSetProviderTraitsCommon.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x1405DBC90 (CmpIncrementCachedSecurityRefcount.c)
 *     sub_1406244D4 @ 0x1406244D4 (sub_1406244D4.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     sub_1406917CC @ 0x1406917CC (sub_1406917CC.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     WmipProbeWnodeWorker @ 0x1406AA1CC (WmipProbeWnodeWorker.c)
 *     VrpUpdateKeyInformation @ 0x14080CF94 (VrpUpdateKeyInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538F4 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B84 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E98 (EtwpGetTraceGuidInfo.c)
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
