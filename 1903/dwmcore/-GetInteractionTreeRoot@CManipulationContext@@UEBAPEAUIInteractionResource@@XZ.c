/*
 * XREFs of ?GetInteractionTreeRoot@CManipulationContext@@UEBAPEAUIInteractionResource@@XZ @ 0x1800DB360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionTreeRoot(CManipulationContext *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 7);
}
