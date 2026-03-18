/*
 * XREFs of UpdateGlobalCursorOwner @ 0x1C012ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0039794 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateGlobalCursorOwner(struct CInputDest *a1, struct tagPOINT *a2)
{
  CMouseProcessor *v4; // rax

  v4 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v4 )
    CMouseProcessor::UpdateGlobalCursorOwner(v4, a1, a2, 0LL);
}
