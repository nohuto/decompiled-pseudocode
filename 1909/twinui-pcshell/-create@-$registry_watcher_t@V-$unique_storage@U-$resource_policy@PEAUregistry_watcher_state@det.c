/*
 * XREFs of ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180128C48
 * Callers:
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180127D88 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?InitializeHolographicUsageKeyWatcher@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DC38C (-InitializeHolographicUsageKeyWatcher@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180337A20 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180128CF0 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 */

__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        __int64 a1,
        HKEY a2,
        const WCHAR *a3,
        char a4,
        __int64 a5)
{
  LSTATUS Key; // eax
  __int64 v8; // r8
  signed int common; // ebx
  HKEY hKey[3]; // [rsp+50h] [rbp-18h] BYREF

  hKey[0] = 0LL;
  Key = RegCreateKeyExW(a2, a3, 0, 0LL, 0, 0x10u, 0LL, hKey, 0LL);
  common = Key;
  if ( Key > 0 )
    common = (unsigned __int16)Key | 0x80070000;
  if ( common >= 0 )
  {
    LOBYTE(v8) = a4;
    common = wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
               a1,
               hKey,
               v8,
               a5);
  }
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  return (unsigned int)common;
}
