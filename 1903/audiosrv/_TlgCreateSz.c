/*
 * XREFs of _TlgCreateSz @ 0x18003BAD8
 * Callers:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180005344 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18004140C (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180044A68 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180047540 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180051388 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800BD6CC (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180123880 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180125DF4 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x180139670 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18013CF0C (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
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
