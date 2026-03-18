/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1C0073CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0073D0C (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CaptureLogicalCursorPosToQMouseMove(struct tagQ *a1)
{
  CMouseProcessor *v2; // rax

  v2 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( v2 )
    CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(v2, a1);
}
