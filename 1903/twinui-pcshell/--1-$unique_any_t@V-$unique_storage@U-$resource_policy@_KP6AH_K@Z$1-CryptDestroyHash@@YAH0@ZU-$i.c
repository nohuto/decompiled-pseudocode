/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AH_K@Z$1?CryptDestroyHash@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B0310
 * Callers:
 *     _HashAndBase32Encode_::_1_::dtor$1 @ 0x1800B066A (_HashAndBase32Encode_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>(
        HCRYPTHASH *a1)
{
  HCRYPTHASH v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CryptDestroyHash(v1);
  return result;
}
