/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005B3AC
 * Callers:
 *     _CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_::CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0__::_1_::dtor$0 @ 0x14005B15A (_CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int_____ptr64_0_0_--CAggregateT.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005B48C (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_E?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14005B570 (--_E-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4Spati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x1400561BC (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x14005BB10 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spati.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *result; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  result = (struct _RTL_CRITICAL_SECTION *)&CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    result = (struct _RTL_CRITICAL_SECTION *)CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::Log(
                                               a1,
                                               a2);
  }
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  if ( v4 )
  {
    result = CSLock::`scalar deleting destructor'(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (struct _RTL_CRITICAL_SECTION *)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
