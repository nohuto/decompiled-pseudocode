/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C00A4CC0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00A4CE4 (-ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ.c)
 */

void ForceResetMouseButtonsDownState()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(MouseProcessor);
}
