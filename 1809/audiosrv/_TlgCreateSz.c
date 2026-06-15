/*
 * XREFs of _TlgCreateSz @ 0x180009C20
 * Callers:
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180012FE4 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180016028 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180016678 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800AECBC (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180110954 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180116F30 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180119334 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x180130730 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     PdcpFireClientCallWatchdog @ 0x180134AC0 (PdcpFireClientCallWatchdog.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x180135C0C (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = MultiByteStr;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
