/*
 * XREFs of _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_::ProductId_::_1_::dtor$0 @ 0x1800952BC
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414 (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_::ProductId_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::hstring::~hstring(*(winrt::hstring **)(a2 + 72));
  }
}
