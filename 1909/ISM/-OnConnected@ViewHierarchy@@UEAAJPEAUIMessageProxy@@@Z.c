/*
 * XREFs of ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180010A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180010A88 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x180010BE8 (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x180010CA8 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 */

__int64 __fastcall ViewHierarchy::OnConnected(wil::details **this, struct IMessageProxy *a2)
{
  if ( this[8] == a2 )
  {
    ViewHierarchy::RemoveListListenerReference((ViewHierarchy *)this);
    ViewHierarchy::AddViewsOnProxyConnection((ViewHierarchy *)this);
  }
  wil::details::SetEvent(this[24], a2);
  return 0LL;
}
