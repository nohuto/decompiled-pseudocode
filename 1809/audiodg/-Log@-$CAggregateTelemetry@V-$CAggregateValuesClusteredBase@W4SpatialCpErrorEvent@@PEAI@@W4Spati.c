/*
 * XREFs of ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x14005BB10
 * Callers:
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005B3AC (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4Spatia.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005B48C (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Log(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
  return result;
}
