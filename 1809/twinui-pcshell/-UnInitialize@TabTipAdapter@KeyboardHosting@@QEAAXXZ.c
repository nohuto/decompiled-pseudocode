/*
 * XREFs of ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C9124
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1802BA6E0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x1802C60E8 (-RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18039EDC8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::UnInitialize(KeyboardHosting::TabTipAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  __int64 v3; // rcx

  KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(this);
  if ( *((_QWORD *)this + 5) )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    MessageProxyReconnectAdapter::Dispose(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  }
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  }
}
