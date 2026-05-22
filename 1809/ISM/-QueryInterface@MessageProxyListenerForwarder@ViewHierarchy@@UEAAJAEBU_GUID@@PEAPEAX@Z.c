/*
 * XREFs of ?QueryInterface@MessageProxyListenerForwarder@ViewHierarchy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewHierarchy::MessageProxyListenerForwarder::QueryInterface(
        ViewHierarchy::MessageProxyListenerForwarder *this,
        const struct _GUID *a2,
        void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 1))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
