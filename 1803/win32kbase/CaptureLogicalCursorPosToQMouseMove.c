/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1C0064870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0133FBC (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 */

void __fastcall CaptureLogicalCursorPosToQMouseMove(struct tagQ *a1)
{
  CMouseProcessor *v2; // rax

  v2 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v2 )
    CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(v2, a1);
}
