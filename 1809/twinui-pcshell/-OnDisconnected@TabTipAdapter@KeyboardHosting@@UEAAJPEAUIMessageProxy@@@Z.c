/*
 * XREFs of ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x1802C3540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18039EDC8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisconnected(
        KeyboardHosting::TabTipAdapter *this,
        struct IMessageProxy *a2)
{
  __int64 *v2; // rbx
  MessageProxyReconnectAdapter *v5; // rcx
  struct IMessageProxy *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    (**(void (__fastcall ***)(__int64, GUID *, struct IMessageProxy **))*v2)(
      *v2,
      &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
      &v7);
    if ( v7 == a2 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  v5 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    MessageProxyReconnectAdapter::Dispose(v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  }
  return 0LL;
}
