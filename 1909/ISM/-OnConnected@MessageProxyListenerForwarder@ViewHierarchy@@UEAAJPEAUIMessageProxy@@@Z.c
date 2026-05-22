/*
 * XREFs of ?OnConnected@MessageProxyListenerForwarder@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180059670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewHierarchy::MessageProxyListenerForwarder::OnConnected(
        ViewHierarchy::MessageProxyListenerForwarder *this,
        struct IMessageProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           a2);
}
