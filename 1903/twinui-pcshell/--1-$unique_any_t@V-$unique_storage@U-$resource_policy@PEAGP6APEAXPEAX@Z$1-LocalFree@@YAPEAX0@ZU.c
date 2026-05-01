/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801C4CE0
 * Callers:
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x1800B0282 (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--details--resource_p.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B067C (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 *     _TryGetCertSubjectName_::_1_::dtor$4 @ 0x1800B09DE (_TryGetCertSubjectName_--_1_--dtor$4.c)
 *     _CortanaStoreAppHelper::ApplyDeviceCapabilitiesToStoreAppOnReplace_::_1_::dtor$1 @ 0x1801C614C (_CortanaStoreAppHelper--ApplyDeviceCapabilitiesToStoreAppOnReplace_--_1_--dtor$1.c)
 *     _CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace_::_1_::dtor$1 @ 0x1801C823A (_CortanaStoreAppHelper--RevokeDeviceCapabilitiesFromSystemAppOnReplace_--_1_--dtor$1.c)
 *     _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180409B60 (_lambda_0c37c1600930a15155a5eb9c2ae4abb7_--operator().c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
