/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E124
 * Callers:
 *     _wil::AdaptFixedSizeToAllocatedResult_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void_(__cdecl_)(void__)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t______256__::_1_::dtor$1 @ 0x1800C2A62 (_wil--AdaptFixedSizeToAllocatedResult_wil--unique_any_t_wil--details--unique_storag_ea_1800C2A62.c)
 *     _wil::K32GetModuleFileNameExW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void_(__cdecl_)(void__)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t______128__::_1_::dtor$0 @ 0x18025A5B5 (_wil--K32GetModuleFileNameExW_wil--unique_any_t_wil--details--unique_storage_wil--details--resou.c)
 *     __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$2 @ 0x18033E53D (__anonymous_namespace_--GetFriendlyNameForExe_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
