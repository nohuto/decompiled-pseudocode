/*
 * XREFs of ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXW4SarmErrorEvent@@PEAI@Z @ 0x180123160
 * Callers:
 *     ?AddData@?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXW4SarmErrorEvent@@PEAI@Z @ 0x1801231B0 (-AddData@-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAXW4SarmErrorEvent@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::AddData(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
