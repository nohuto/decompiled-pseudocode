/*
 * XREFs of UpdateGlobalCursorOwner @ 0x1C0184CA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0083CC4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 */

void __fastcall UpdateGlobalCursorOwner(struct CInputDest *a1, struct tagPOINT *a2)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::UpdateGlobalCursorOwner(MouseProcessor, a1, a2, 0LL);
}
