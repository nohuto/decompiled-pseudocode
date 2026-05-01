/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800380A0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180038610 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_180038610.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f)
    && !(unsigned int)InlineIsEqualGUID(v2, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978)
    && !(unsigned int)InlineIsEqualGUID(v5, &GUID_b755e6e0_b048_49cc_8911_11a041216f5f)
    && !(unsigned int)InlineIsEqualGUID(v6, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2)
    && !(unsigned int)InlineIsEqualGUID(v7, &GUID_2a239388_fc85_4077_981e_9e4205cf9451)
    && !(unsigned int)InlineIsEqualGUID(v8, &GUID_8332fbec_5803_4461_be72_91b106e7af8a)
    && !(unsigned int)InlineIsEqualGUID(v9, &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0)
    && !(unsigned int)InlineIsEqualGUID(v10, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164)
    && !(unsigned int)InlineIsEqualGUID(v11, &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b)
    && !(unsigned int)InlineIsEqualGUID(v12, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db)
    && !(unsigned int)InlineIsEqualGUID(v13, &GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe)
    && !(unsigned int)InlineIsEqualGUID(v14, &GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8) )
  {
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
             v3 + 8,
             v15,
             v4);
  }
  *v4 = v3;
  return 0LL;
}
