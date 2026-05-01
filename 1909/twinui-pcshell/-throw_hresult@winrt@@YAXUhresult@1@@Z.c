/*
 * XREFs of ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540
 * Callers:
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUISettings@ViewManagement@UI@Windows@2@XZ @ 0x18009B290 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@-$consume_IActivationFactory@U.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009BA90 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ?GetColorValue@?$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUColor@UI@Windows@3@AEBW4UIColorType@ViewManagement@563@@Z @ 0x18009CCB4 (-GetColorValue@-$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Wi.c)
 *     ??$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@?$consume_IActivationFactory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@XZ @ 0x1800A10F0 (--$ActivateInstance@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 *     ??$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@Z@Z @ 0x1800A162C (--$capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@Z$$V@winrt@@YA-AU-$com_ptr@UICon.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A17C0 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?AppInstallItems@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800A1B48 (-AppInstallItems@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallMana.c)
 *     ?GetCurrentStatus@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A1CF8 (-GetCurrentStatus@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIte.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1800A1DE8 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?InstallState@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A201C (-InstallState@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___::type__lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke @ 0x1800A2060 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool___--type__.c)
 *     ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x1800A2160 (-IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z.c)
 *     ?ProductId@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800A245C (-ProductId@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@0_N1@Z @ 0x1800A3DF8 (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1800A3E8C (-StatusChanged@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@U.c)
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A3F48 (-await_ready@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@App.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x1800A3FD4 (-await_resume@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@Ap.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A4050 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A408C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A41C4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 *     ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1800AE3B4 (--$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U-$even.c)
 *     ??$as@UIUnknown@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1800BFAE4 (--$as@UIUnknown@@@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AU-$com_ptr@UIUnknown@@@1@XZ.c)
 *     ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1800BFE78 (--$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@.c)
 *     ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C0104 (--$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@wi.c)
 *     ?NetworkStatusChanged@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBUNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@3@@Z @ 0x1800C0F6C (-NetworkStatusChanged@-$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINet.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130 (-throw_last_error@winrt@@YAXXZ.c)
 *     ??$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUIGlobalizationPreferencesStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C6764 (--$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@w.c)
 *     ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUConnectionProfile@Connectivity@Networking@Windows@3@XZ @ 0x1800C7628 (-GetInternetConnectionProfile@-$consume_Windows_Networking_Connectivity_INetworkInformationStati.c)
 *     ?HomeGeographicRegion@?$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800C77EC (-HomeGeographicRegion@-$consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics@UIGl.c)
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D29AC (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801FD748 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x1801FDBA0 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x18041C304 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@Y.c)
 *     ??$as@UIWeakReferenceSource@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@23@@impl@winrt@@YA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x18041C390 (--$as@UIWeakReferenceSource@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@@23@@imp.c)
 *     ??$as@UTabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@UIInspectable@@@impl@winrt@@YA?AUTabDataModel@Tabs@ComposableShell@Internal@Windows@1@PEAUIInspectable@@@Z @ 0x18041C41C (--$as@UTabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@UIInspectable@@@impl@winrt@@YA-.c)
 *     ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18041CAFC (-AddedTab@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITa.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel@UITabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x18041CB74 (-CreateWatcher@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel@UITabDataModel@Tabs.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18041D108 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18041D724 (-TabsChanged@-$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModel.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x1801ED274 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 */

void __fastcall __noreturn winrt::throw_hresult(unsigned int a1)
{
  _QWORD pExceptionObject[4]; // [rsp+20h] [rbp-20h] BYREF

  switch ( a1 )
  {
    case 0x8007000E:
      pExceptionObject[2] = 0LL;
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      throw (std::bad_alloc *)pExceptionObject;
    case 0x80070005:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_access_denied);
      throw (winrt::hresult_access_denied *)pExceptionObject;
    case 0x8001010E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_wrong_thread);
      throw (winrt::hresult_wrong_thread *)pExceptionObject;
    case 0x80004001:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_not_implemented);
      throw (winrt::hresult_not_implemented *)pExceptionObject;
    case 0x80070057:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_invalid_argument);
      throw (winrt::hresult_invalid_argument *)pExceptionObject;
    case 0x8000000B:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_out_of_bounds);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    case 0x80004002:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_no_interface);
      throw (winrt::hresult_no_interface *)pExceptionObject;
    case 0x80040111:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_class_not_available);
      throw (winrt::hresult_class_not_available *)pExceptionObject;
    case 0x8000000C:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_changed_state);
      throw (winrt::hresult_changed_state *)pExceptionObject;
    case 0x8000000E:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_method_call);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    case 0x8000000D:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_state_change);
      throw (winrt::hresult_illegal_state_change *)pExceptionObject;
    case 0x80000018:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_illegal_delegate_assignment);
      throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
    case 0x800704C7:
      winrt::hresult_error::hresult_error((__int64)pExceptionObject, winrt::impl::error_canceled);
      throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::hresult_error::hresult_error((__int64)pExceptionObject, a1);
  throw (winrt::hresult_error *)pExceptionObject;
}
