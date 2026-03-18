/*
 * XREFs of _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x1800EDC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__()
{
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll();
}
