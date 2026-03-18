/*
 * XREFs of ?InsertDependenciesInOrder@CScrollKeyframeAnimation@@UEAAX_K@Z @ 0x1801E05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollKeyframeAnimation::InsertDependenciesInOrder(CScrollKeyframeAnimation *this, __int64 a2)
{
  CInteractionTracker::InsertDependenciesForProperty(*((unsigned __int64 **)this + 66), a2, *((_DWORD *)this + 46));
}
