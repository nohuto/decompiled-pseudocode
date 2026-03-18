/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x1801D7EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  struct CWeakResourceReference **v6; // rcx

  v4 = *((_QWORD *)this + 38);
  v6 = 0LL;
  if ( v4 )
    v6 = *(struct CWeakResourceReference ***)(v4 + 16);
  CInteractionTracker::InsertDependenciesForAxis(v6, a2, *((_DWORD *)this + 73), a4);
}
