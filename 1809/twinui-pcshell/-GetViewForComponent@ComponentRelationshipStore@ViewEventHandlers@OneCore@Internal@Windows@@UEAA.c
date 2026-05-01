/*
 * XREFs of ?GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1803A64A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAPEAUIInspectable@@@Z @ 0x1803A6504 (-GetViewForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponent(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct IInspectable **a3)
{
  RTL_SRWLOCK *v3; // rbp
  unsigned int ViewForComponentNoLock; // ebx

  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  ViewForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponentNoLock(
                             (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                             a2,
                             a3);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return ViewForComponentNoLock;
}
