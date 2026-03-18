/*
 * XREFs of PostPendingMouseMove @ 0x1C00425B0
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C00394C0 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C00425DC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::PostPendingMouseMove(MouseProcessor, a1);
}
