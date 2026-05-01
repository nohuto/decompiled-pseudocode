/*
 * XREFs of ??1?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800946D8
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f42f65653c13c4ca9c04beaf1720b2f0__&__::_1_::dtor$2 @ 0x180094329 (_winrt--impl--factory_cache_entry_winrt--Windows--ApplicationModel--Store--Preview-_ea_180094329.c)
 *     _winrt::get_activation_factory_winrt::Windows::Foundation::IActivationFactory__::_1_::dtor$0 @ 0x18009444E (_winrt--get_activation_factory_winrt--Windows--Foundation--IActivationFactory__--_1_--dtor$0.c)
 *     __lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator()_::_1_::dtor$1 @ 0x18009483A (__lambda_89fb5ab193d74e8b0300aa0759d904c8_--operator()_--_1_--dtor$1.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager_::AppInstallItems_::_1_::dtor$0 @ 0x18009499F (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_w.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem_::GetCurrentStatus_::_1_::dtor$0 @ 0x180094B53 (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem_winr.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager_::GetIsAppAllowedToInstallAsync_::_1_::dtor$0 @ 0x180094C4F (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppIns_ea_180094C4F.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$0 @ 0x18009515F (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$0.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$9 @ 0x18009516B (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$9.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$1 @ 0x18009519A (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$1.c)
 *     _PenWorkspaceAppInstallBroker::IsWhiteboardInstalling_::_1_::dtor$3 @ 0x1800951B2 (_PenWorkspaceAppInstallBroker--IsWhiteboardInstalling_--_1_--dtor$3.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800968E8 (_PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2_--_1_--dtor$0.c)
 *     _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$2 @ 0x180096944 (_PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2_--_1_--dtor$2.c)
 *     _PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2_::_1_::dtor$3 @ 0x180096972 (_PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2_--_1_--dtor$3.c)
 *     _winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager_::StartAppInstallAsync_::_1_::dtor$0 @ 0x180096CDF (_winrt--impl--consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppIns_ea_180096CDF.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_ready_::_1_::dtor$0 @ 0x180096E41 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--await_ready_--_.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::await_resume_::_1_::dtor$1 @ 0x180096EA3 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Applicat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::~IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>(
        _QWORD *a1)
{
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1);
}
