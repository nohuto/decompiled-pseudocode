/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005B48C
 * Callers:
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$3 @ 0x14005B36A (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$4 @ 0x14005B37D (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$4.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005B4FC (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??_E?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14005B5F0 (--_E-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x14005BB10 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spati.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Log(
        a1,
        v3);
    }
  }
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(
           a1,
           v3);
}
