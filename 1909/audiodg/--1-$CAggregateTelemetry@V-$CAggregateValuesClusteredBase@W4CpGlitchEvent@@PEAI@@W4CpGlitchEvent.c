/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140053914
 * Callers:
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0_::CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0__::_1_::dtor$0 @ 0x14001AFD8 (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0_--CAggregateTelemetryCluster.c)
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140053984 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140053A30 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140053B6C (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140053EC0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

void **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  void **result; // rax
  CSLock *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  result = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    result = (void **)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
                        a1,
                        a2);
  }
  v4 = *(CSLock **)(a1 + 24);
  if ( v4 )
  {
    result = (void **)CSLock::`scalar deleting destructor'(v4, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (void **)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
