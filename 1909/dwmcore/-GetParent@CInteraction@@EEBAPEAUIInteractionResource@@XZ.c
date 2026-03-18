/*
 * XREFs of ?GetParent@CInteraction@@EEBAPEAUIInteractionResource@@XZ @ 0x1800DB840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CInteraction::GetParent(CInteraction *this)
{
  return (struct IInteractionResource *)*((_QWORD *)this + 26);
}
