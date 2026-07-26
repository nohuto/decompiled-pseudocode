/*
 * XREFs of _TlgCreateWsz @ 0x1C0014C14
 * Callers:
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEB_WE@Z @ 0x1C001CC38 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C007D9B4 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = (LPCWSTR)&unk_1C008968C;
  pDesc->Ptr = (unsigned __int64)pwsz;
  pDesc->Size = 2 * v2 + 2;
}
