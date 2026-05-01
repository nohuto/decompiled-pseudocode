/*
 * XREFs of ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414
 * Callers:
 *     _PenWorkspaceAppInstallBroker::PenWorkspaceAppInstallBroker_::_1_::dtor$1 @ 0x18009459F (_PenWorkspaceAppInstallBroker--PenWorkspaceAppInstallBroker_--_1_--dtor$1.c)
 *     ??_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z @ 0x1800948C0 (--_EPenWorkspaceAppInstallBroker@@UEAAPEAXI@Z.c)
 *     ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x180094F70 (-IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$2 @ 0x1800951A6 (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$2.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_::ProductId_::_1_::dtor$0 @ 0x1800952BC (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppIns_ea_1800952BC.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$1 @ 0x180096916 (_PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2_--_1_--dtor$1.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801DE7DB (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801DE87B (_winrt--to_hresult_--_1_--catch$18.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801DE91B (_winrt--to_hresult_--_1_--catch$19.c)
 *     _winrt::impl::hstring_builder::to_hstring_::_1_::dtor$0 @ 0x1801DEA12 (_winrt--impl--hstring_builder--to_hstring_--_1_--dtor$0.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x1800882EE (WindowsDeleteString_0.c)
 */

void __fastcall winrt::hstring::~hstring(HSTRING *this)
{
  HSTRING v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    WindowsDeleteString_0(v2);
    *this = 0LL;
  }
}
