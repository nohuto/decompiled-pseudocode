/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?CryptReleaseContextNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BEC30
 * Callers:
 *     _HashAndBase32Encode_::_1_::dtor$0 @ 0x1800BEF5E (_HashAndBase32Encode_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void wil::details::CryptReleaseContextNoParam(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void wil::details::CryptReleaseContextNoParam(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>(
        HCRYPTPROV *a1)
{
  HCRYPTPROV v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CryptReleaseContext(v1, 0);
  return result;
}
