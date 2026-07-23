/*
 * XREFs of RtlUIntAdd @ 0x140001568
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C5A10 (EtwpSetProviderTraitsCommon.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x1405DCC90 (CmpIncrementCachedSecurityRefcount.c)
 *     sub_1406254F4 @ 0x1406254F4 (sub_1406254F4.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_14069296C @ 0x14069296C (sub_14069296C.c)
 *     SeValidSecurityDescriptor @ 0x14069E910 (SeValidSecurityDescriptor.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     WmipProbeWnodeWorker @ 0x1406AB44C (WmipProbeWnodeWorker.c)
 *     VrpUpdateKeyInformation @ 0x14080E174 (VrpUpdateKeyInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140854B34 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B6E24 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B7138 (EtwpGetTraceGuidInfo.c)
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
