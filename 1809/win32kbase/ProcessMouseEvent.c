/*
 * XREFs of ProcessMouseEvent @ 0x1C002F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void ProcessMouseEvent()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v0 )
    CMouseProcessor::ProcessMouseEvent(v0);
}
