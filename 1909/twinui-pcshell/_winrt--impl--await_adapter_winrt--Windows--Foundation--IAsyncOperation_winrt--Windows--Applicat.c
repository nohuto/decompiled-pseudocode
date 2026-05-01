/*
 * XREFs of _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_resume_::_1_::dtor$1 @ 0x1800A4023
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x18009BD44 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_resume_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(*(_QWORD *)(a2 + 72));
  }
  return result;
}
