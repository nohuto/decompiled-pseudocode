/*
 * XREFs of ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18000D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x18000DA14 (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x18000EB40 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 */

__int64 __fastcall ViewHierarchy::OnConnected(HANDLE *this, struct IMessageProxy *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this[8] == a2 )
  {
    ViewHierarchy::RemoveListListenerReference((ViewHierarchy *)this);
    ViewHierarchy::AddViewsOnProxyConnection((ViewHierarchy *)this);
  }
  if ( !SetEvent(this[24]) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v3);
    JUMPOUT(0x18000DA0BLL);
  }
  return 0LL;
}
