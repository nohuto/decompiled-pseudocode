/*
 * XREFs of ?OnDisconnected@MessageProxyListenerForwarder@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180059910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewHierarchy::MessageProxyListenerForwarder::OnDisconnected(
        ViewHierarchy::MessageProxyListenerForwarder *this,
        struct IMessageProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           a2);
}
