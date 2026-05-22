/*
 * XREFs of ?OnPointerInfoFrame@InteractionContext@EdgyProcessorTarget@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800CE180
 * Callers:
 *     <none>
 * Callees:
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1800CDF68 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::InteractionContext::OnPointerInfoFrame(
        EdgyProcessorTarget::InteractionContext *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 3), 1LL, a2, a3) < 0 )
    EdgyProcessorTarget::InteractionContext::Configure(this);
  return 0LL;
}
