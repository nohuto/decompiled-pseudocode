/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18012F6D0
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x18009D3B0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        int a2)
{
  return AgileRegistrationList::Unregister(this + 15, a2);
}
