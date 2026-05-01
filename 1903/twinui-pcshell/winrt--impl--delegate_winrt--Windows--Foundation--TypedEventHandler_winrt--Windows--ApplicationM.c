/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___::type__lambda_89fb5ab193d74e8b0300aa0759d904c8___::Invoke @ 0x180094F10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator() @ 0x180094780 (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___::type__lambda_89fb5ab193d74e8b0300aa0759d904c8___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1 + 8;
  try
  {
    lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator()(v2, (__int64)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    winrt::to_hresult(&v4);
  }
  return result;
}
