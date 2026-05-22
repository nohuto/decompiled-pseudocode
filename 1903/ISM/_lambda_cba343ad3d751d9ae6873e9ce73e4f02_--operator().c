/*
 * XREFs of _lambda_cba343ad3d751d9ae6873e9ce73e4f02_::operator() @ 0x1801525A0
 * Callers:
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x180153844 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_cba343ad3d751d9ae6873e9ce73e4f02_::operator()(HANDLE **a1)
{
  CancelIoEx(**a1, 0LL);
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
           *a1,
           -1LL);
}
