/*
 * XREFs of ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800C0160
 * Callers:
 *     ??_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z @ 0x1800BB710 (--_GKeyboardOverriderDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ @ 0x1800C0700 (-DestroyOverriderProxy@KeyboardOverriderDispatcher@@AEAAJXZ.c)
 */

void __fastcall KeyboardOverriderDispatcher::~KeyboardOverriderDispatcher(KeyboardOverriderDispatcher *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // rcx
  void *v13; // rcx

  *(_QWORD *)this = &KeyboardOverriderDispatcher::`vftable'{for `IRemoteKeyboardOverriderCallback'};
  *((_QWORD *)this + 1) = &KeyboardOverriderDispatcher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyListener>'};
  KeyboardOverriderDispatcher::DestroyOverriderProxy(this);
  v2 = *((_QWORD *)this + 54);
  if ( v2 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 53);
  v3 = *((_QWORD *)this + 52);
  if ( v3 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 51);
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 50);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    *((_QWORD *)this + 50) = v5;
    if ( !v5 )
      *((_QWORD *)this + 49) = 0LL;
  }
  v6 = *((_QWORD *)this + 48);
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(*((_QWORD *)this + 47) + 8 * v6);
    if ( v7 )
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x128);
  }
  v8 = (void *)*((_QWORD *)this + 47);
  if ( v8 )
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 48)));
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 46), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 46) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 9);
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 7);
    if ( !v9 )
      break;
    v10 = v9 - 1;
    *((_QWORD *)this + 7) = v10;
    if ( !v10 )
      *((_QWORD *)this + 6) = 0LL;
  }
  v11 = *((_QWORD *)this + 5);
  while ( v11 )
  {
    --v11;
    v12 = *(void **)(*((_QWORD *)this + 4) + 8 * v11);
    if ( v12 )
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x170);
  }
  v13 = (void *)*((_QWORD *)this + 4);
  if ( v13 )
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 5)));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 5) = -1073741823;
}
