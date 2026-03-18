/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C0150D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ @ 0x1C0157BB0 (-Extensibility_ExecuteMarshaledInterceptRequest@CMouseProcessor@@QEAAXXZ.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v0 )
    CMouseProcessor::Extensibility_ExecuteMarshaledInterceptRequest(v0);
}
