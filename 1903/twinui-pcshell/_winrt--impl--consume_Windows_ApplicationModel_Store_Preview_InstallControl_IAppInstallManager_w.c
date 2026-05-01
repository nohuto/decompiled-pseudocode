/*
 * XREFs of _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager_::AppInstallItems_::_1_::dtor$0 @ 0x18009499F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800946D8 (--1-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager_::AppInstallItems_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(*(_QWORD **)(a2 + 72));
  }
  return result;
}
