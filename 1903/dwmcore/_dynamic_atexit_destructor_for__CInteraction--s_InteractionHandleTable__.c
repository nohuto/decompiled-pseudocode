/*
 * XREFs of _dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__ @ 0x1800EDC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__()
{
  CInteraction::s_InteractionHandleTable = &HANDLE_TABLE::`vftable';
  operator delete(lpMem);
}
