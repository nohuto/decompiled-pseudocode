/*
 * XREFs of ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x180147FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18005A1D4 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x180065168 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

__int64 __fastcall TextInputStateAdapter::Dispose(TextInputStateAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  HMODULE v3; // rcx

  *((_BYTE *)this + 48) = 0;
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v2 )
    MessageProxyReconnectAdapter::Dispose(v2);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 3);
  v3 = (HMODULE)*((_QWORD *)this + 11);
  if ( v3 )
  {
    FreeLibrary(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  return 0LL;
}
