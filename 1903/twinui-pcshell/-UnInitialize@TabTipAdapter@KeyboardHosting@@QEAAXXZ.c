/*
 * XREFs of ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180329174
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x180314700 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180324494 (-RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1804043C8 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
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
