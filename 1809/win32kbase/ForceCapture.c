/*
 * XREFs of ForceCapture @ 0x1C0093980
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00939D4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ForceCapture(unsigned int a1, struct tagINPUTDEST *a2)
{
  CMouseProcessor *v4; // rax

  v4 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v4 && (a2 || a1 == 3) )
    CMouseProcessor::ForceMouseOwner(v4, a2, a1);
}
