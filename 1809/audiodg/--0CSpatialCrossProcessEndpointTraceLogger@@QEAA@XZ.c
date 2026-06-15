/*
 * XREFs of ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14005B19C
 * Callers:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400592D4 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@_K11@Z @ 0x14005B0B0 (--0-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateVal.c)
 *     ?Clear@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@UEAAXXZ @ 0x14005BAC0 (-Clear@-$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
CSpatialCrossProcessEndpointTraceLogger *__fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger(
        CSpatialCrossProcessEndpointTraceLogger *this)
{
  char *v2; // rsi
  _QWORD *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  *(_QWORD *)this = &CSpatialCrossProcessEndpointTraceLogger::`vftable';
  v2 = (char *)this + 8;
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_SpatialCPTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &g_SpatialCPTelemetryProvider;
  *((_QWORD *)this + 17) = (char *)this + 8;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 12) = &CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::`vftable';
  v3 = (_QWORD *)((char *)this + 160);
  *((_QWORD *)this + 20) = &CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::`vftable';
  *((_DWORD *)this + 42) = -1;
  *(_QWORD *)((char *)this + 172) = 0LL;
  memset_0((char *)this + 184, 0, 0x38uLL);
  CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::Clear(v3);
  *v3 = &CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::`vftable';
  v3[11] = v2;
  v3[10] = &g_SpatialCPTelemetryProvider;
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
    (__int64)this + 256,
    (__int64)this + 24);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
    (__int64)this + 352,
    (__int64)this + 96);
  *((_QWORD *)this + 56) = &CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  *((_QWORD *)this + 57) = v3;
  *((_WORD *)this + 232) = 0;
  *((_QWORD *)this + 59) = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28uLL);
  v5 = v4;
  if ( v4 )
    InitializeCriticalSection(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 59) = v5;
  *((_QWORD *)this + 56) = &CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  ((void (__fastcall *)(char *, __int64))*(&CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable'
                                         + 5))(
    (char *)this + 448,
    180000LL);
  return this;
}
