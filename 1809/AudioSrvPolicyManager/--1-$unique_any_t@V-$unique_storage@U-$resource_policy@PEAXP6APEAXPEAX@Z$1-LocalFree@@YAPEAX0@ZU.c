/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001BFC8
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$4 @ 0x1800393DC (_CApplicationManager--RpcGetProcess_--_1_--dtor$4.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$5 @ 0x1800393EE (_CApplicationManager--RpcGetProcess_--_1_--dtor$5.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$10 @ 0x180039448 (_CApplicationManager--RpcGetProcess_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
