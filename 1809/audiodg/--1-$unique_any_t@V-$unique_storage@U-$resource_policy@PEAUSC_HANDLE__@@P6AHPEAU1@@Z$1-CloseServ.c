/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUSC_HANDLE__@@P6AHPEAU1@@Z$1?CloseServiceHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140031774
 * Callers:
 *     __lambda_d1de4b53b525fd4013d62472baaa2c14_::operator()_::_1_::dtor$1 @ 0x140020FD3 (__lambda_d1de4b53b525fd4013d62472baaa2c14_--operator()_--_1_--dtor$1.c)
 *     __lambda_d1de4b53b525fd4013d62472baaa2c14_::operator()_::_1_::dtor$2 @ 0x140020FE5 (__lambda_d1de4b53b525fd4013d62472baaa2c14_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<SC_HANDLE__ *,int (*)(SC_HANDLE__ *),&int CloseServiceHandle(SC_HANDLE__ *),wistd::integral_constant<unsigned __int64,0>,SC_HANDLE__ *,0,std::nullptr_t>>>(
        SC_HANDLE *a1)
{
  SC_HANDLE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseServiceHandle(v1);
  return result;
}
