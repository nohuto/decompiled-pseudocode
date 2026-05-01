/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180107A18
 * Callers:
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_exception_policy_::create_::_1_::dtor$0 @ 0x1801B3DA9 (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details.c)
 *     _VirtualDesktopRegistryHelpers::EnumKeys_::_1_::dtor$0 @ 0x1803E7AAC (_VirtualDesktopRegistryHelpers--EnumKeys_--_1_--dtor$0.c)
 *     _VirtualDesktopRegistryHelpers::EnumValues_::_1_::dtor$0 @ 0x1803E7CD5 (_VirtualDesktopRegistryHelpers--EnumValues_--_1_--dtor$0.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180414EA8 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180415590 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1804156B0 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180415780 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
