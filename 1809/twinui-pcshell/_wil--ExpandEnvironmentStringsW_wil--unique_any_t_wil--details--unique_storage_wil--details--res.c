/*
 * XREFs of _wil::ExpandEnvironmentStringsW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______256__::_1_::dtor$0 @ 0x180095B7C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004D3C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

void __fastcall wil::ExpandEnvironmentStringsW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void____cdecl___void_____ptr64___CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______256__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(*(void ***)(a2 + 176));
  }
}
