/*
 * XREFs of ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140053E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Flush(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
  return result;
}
