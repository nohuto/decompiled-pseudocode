/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1801D55B4
 * Callers:
 *     _wil::AdaptFixedSizeToAllocatedResult_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______256__::_1_::dtor$1 @ 0x1801CE221 (_wil--AdaptFixedSizeToAllocatedResult_wil--unique_any_t_wil--details--unique_storag_ea_1801CE221.c)
 *     __lambda_03333eb1695976eafbeaf663887af01a_::operator()_::_1_::dtor$0 @ 0x1801D61B8 (__lambda_03333eb1695976eafbeaf663887af01a_--operator()_--_1_--dtor$0.c)
 *     _wil::K32GetModuleFileNameExW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______128__::_1_::dtor$0 @ 0x180201D41 (_wil--K32GetModuleFileNameExW_wil--unique_any_t_wil--details--unique_storage_wil--details--resou.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x18023076A (_DeserializePropertySet_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$2 @ 0x1802DD27F (__anonymous_namespace_--GetFriendlyNameForExe_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
