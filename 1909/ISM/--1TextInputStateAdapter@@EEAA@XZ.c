/*
 * XREFs of ??1TextInputStateAdapter@@EEAA@XZ @ 0x180147EE4
 * Callers:
 *     ??_GTextInputStateAdapter@@EEAAPEAXI@Z @ 0x180147F80 (--_GTextInputStateAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x180064F08 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TextInputStateAdapter::~TextInputStateAdapter(TextInputStateAdapter *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &TextInputStateAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &TextInputStateAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITextInputStateAdapter>'};
  *((_BYTE *)this + 56) = 0;
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  v2 = (HMODULE)*((_QWORD *)this + 12);
  if ( v2 )
  {
    FreeLibrary(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 6);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((__int64 *)this + 4);
  *((_DWORD *)this + 5) = -1073741823;
}
