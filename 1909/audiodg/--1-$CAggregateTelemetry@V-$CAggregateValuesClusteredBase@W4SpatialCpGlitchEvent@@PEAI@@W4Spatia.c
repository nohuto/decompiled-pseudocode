/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x14005941C
 * Callers:
 *     _CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int___0_0_::CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int___0_0__::_1_::dtor$0 @ 0x1400591CA (_CAggregateTelemetryClustered_enum_SpatialCpGlitchEvent_unsigned_int___0_0_--CAggregateTelemetry.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400594FC (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_E?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140059600 (--_E-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4Spati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140053B6C (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140053EC0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

void **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  void **result; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rcx

  result = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpErrorEvent,unsigned int *>,enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  if ( *(_BYTE *)(a1 + 16) )
    result = (void **)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
                        (_QWORD *)a1,
                        1);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  if ( v3 )
  {
    result = (void **)CSLock::`scalar deleting destructor'(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v4 )
    {
      result = (void **)(**v4)(v4, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
